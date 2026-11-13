#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPJPHILONME;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CPJPHILONME_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x204E8D10)
#define CPJPHILONME_CCTOR_OFFSET UNITYSDK_OFFSET(0x204E9090)
#define CPJPHILONME_CLONE_OFFSET UNITYSDK_OFFSET(0x204E88F0)
#define CPJPHILONME_CTOR_1_OFFSET UNITYSDK_OFFSET(0x204E88B0)
#define CPJPHILONME_CTOR_OFFSET UNITYSDK_OFFSET(0x204E88A0)
#define CPJPHILONME_DOINAIBOGOI_OFFSET UNITYSDK_OFFSET(0x204E8960)
#define CPJPHILONME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x204E8A80)
#define CPJPHILONME_EQUALS_OFFSET UNITYSDK_OFFSET(0x204E89A0)
#define CPJPHILONME_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x204E8990)
#define CPJPHILONME_GENDDELHOAC_OFFSET UNITYSDK_OFFSET(0x204E8940)
#define CPJPHILONME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x204E8B50)
#define CPJPHILONME_IELCCNPGBLI_OFFSET UNITYSDK_OFFSET(0x204E8970)
#define CPJPHILONME_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x204E8860)
#define CPJPHILONME_LFFPHGIJFKE_OFFSET UNITYSDK_OFFSET(0x204E8950)
#define CPJPHILONME_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x204E8EF0)
#define CPJPHILONME_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x204E8EA0)
#define CPJPHILONME_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x204E8980)
#define CPJPHILONME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x204E8890)
#define CPJPHILONME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x204E8B80)
#define CPJPHILONME_WRITETO_OFFSET UNITYSDK_OFFSET(0x204E8BE0)

inline static constexpr unsigned int CPJPHILONME_TypeDefinitionIndex = 27020;

	class CPJPHILONME : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 ODFNECEGMIG; // 0x1C
		::System::UInt32 FJLILEOEEIB; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CPJPHILONME*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CPJPHILONME*>**)UnitySDK::FromName("", "CPJPHILONME")->GetStaticField(0x19480);
		}

		// static const ::System::Object KGGPPGLFICI; // 0x0
		// static const ::System::Object JBLABOEPILK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJPHILONME_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CPJPHILONME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPJPHILONME*))((::PBYTE)hIl2Cpp + CPJPHILONME_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPJPHILONME_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CPJPHILONME*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CPJPHILONME*>*(*)())((::PBYTE)hIl2Cpp + CPJPHILONME_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJPHILONME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CPJPHILONME* Clone()
		{
			return ((::CPJPHILONME*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJPHILONME_CLONE_OFFSET))(this);
		}

		::System::UInt32 GENDDELHOAC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJPHILONME_GENDDELHOAC_OFFSET))(this);
		}

		::System::Void LFFPHGIJFKE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPJPHILONME_LFFPHGIJFKE_OFFSET))(this, a1);
		}

		::System::UInt32 DOINAIBOGOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJPHILONME_DOINAIBOGOI_OFFSET))(this);
		}

		::System::Void IELCCNPGBLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPJPHILONME_IELCCNPGBLI_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJPHILONME_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPJPHILONME_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPJPHILONME_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CPJPHILONME* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPJPHILONME*))((::PBYTE)hIl2Cpp + CPJPHILONME_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJPHILONME_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJPHILONME_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CPJPHILONME_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJPHILONME_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CPJPHILONME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPJPHILONME*))((::PBYTE)hIl2Cpp + CPJPHILONME_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CPJPHILONME_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
