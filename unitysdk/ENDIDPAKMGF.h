#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENDIDPAKMGF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ENDIDPAKMGF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2EA870)
#define ENDIDPAKMGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2EAA90)
#define ENDIDPAKMGF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2EA4C0)
#define ENDIDPAKMGF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2EA490)
#define ENDIDPAKMGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2EA480)
#define ENDIDPAKMGF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2EA5F0)
#define ENDIDPAKMGF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2EA520)
#define ENDIDPAKMGF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2EA510)
#define ENDIDPAKMGF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2EA760)
#define ENDIDPAKMGF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2EA440)
#define ENDIDPAKMGF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2EA930)
#define ENDIDPAKMGF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2EA900)
#define ENDIDPAKMGF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2EA500)
#define ENDIDPAKMGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2EA470)
#define ENDIDPAKMGF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2EA790)
#define ENDIDPAKMGF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2EA7F0)

inline static constexpr unsigned int ENDIDPAKMGF_TypeDefinitionIndex = 28098;

	class ENDIDPAKMGF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ENDIDPAKMGF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ENDIDPAKMGF*>**)UnitySDK::FromName("", "ENDIDPAKMGF")->GetStaticField(0x543D0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDIDPAKMGF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ENDIDPAKMGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENDIDPAKMGF*))((::PBYTE)hIl2Cpp + ENDIDPAKMGF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENDIDPAKMGF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ENDIDPAKMGF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ENDIDPAKMGF*>*(*)())((::PBYTE)hIl2Cpp + ENDIDPAKMGF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDIDPAKMGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ENDIDPAKMGF* Clone()
		{
			return ((::ENDIDPAKMGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDIDPAKMGF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDIDPAKMGF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ENDIDPAKMGF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENDIDPAKMGF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ENDIDPAKMGF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENDIDPAKMGF*))((::PBYTE)hIl2Cpp + ENDIDPAKMGF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDIDPAKMGF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDIDPAKMGF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ENDIDPAKMGF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENDIDPAKMGF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ENDIDPAKMGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENDIDPAKMGF*))((::PBYTE)hIl2Cpp + ENDIDPAKMGF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ENDIDPAKMGF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
