#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAHKEHALABO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LAHKEHALABO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8CC930)
#define LAHKEHALABO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8CCB50)
#define LAHKEHALABO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8CC580)
#define LAHKEHALABO_CPOOIDGKFPB_OFFSET UNITYSDK_OFFSET(0x1E8CC5C0)
#define LAHKEHALABO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8CC550)
#define LAHKEHALABO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8CC540)
#define LAHKEHALABO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8CC6B0)
#define LAHKEHALABO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8CC5E0)
#define LAHKEHALABO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8CC820)
#define LAHKEHALABO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8CC500)
#define LAHKEHALABO_KHNLEEDIEKB_OFFSET UNITYSDK_OFFSET(0x1E8CC5D0)
#define LAHKEHALABO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8CC9F0)
#define LAHKEHALABO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8CC9C0)
#define LAHKEHALABO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8CC530)
#define LAHKEHALABO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8CC850)
#define LAHKEHALABO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8CC8B0)

inline static constexpr unsigned int LAHKEHALABO_TypeDefinitionIndex = 34566;

	class LAHKEHALABO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FENDJMNOHHG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LAHKEHALABO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LAHKEHALABO*>**)UnitySDK::FromName("", "LAHKEHALABO")->GetStaticField(0x2F0C0);
		}

		// static const ::System::Object FILPGLHFNCI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHKEHALABO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LAHKEHALABO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAHKEHALABO*))((::PBYTE)hIl2Cpp + LAHKEHALABO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAHKEHALABO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LAHKEHALABO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LAHKEHALABO*>*(*)())((::PBYTE)hIl2Cpp + LAHKEHALABO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHKEHALABO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LAHKEHALABO* Clone()
		{
			return ((::LAHKEHALABO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHKEHALABO_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPOOIDGKFPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHKEHALABO_CPOOIDGKFPB_OFFSET))(this);
		}

		::System::Void KHNLEEDIEKB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LAHKEHALABO_KHNLEEDIEKB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LAHKEHALABO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LAHKEHALABO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAHKEHALABO*))((::PBYTE)hIl2Cpp + LAHKEHALABO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHKEHALABO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHKEHALABO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LAHKEHALABO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHKEHALABO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LAHKEHALABO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAHKEHALABO*))((::PBYTE)hIl2Cpp + LAHKEHALABO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LAHKEHALABO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
