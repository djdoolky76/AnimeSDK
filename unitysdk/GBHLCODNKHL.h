#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBHLCODNKHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GBHLCODNKHL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E42C8A0)
#define GBHLCODNKHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E42C940)
#define GBHLCODNKHL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E42C590)
#define GBHLCODNKHL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E42C560)
#define GBHLCODNKHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E42C550)
#define GBHLCODNKHL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E42C6A0)
#define GBHLCODNKHL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E42C5D0)
#define GBHLCODNKHL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E42C800)
#define GBHLCODNKHL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E42C510)
#define GBHLCODNKHL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E42C8F0)
#define GBHLCODNKHL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E42C8C0)
#define GBHLCODNKHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E42C540)
#define GBHLCODNKHL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E42C830)
#define GBHLCODNKHL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E42C890)

inline static constexpr unsigned int GBHLCODNKHL_TypeDefinitionIndex = 34558;

	class GBHLCODNKHL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::GBHLCODNKHL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GBHLCODNKHL*>**)UnitySDK::FromName("", "GBHLCODNKHL")->GetStaticField(0xD100);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHLCODNKHL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GBHLCODNKHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBHLCODNKHL*))((::PBYTE)hIl2Cpp + GBHLCODNKHL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBHLCODNKHL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GBHLCODNKHL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GBHLCODNKHL*>*(*)())((::PBYTE)hIl2Cpp + GBHLCODNKHL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHLCODNKHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GBHLCODNKHL* Clone()
		{
			return ((::GBHLCODNKHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHLCODNKHL_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBHLCODNKHL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GBHLCODNKHL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBHLCODNKHL*))((::PBYTE)hIl2Cpp + GBHLCODNKHL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHLCODNKHL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHLCODNKHL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GBHLCODNKHL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHLCODNKHL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GBHLCODNKHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBHLCODNKHL*))((::PBYTE)hIl2Cpp + GBHLCODNKHL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GBHLCODNKHL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
