#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFDCPCNBPAD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DFDCPCNBPAD_BAMLOLEEIML_OFFSET UNITYSDK_OFFSET(0x1E19D370)
#define DFDCPCNBPAD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E19D6D0)
#define DFDCPCNBPAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E19D8F0)
#define DFDCPCNBPAD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E19D320)
#define DFDCPCNBPAD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E19D2F0)
#define DFDCPCNBPAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E19D2E0)
#define DFDCPCNBPAD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E19D450)
#define DFDCPCNBPAD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E19D380)
#define DFDCPCNBPAD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E19D5C0)
#define DFDCPCNBPAD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E19D2A0)
#define DFDCPCNBPAD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E19D790)
#define DFDCPCNBPAD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E19D760)
#define DFDCPCNBPAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E19D2D0)
#define DFDCPCNBPAD_PNKNFPCPAAI_OFFSET UNITYSDK_OFFSET(0x1E19D360)
#define DFDCPCNBPAD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E19D5F0)
#define DFDCPCNBPAD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E19D650)

inline static constexpr unsigned int DFDCPCNBPAD_TypeDefinitionIndex = 28439;

	class DFDCPCNBPAD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FKHIFCDFCKJ; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DFDCPCNBPAD")->GetStaticField(0x321C0);
		}

		// static const ::System::Object LCICMEPLFGE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDCPCNBPAD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DFDCPCNBPAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFDCPCNBPAD*))((::PBYTE)hIl2Cpp + DFDCPCNBPAD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFDCPCNBPAD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DFDCPCNBPAD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDCPCNBPAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DFDCPCNBPAD* Clone()
		{
			return ((::DFDCPCNBPAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDCPCNBPAD_CLONE_OFFSET))(this);
		}

		::System::UInt32 PNKNFPCPAAI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDCPCNBPAD_PNKNFPCPAAI_OFFSET))(this);
		}

		::System::Void BAMLOLEEIML(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFDCPCNBPAD_BAMLOLEEIML_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFDCPCNBPAD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DFDCPCNBPAD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFDCPCNBPAD*))((::PBYTE)hIl2Cpp + DFDCPCNBPAD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDCPCNBPAD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDCPCNBPAD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DFDCPCNBPAD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDCPCNBPAD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DFDCPCNBPAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFDCPCNBPAD*))((::PBYTE)hIl2Cpp + DFDCPCNBPAD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DFDCPCNBPAD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
