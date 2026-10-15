#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHLEKKNDBBE.h"
#include "unitysdk/System/Object.h"
class AMPMJPCFLND;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AMPMJPCFLND_AJNAELPAAFB_OFFSET UNITYSDK_OFFSET(0x1E5273D0)
#define AMPMJPCFLND_BIFJKDIHKOK_OFFSET UNITYSDK_OFFSET(0x1E5273F0)
#define AMPMJPCFLND_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E527780)
#define AMPMJPCFLND_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E527A20)
#define AMPMJPCFLND_CLFBFDMPMLF_OFFSET UNITYSDK_OFFSET(0x1E5273C0)
#define AMPMJPCFLND_CLONE_OFFSET UNITYSDK_OFFSET(0x1E527370)
#define AMPMJPCFLND_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E527330)
#define AMPMJPCFLND_CTOR_OFFSET UNITYSDK_OFFSET(0x1E527320)
#define AMPMJPCFLND_EMGHGCGDEOL_OFFSET UNITYSDK_OFFSET(0x1E5273E0)
#define AMPMJPCFLND_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5274E0)
#define AMPMJPCFLND_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E527400)
#define AMPMJPCFLND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5275C0)
#define AMPMJPCFLND_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5272E0)
#define AMPMJPCFLND_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5278A0)
#define AMPMJPCFLND_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E527860)
#define AMPMJPCFLND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E527310)
#define AMPMJPCFLND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5275F0)
#define AMPMJPCFLND_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E527650)

	class AMPMJPCFLND : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FHLEKKNDBBE GEAOOKLGNKJ; // 0x18
		::System::Boolean JLFGIAJFPHP; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AMPMJPCFLND")->GetStaticField(0x3D310);
		}

		// static const ::System::Object FCEJEIALBLM; // 0x0
		// static const ::System::Object GAKEBCKDHCE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPMJPCFLND_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AMPMJPCFLND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMPMJPCFLND*))((::PBYTE)hIl2Cpp + AMPMJPCFLND_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMPMJPCFLND_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AMPMJPCFLND_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPMJPCFLND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AMPMJPCFLND* Clone()
		{
			return ((::AMPMJPCFLND*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPMJPCFLND_CLONE_OFFSET))(this);
		}

		::FHLEKKNDBBE CLFBFDMPMLF()
		{
			return ((::FHLEKKNDBBE(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPMJPCFLND_CLFBFDMPMLF_OFFSET))(this);
		}

		::System::Void AJNAELPAAFB(::FHLEKKNDBBE a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHLEKKNDBBE))((::PBYTE)hIl2Cpp + AMPMJPCFLND_AJNAELPAAFB_OFFSET))(this, a1);
		}

		::System::Boolean EMGHGCGDEOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPMJPCFLND_EMGHGCGDEOL_OFFSET))(this);
		}

		::System::Void BIFJKDIHKOK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMPMJPCFLND_BIFJKDIHKOK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMPMJPCFLND_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AMPMJPCFLND* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AMPMJPCFLND*))((::PBYTE)hIl2Cpp + AMPMJPCFLND_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPMJPCFLND_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPMJPCFLND_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AMPMJPCFLND_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMPMJPCFLND_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AMPMJPCFLND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMPMJPCFLND*))((::PBYTE)hIl2Cpp + AMPMJPCFLND_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AMPMJPCFLND_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
