#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHJNOBBOFOC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MHJNOBBOFOC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA5CE60)
#define MHJNOBBOFOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA5CF00)
#define MHJNOBBOFOC_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA5CB50)
#define MHJNOBBOFOC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA5CB20)
#define MHJNOBBOFOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA5CB10)
#define MHJNOBBOFOC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA5CC60)
#define MHJNOBBOFOC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA5CB90)
#define MHJNOBBOFOC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA5CDC0)
#define MHJNOBBOFOC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA5CAD0)
#define MHJNOBBOFOC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA5CEB0)
#define MHJNOBBOFOC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA5CE80)
#define MHJNOBBOFOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA5CB00)
#define MHJNOBBOFOC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA5CDF0)
#define MHJNOBBOFOC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA5CE50)

inline static constexpr unsigned int MHJNOBBOFOC_TypeDefinitionIndex = 27476;

	class MHJNOBBOFOC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::MHJNOBBOFOC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MHJNOBBOFOC*>**)UnitySDK::FromName("", "MHJNOBBOFOC")->GetStaticField(0x48E50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJNOBBOFOC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MHJNOBBOFOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHJNOBBOFOC*))((::PBYTE)hIl2Cpp + MHJNOBBOFOC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHJNOBBOFOC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MHJNOBBOFOC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MHJNOBBOFOC*>*(*)())((::PBYTE)hIl2Cpp + MHJNOBBOFOC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJNOBBOFOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MHJNOBBOFOC* Clone()
		{
			return ((::MHJNOBBOFOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJNOBBOFOC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MHJNOBBOFOC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MHJNOBBOFOC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHJNOBBOFOC*))((::PBYTE)hIl2Cpp + MHJNOBBOFOC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJNOBBOFOC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJNOBBOFOC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MHJNOBBOFOC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHJNOBBOFOC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MHJNOBBOFOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHJNOBBOFOC*))((::PBYTE)hIl2Cpp + MHJNOBBOFOC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MHJNOBBOFOC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
