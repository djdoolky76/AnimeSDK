#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNFGMKBICKJ;
class DGHPIDMDOJM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BNFGMKBICKJ_BGHKDLONBOD_OFFSET UNITYSDK_OFFSET(0x1E005790)
#define BNFGMKBICKJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E005E00)
#define BNFGMKBICKJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E006180)
#define BNFGMKBICKJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E005760)
#define BNFGMKBICKJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0056B0)
#define BNFGMKBICKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E005660)
#define BNFGMKBICKJ_DKGGGNOEKGB_OFFSET UNITYSDK_OFFSET(0x1E0057B0)
#define BNFGMKBICKJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E005930)
#define BNFGMKBICKJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E005800)
#define BNFGMKBICKJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0057F0)
#define BNFGMKBICKJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E005AF0)
#define BNFGMKBICKJ_IBAGHDNPGCO_OFFSET UNITYSDK_OFFSET(0x1E0057A0)
#define BNFGMKBICKJ_IJNIBMJIFNC_OFFSET UNITYSDK_OFFSET(0x1E0057D0)
#define BNFGMKBICKJ_ILFGHGCDOMG_OFFSET UNITYSDK_OFFSET(0x1E0057C0)
#define BNFGMKBICKJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E005620)
#define BNFGMKBICKJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E006050)
#define BNFGMKBICKJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E005FC0)
#define BNFGMKBICKJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0057E0)
#define BNFGMKBICKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E005650)
#define BNFGMKBICKJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E005C10)
#define BNFGMKBICKJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E005C70)

inline static constexpr unsigned int BNFGMKBICKJ_TypeDefinitionIndex = 28833;

	class BNFGMKBICKJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::DGHPIDMDOJM* JIHIDBNIKAG; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ACCPNDENONH; // 0x20
		::System::UInt32 HIJEJBOFOIB; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FIOOHIEEBGA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "BNFGMKBICKJ")->GetStaticField(0x5D710);
		}

		static ::Google::Protobuf::MessageParser_1<::BNFGMKBICKJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BNFGMKBICKJ*>**)UnitySDK::FromName("", "BNFGMKBICKJ")->GetStaticField(0x5D718);
		}

		// static const ::System::Object MCEJJGELGPI; // 0x0
		// static const ::System::Object KACFJBLIPKF; // 0x0
		// static const ::System::Object LEALNOIOAKC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFGMKBICKJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BNFGMKBICKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNFGMKBICKJ*))((::PBYTE)hIl2Cpp + BNFGMKBICKJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNFGMKBICKJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BNFGMKBICKJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BNFGMKBICKJ*>*(*)())((::PBYTE)hIl2Cpp + BNFGMKBICKJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFGMKBICKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BNFGMKBICKJ* Clone()
		{
			return ((::BNFGMKBICKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFGMKBICKJ_CLONE_OFFSET))(this);
		}

		::DGHPIDMDOJM* BGHKDLONBOD()
		{
			return ((::DGHPIDMDOJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFGMKBICKJ_BGHKDLONBOD_OFFSET))(this);
		}

		::System::Void IBAGHDNPGCO(::DGHPIDMDOJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGHPIDMDOJM*))((::PBYTE)hIl2Cpp + BNFGMKBICKJ_IBAGHDNPGCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DKGGGNOEKGB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFGMKBICKJ_DKGGGNOEKGB_OFFSET))(this);
		}

		::System::UInt32 ILFGHGCDOMG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFGMKBICKJ_ILFGHGCDOMG_OFFSET))(this);
		}

		::System::Void IJNIBMJIFNC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BNFGMKBICKJ_IJNIBMJIFNC_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFGMKBICKJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BNFGMKBICKJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BNFGMKBICKJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BNFGMKBICKJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BNFGMKBICKJ*))((::PBYTE)hIl2Cpp + BNFGMKBICKJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFGMKBICKJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFGMKBICKJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BNFGMKBICKJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFGMKBICKJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BNFGMKBICKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNFGMKBICKJ*))((::PBYTE)hIl2Cpp + BNFGMKBICKJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BNFGMKBICKJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
