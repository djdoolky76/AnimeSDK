#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCOKGACMDNF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GCOKGACMDNF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E442760)
#define GCOKGACMDNF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E442800)
#define GCOKGACMDNF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E442450)
#define GCOKGACMDNF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E442420)
#define GCOKGACMDNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E442410)
#define GCOKGACMDNF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E442560)
#define GCOKGACMDNF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E442490)
#define GCOKGACMDNF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4426C0)
#define GCOKGACMDNF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4423D0)
#define GCOKGACMDNF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4427B0)
#define GCOKGACMDNF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E442780)
#define GCOKGACMDNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E442400)
#define GCOKGACMDNF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4426F0)
#define GCOKGACMDNF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E442750)

	class GCOKGACMDNF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GCOKGACMDNF")->GetStaticField(0xFB50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOKGACMDNF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GCOKGACMDNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCOKGACMDNF*))((::PBYTE)hIl2Cpp + GCOKGACMDNF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCOKGACMDNF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GCOKGACMDNF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOKGACMDNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GCOKGACMDNF* Clone()
		{
			return ((::GCOKGACMDNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOKGACMDNF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GCOKGACMDNF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GCOKGACMDNF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GCOKGACMDNF*))((::PBYTE)hIl2Cpp + GCOKGACMDNF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOKGACMDNF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOKGACMDNF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GCOKGACMDNF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCOKGACMDNF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GCOKGACMDNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCOKGACMDNF*))((::PBYTE)hIl2Cpp + GCOKGACMDNF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GCOKGACMDNF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
