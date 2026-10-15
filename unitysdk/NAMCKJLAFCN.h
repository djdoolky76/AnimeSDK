#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAMCKJLAFCN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NAMCKJLAFCN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA99AB0)
#define NAMCKJLAFCN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA99B50)
#define NAMCKJLAFCN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA997A0)
#define NAMCKJLAFCN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA99770)
#define NAMCKJLAFCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA99760)
#define NAMCKJLAFCN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA998B0)
#define NAMCKJLAFCN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA997E0)
#define NAMCKJLAFCN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA99A10)
#define NAMCKJLAFCN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA99720)
#define NAMCKJLAFCN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA99B00)
#define NAMCKJLAFCN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA99AD0)
#define NAMCKJLAFCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA99750)
#define NAMCKJLAFCN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA99A40)
#define NAMCKJLAFCN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA99AA0)

inline static constexpr unsigned int NAMCKJLAFCN_TypeDefinitionIndex = 33660;

	class NAMCKJLAFCN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::NAMCKJLAFCN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NAMCKJLAFCN*>**)UnitySDK::FromName("", "NAMCKJLAFCN")->GetStaticField(0x5CE50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMCKJLAFCN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NAMCKJLAFCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAMCKJLAFCN*))((::PBYTE)hIl2Cpp + NAMCKJLAFCN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAMCKJLAFCN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NAMCKJLAFCN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NAMCKJLAFCN*>*(*)())((::PBYTE)hIl2Cpp + NAMCKJLAFCN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMCKJLAFCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NAMCKJLAFCN* Clone()
		{
			return ((::NAMCKJLAFCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMCKJLAFCN_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NAMCKJLAFCN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NAMCKJLAFCN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAMCKJLAFCN*))((::PBYTE)hIl2Cpp + NAMCKJLAFCN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMCKJLAFCN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMCKJLAFCN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NAMCKJLAFCN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMCKJLAFCN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NAMCKJLAFCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAMCKJLAFCN*))((::PBYTE)hIl2Cpp + NAMCKJLAFCN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NAMCKJLAFCN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
