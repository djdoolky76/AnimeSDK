#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPDGPEOBBNJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JPDGPEOBBNJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7A3980)
#define JPDGPEOBBNJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7A3A20)
#define JPDGPEOBBNJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7A3670)
#define JPDGPEOBBNJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7A3640)
#define JPDGPEOBBNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A3630)
#define JPDGPEOBBNJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7A3780)
#define JPDGPEOBBNJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7A36B0)
#define JPDGPEOBBNJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7A38E0)
#define JPDGPEOBBNJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7A35F0)
#define JPDGPEOBBNJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7A39D0)
#define JPDGPEOBBNJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7A39A0)
#define JPDGPEOBBNJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7A3620)
#define JPDGPEOBBNJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7A3910)
#define JPDGPEOBBNJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7A3970)

inline static constexpr unsigned int JPDGPEOBBNJ_TypeDefinitionIndex = 30594;

	class JPDGPEOBBNJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::JPDGPEOBBNJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JPDGPEOBBNJ*>**)UnitySDK::FromName("", "JPDGPEOBBNJ")->GetStaticField(0x2730);
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

		static ::Google::Protobuf::MessageParser_1<::JPDGPEOBBNJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JPDGPEOBBNJ*>*(*)())((::PBYTE)hIl2Cpp + JPDGPEOBBNJ_JJGHOBBFNJD_OFFSET))();
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
