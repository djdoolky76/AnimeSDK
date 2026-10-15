#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFGKJEFPJPB;
class NJHAGKGHKJJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HFGKJEFPJPB_ANIPJDACAFF_OFFSET UNITYSDK_OFFSET(0x1E53AB70)
#define HFGKJEFPJPB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E53B130)
#define HFGKJEFPJPB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E53B570)
#define HFGKJEFPJPB_CJPONEHNMPB_OFFSET UNITYSDK_OFFSET(0x1E53ABB0)
#define HFGKJEFPJPB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E53AA60)
#define HFGKJEFPJPB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E53A9A0)
#define HFGKJEFPJPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E53A990)
#define HFGKJEFPJPB_DBNCBJOBDLA_OFFSET UNITYSDK_OFFSET(0x1E53AB50)
#define HFGKJEFPJPB_DOIKADKIKID_OFFSET UNITYSDK_OFFSET(0x1E53ABA0)
#define HFGKJEFPJPB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E53ACF0)
#define HFGKJEFPJPB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E53ABD0)
#define HFGKJEFPJPB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E53AB40)
#define HFGKJEFPJPB_FFHPLCEIPKO_OFFSET UNITYSDK_OFFSET(0x1E53AB60)
#define HFGKJEFPJPB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E53AE00)
#define HFGKJEFPJPB_INBIMBMBILP_OFFSET UNITYSDK_OFFSET(0x1E53ABC0)
#define HFGKJEFPJPB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E53A950)
#define HFGKJEFPJPB_LHANLMMBCHA_OFFSET UNITYSDK_OFFSET(0x1E53AB90)
#define HFGKJEFPJPB_LLOCJDMECEO_OFFSET UNITYSDK_OFFSET(0x1E53AB80)
#define HFGKJEFPJPB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E53B480)
#define HFGKJEFPJPB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E53B350)
#define HFGKJEFPJPB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E53AB30)
#define HFGKJEFPJPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E53A980)
#define HFGKJEFPJPB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E53AEA0)
#define HFGKJEFPJPB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E53AF00)

inline static constexpr unsigned int HFGKJEFPJPB_TypeDefinitionIndex = 31125;

	class HFGKJEFPJPB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NJHAGKGHKJJ* EDONHMJJOEN; // 0x18
		::System::Int64 MDEKCLOGNPN; // 0x20
		::System::Boolean BKGKHADDMIL; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 NAEACGPKNNH; // 0x2C
		::System::UInt32 CFBAPBPAJBJ; // 0x30
		static ::Google::Protobuf::MessageParser_1<::HFGKJEFPJPB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HFGKJEFPJPB*>**)UnitySDK::FromName("", "HFGKJEFPJPB")->GetStaticField(0x2E8A0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HJIIFDLAJMJ; // 0x0
		// static const ::System::Object DDIPIEKMKDI; // 0x0
		// static const ::System::Object OBDJGNJIJLG; // 0x0
		// static const ::System::Object LLLNLCHAAIO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGKJEFPJPB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HFGKJEFPJPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFGKJEFPJPB*))((::PBYTE)hIl2Cpp + HFGKJEFPJPB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFGKJEFPJPB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HFGKJEFPJPB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HFGKJEFPJPB*>*(*)())((::PBYTE)hIl2Cpp + HFGKJEFPJPB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGKJEFPJPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HFGKJEFPJPB* Clone()
		{
			return ((::HFGKJEFPJPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGKJEFPJPB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGKJEFPJPB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HFGKJEFPJPB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::NJHAGKGHKJJ* DBNCBJOBDLA()
		{
			return ((::NJHAGKGHKJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGKJEFPJPB_DBNCBJOBDLA_OFFSET))(this);
		}

		::System::Void FFHPLCEIPKO(::NJHAGKGHKJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJHAGKGHKJJ*))((::PBYTE)hIl2Cpp + HFGKJEFPJPB_FFHPLCEIPKO_OFFSET))(this, a1);
		}

		::System::Int64 ANIPJDACAFF()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGKJEFPJPB_ANIPJDACAFF_OFFSET))(this);
		}

		::System::Void LLOCJDMECEO(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + HFGKJEFPJPB_LLOCJDMECEO_OFFSET))(this, a1);
		}

		::System::UInt32 LHANLMMBCHA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGKJEFPJPB_LHANLMMBCHA_OFFSET))(this);
		}

		::System::Void DOIKADKIKID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HFGKJEFPJPB_DOIKADKIKID_OFFSET))(this, a1);
		}

		::System::Boolean CJPONEHNMPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGKJEFPJPB_CJPONEHNMPB_OFFSET))(this);
		}

		::System::Void INBIMBMBILP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HFGKJEFPJPB_INBIMBMBILP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFGKJEFPJPB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HFGKJEFPJPB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFGKJEFPJPB*))((::PBYTE)hIl2Cpp + HFGKJEFPJPB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGKJEFPJPB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGKJEFPJPB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HFGKJEFPJPB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGKJEFPJPB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HFGKJEFPJPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFGKJEFPJPB*))((::PBYTE)hIl2Cpp + HFGKJEFPJPB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HFGKJEFPJPB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
