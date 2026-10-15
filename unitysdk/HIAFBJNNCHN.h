#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIAFBJNNCHN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIAFBJNNCHN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E58E0D0)
#define HIAFBJNNCHN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E58E170)
#define HIAFBJNNCHN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E58DDC0)
#define HIAFBJNNCHN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E58DD90)
#define HIAFBJNNCHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E58DD80)
#define HIAFBJNNCHN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E58DED0)
#define HIAFBJNNCHN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E58DE00)
#define HIAFBJNNCHN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E58E030)
#define HIAFBJNNCHN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E58DD40)
#define HIAFBJNNCHN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E58E120)
#define HIAFBJNNCHN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E58E0F0)
#define HIAFBJNNCHN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E58DD70)
#define HIAFBJNNCHN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E58E060)
#define HIAFBJNNCHN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E58E0C0)

inline static constexpr unsigned int HIAFBJNNCHN_TypeDefinitionIndex = 31137;

	class HIAFBJNNCHN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::HIAFBJNNCHN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HIAFBJNNCHN*>**)UnitySDK::FromName("", "HIAFBJNNCHN")->GetStaticField(0x3B390);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAFBJNNCHN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HIAFBJNNCHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIAFBJNNCHN*))((::PBYTE)hIl2Cpp + HIAFBJNNCHN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIAFBJNNCHN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HIAFBJNNCHN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HIAFBJNNCHN*>*(*)())((::PBYTE)hIl2Cpp + HIAFBJNNCHN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAFBJNNCHN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HIAFBJNNCHN* Clone()
		{
			return ((::HIAFBJNNCHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAFBJNNCHN_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIAFBJNNCHN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HIAFBJNNCHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIAFBJNNCHN*))((::PBYTE)hIl2Cpp + HIAFBJNNCHN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAFBJNNCHN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAFBJNNCHN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HIAFBJNNCHN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAFBJNNCHN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HIAFBJNNCHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIAFBJNNCHN*))((::PBYTE)hIl2Cpp + HIAFBJNNCHN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HIAFBJNNCHN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
