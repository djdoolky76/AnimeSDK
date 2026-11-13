#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBHDDIPACEC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BBHDDIPACEC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA711F0)
#define BBHDDIPACEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA71290)
#define BBHDDIPACEC_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA70E90)
#define BBHDDIPACEC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA70E60)
#define BBHDDIPACEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA70E50)
#define BBHDDIPACEC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA70FF0)
#define BBHDDIPACEC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA70F00)
#define BBHDDIPACEC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA71150)
#define BBHDDIPACEC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA70DE0)
#define BBHDDIPACEC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA71240)
#define BBHDDIPACEC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA71210)
#define BBHDDIPACEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA70E40)
#define BBHDDIPACEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA71180)
#define BBHDDIPACEC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA711E0)

inline static constexpr unsigned int BBHDDIPACEC_TypeDefinitionIndex = 29721;

	class BBHDDIPACEC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::BBHDDIPACEC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BBHDDIPACEC*>**)UnitySDK::FromName("", "BBHDDIPACEC")->GetStaticField(0x44880);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHDDIPACEC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BBHDDIPACEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBHDDIPACEC*))((::PBYTE)hIl2Cpp + BBHDDIPACEC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBHDDIPACEC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BBHDDIPACEC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BBHDDIPACEC*>*(*)())((::PBYTE)hIl2Cpp + BBHDDIPACEC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHDDIPACEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BBHDDIPACEC* Clone()
		{
			return ((::BBHDDIPACEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHDDIPACEC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBHDDIPACEC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BBHDDIPACEC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BBHDDIPACEC*))((::PBYTE)hIl2Cpp + BBHDDIPACEC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHDDIPACEC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHDDIPACEC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BBHDDIPACEC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHDDIPACEC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BBHDDIPACEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBHDDIPACEC*))((::PBYTE)hIl2Cpp + BBHDDIPACEC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BBHDDIPACEC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
