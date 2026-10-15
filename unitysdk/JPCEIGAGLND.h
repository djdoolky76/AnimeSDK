#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPCEIGAGLND;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JPCEIGAGLND_BIPOBFFNGFE_OFFSET UNITYSDK_OFFSET(0x1E7CE630)
#define JPCEIGAGLND_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7CE9D0)
#define JPCEIGAGLND_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7CEC30)
#define JPCEIGAGLND_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7CE5E0)
#define JPCEIGAGLND_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7CE5A0)
#define JPCEIGAGLND_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7CE590)
#define JPCEIGAGLND_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7CE750)
#define JPCEIGAGLND_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7CE670)
#define JPCEIGAGLND_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7CE660)
#define JPCEIGAGLND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7CE830)
#define JPCEIGAGLND_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7CE550)
#define JPCEIGAGLND_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7CEAB0)
#define JPCEIGAGLND_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7CEA70)
#define JPCEIGAGLND_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7CE650)
#define JPCEIGAGLND_OKGJLPJJCMP_OFFSET UNITYSDK_OFFSET(0x1E7CE640)
#define JPCEIGAGLND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7CE580)
#define JPCEIGAGLND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7CE860)
#define JPCEIGAGLND_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7CE8C0)

inline static constexpr unsigned int JPCEIGAGLND_TypeDefinitionIndex = 26184;

	class JPCEIGAGLND : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean KACLGPIGFCL; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JPCEIGAGLND")->GetStaticField(0x2D60);
		}

		// static const ::System::Object BNILBFFFMBO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCEIGAGLND_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JPCEIGAGLND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCEIGAGLND*))((::PBYTE)hIl2Cpp + JPCEIGAGLND_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPCEIGAGLND_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JPCEIGAGLND_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCEIGAGLND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JPCEIGAGLND* Clone()
		{
			return ((::JPCEIGAGLND*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCEIGAGLND_CLONE_OFFSET))(this);
		}

		::System::Boolean BIPOBFFNGFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCEIGAGLND_BIPOBFFNGFE_OFFSET))(this);
		}

		::System::Void OKGJLPJJCMP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JPCEIGAGLND_OKGJLPJJCMP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCEIGAGLND_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPCEIGAGLND_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPCEIGAGLND_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JPCEIGAGLND* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPCEIGAGLND*))((::PBYTE)hIl2Cpp + JPCEIGAGLND_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCEIGAGLND_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCEIGAGLND_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JPCEIGAGLND_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCEIGAGLND_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JPCEIGAGLND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCEIGAGLND*))((::PBYTE)hIl2Cpp + JPCEIGAGLND_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JPCEIGAGLND_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
