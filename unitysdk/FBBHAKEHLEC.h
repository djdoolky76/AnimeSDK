#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBBHAKEHLEC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FBBHAKEHLEC_BIBPBCCNBMK_OFFSET UNITYSDK_OFFSET(0x1E32EFF0)
#define FBBHAKEHLEC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E32F360)
#define FBBHAKEHLEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E32F580)
#define FBBHAKEHLEC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E32EFB0)
#define FBBHAKEHLEC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E32EF80)
#define FBBHAKEHLEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E32EF70)
#define FBBHAKEHLEC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E32F0E0)
#define FBBHAKEHLEC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E32F010)
#define FBBHAKEHLEC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E32F250)
#define FBBHAKEHLEC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E32EF30)
#define FBBHAKEHLEC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E32F420)
#define FBBHAKEHLEC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E32F3F0)
#define FBBHAKEHLEC_OIEMAEFDBCB_OFFSET UNITYSDK_OFFSET(0x1E32F000)
#define FBBHAKEHLEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E32EF60)
#define FBBHAKEHLEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E32F280)
#define FBBHAKEHLEC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E32F2E0)

inline static constexpr unsigned int FBBHAKEHLEC_TypeDefinitionIndex = 26769;

	class FBBHAKEHLEC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BGMLGHECGBM; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FBBHAKEHLEC")->GetStaticField(0x58E10);
		}

		// static const ::System::Object LANLJAPHOCL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBHAKEHLEC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FBBHAKEHLEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBBHAKEHLEC*))((::PBYTE)hIl2Cpp + FBBHAKEHLEC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBBHAKEHLEC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FBBHAKEHLEC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBHAKEHLEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FBBHAKEHLEC* Clone()
		{
			return ((::FBBHAKEHLEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBHAKEHLEC_CLONE_OFFSET))(this);
		}

		::System::UInt32 BIBPBCCNBMK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBHAKEHLEC_BIBPBCCNBMK_OFFSET))(this);
		}

		::System::Void OIEMAEFDBCB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBBHAKEHLEC_OIEMAEFDBCB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBBHAKEHLEC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FBBHAKEHLEC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBBHAKEHLEC*))((::PBYTE)hIl2Cpp + FBBHAKEHLEC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBHAKEHLEC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBHAKEHLEC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FBBHAKEHLEC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBBHAKEHLEC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FBBHAKEHLEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBBHAKEHLEC*))((::PBYTE)hIl2Cpp + FBBHAKEHLEC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FBBHAKEHLEC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
