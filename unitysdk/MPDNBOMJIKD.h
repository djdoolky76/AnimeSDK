#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOKBAGIKJHB;
class MPDNBOMJIKD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MPDNBOMJIKD_BJGCAEEMCHP_OFFSET UNITYSDK_OFFSET(0x1EA88E40)
#define MPDNBOMJIKD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA89390)
#define MPDNBOMJIKD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA89830)
#define MPDNBOMJIKD_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA88D10)
#define MPDNBOMJIKD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA88C30)
#define MPDNBOMJIKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA88C20)
#define MPDNBOMJIKD_DNLFGOJCGPF_OFFSET UNITYSDK_OFFSET(0x1EA88E10)
#define MPDNBOMJIKD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA88F90)
#define MPDNBOMJIKD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA88E80)
#define MPDNBOMJIKD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA88E70)
#define MPDNBOMJIKD_FKGJFNBIGFJ_OFFSET UNITYSDK_OFFSET(0x1EA88E50)
#define MPDNBOMJIKD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA89130)
#define MPDNBOMJIKD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA88BE0)
#define MPDNBOMJIKD_KPMCEDLKCGL_OFFSET UNITYSDK_OFFSET(0x1EA88E20)
#define MPDNBOMJIKD_LOKBKOPHIIA_OFFSET UNITYSDK_OFFSET(0x1EA88E30)
#define MPDNBOMJIKD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA89720)
#define MPDNBOMJIKD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA89600)
#define MPDNBOMJIKD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA88E60)
#define MPDNBOMJIKD_OPBDOBDPFFC_OFFSET UNITYSDK_OFFSET(0x1EA88E00)
#define MPDNBOMJIKD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA88C10)
#define MPDNBOMJIKD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA891A0)
#define MPDNBOMJIKD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA89200)

inline static constexpr unsigned int MPDNBOMJIKD_TypeDefinitionIndex = 32112;

	class MPDNBOMJIKD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::LOKBAGIKJHB* IMBBAHFLMGN; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::Byte _padding0[0x4];
		::System::UInt64 ADLMCECONCK; // 0x28
		::System::UInt64 LKKMKMPFEFB; // 0x30
		static ::Google::Protobuf::MessageParser_1<::MPDNBOMJIKD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MPDNBOMJIKD*>**)UnitySDK::FromName("", "MPDNBOMJIKD")->GetStaticField(0x5B880);
		}

		// static const ::System::Object HIPHCCAKDHG; // 0x0
		// static const ::System::Object NGGHNIIOMBB; // 0x0
		// static const ::System::Object FFFNHDEGOGJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDNBOMJIKD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MPDNBOMJIKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPDNBOMJIKD*))((::PBYTE)hIl2Cpp + MPDNBOMJIKD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPDNBOMJIKD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MPDNBOMJIKD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MPDNBOMJIKD*>*(*)())((::PBYTE)hIl2Cpp + MPDNBOMJIKD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDNBOMJIKD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MPDNBOMJIKD* Clone()
		{
			return ((::MPDNBOMJIKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDNBOMJIKD_CLONE_OFFSET))(this);
		}

		::LOKBAGIKJHB* OPBDOBDPFFC()
		{
			return ((::LOKBAGIKJHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDNBOMJIKD_OPBDOBDPFFC_OFFSET))(this);
		}

		::System::Void DNLFGOJCGPF(::LOKBAGIKJHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOKBAGIKJHB*))((::PBYTE)hIl2Cpp + MPDNBOMJIKD_DNLFGOJCGPF_OFFSET))(this, a1);
		}

		::System::UInt64 KPMCEDLKCGL()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDNBOMJIKD_KPMCEDLKCGL_OFFSET))(this);
		}

		::System::Void LOKBKOPHIIA(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MPDNBOMJIKD_LOKBKOPHIIA_OFFSET))(this, a1);
		}

		::System::UInt64 BJGCAEEMCHP()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDNBOMJIKD_BJGCAEEMCHP_OFFSET))(this);
		}

		::System::Void FKGJFNBIGFJ(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MPDNBOMJIKD_FKGJFNBIGFJ_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDNBOMJIKD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MPDNBOMJIKD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MPDNBOMJIKD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MPDNBOMJIKD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MPDNBOMJIKD*))((::PBYTE)hIl2Cpp + MPDNBOMJIKD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDNBOMJIKD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDNBOMJIKD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MPDNBOMJIKD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MPDNBOMJIKD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MPDNBOMJIKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MPDNBOMJIKD*))((::PBYTE)hIl2Cpp + MPDNBOMJIKD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MPDNBOMJIKD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
