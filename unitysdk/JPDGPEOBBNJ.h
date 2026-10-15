#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPDGPEOBBNJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JPDGPEOBBNJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7D0F60)
#define JPDGPEOBBNJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D1000)
#define JPDGPEOBBNJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7D0C50)
#define JPDGPEOBBNJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7D0C20)
#define JPDGPEOBBNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D0C10)
#define JPDGPEOBBNJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7D0D60)
#define JPDGPEOBBNJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7D0C90)
#define JPDGPEOBBNJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7D0EC0)
#define JPDGPEOBBNJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7D0BD0)
#define JPDGPEOBBNJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7D0FB0)
#define JPDGPEOBBNJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7D0F80)
#define JPDGPEOBBNJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7D0C00)
#define JPDGPEOBBNJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7D0EF0)
#define JPDGPEOBBNJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7D0F50)

inline static constexpr unsigned int JPDGPEOBBNJ_TypeDefinitionIndex = 30594;

	class JPDGPEOBBNJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JPDGPEOBBNJ")->GetStaticField(0xAAE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDGPEOBBNJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JPDGPEOBBNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPDGPEOBBNJ*))((::PBYTE)hIl2Cpp + JPDGPEOBBNJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPDGPEOBBNJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JPDGPEOBBNJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDGPEOBBNJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JPDGPEOBBNJ* Clone()
		{
			return ((::JPDGPEOBBNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDGPEOBBNJ_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPDGPEOBBNJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JPDGPEOBBNJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPDGPEOBBNJ*))((::PBYTE)hIl2Cpp + JPDGPEOBBNJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDGPEOBBNJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDGPEOBBNJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JPDGPEOBBNJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDGPEOBBNJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JPDGPEOBBNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPDGPEOBBNJ*))((::PBYTE)hIl2Cpp + JPDGPEOBBNJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JPDGPEOBBNJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
