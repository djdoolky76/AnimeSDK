#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCDBGKJANIH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KCDBGKJANIH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7C5DC0)
#define KCDBGKJANIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C5FE0)
#define KCDBGKJANIH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7C5A10)
#define KCDBGKJANIH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7C59E0)
#define KCDBGKJANIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C59D0)
#define KCDBGKJANIH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7C5B40)
#define KCDBGKJANIH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7C5A70)
#define KCDBGKJANIH_FOPLDCBOMFM_OFFSET UNITYSDK_OFFSET(0x1E7C5A60)
#define KCDBGKJANIH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7C5CB0)
#define KCDBGKJANIH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7C5990)
#define KCDBGKJANIH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7C5E80)
#define KCDBGKJANIH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7C5E50)
#define KCDBGKJANIH_NNBHOEMFHIF_OFFSET UNITYSDK_OFFSET(0x1E7C5A50)
#define KCDBGKJANIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7C59C0)
#define KCDBGKJANIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7C5CE0)
#define KCDBGKJANIH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7C5D40)

inline static constexpr unsigned int KCDBGKJANIH_TypeDefinitionIndex = 33806;

	class KCDBGKJANIH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GFMHFBDKDOE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KCDBGKJANIH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KCDBGKJANIH*>**)UnitySDK::FromName("", "KCDBGKJANIH")->GetStaticField(0xEDD0);
		}

		// static const ::System::Object CPDECFMCKEM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDBGKJANIH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KCDBGKJANIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCDBGKJANIH*))((::PBYTE)hIl2Cpp + KCDBGKJANIH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCDBGKJANIH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KCDBGKJANIH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KCDBGKJANIH*>*(*)())((::PBYTE)hIl2Cpp + KCDBGKJANIH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDBGKJANIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KCDBGKJANIH* Clone()
		{
			return ((::KCDBGKJANIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDBGKJANIH_CLONE_OFFSET))(this);
		}

		::System::UInt32 NNBHOEMFHIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDBGKJANIH_NNBHOEMFHIF_OFFSET))(this);
		}

		::System::Void FOPLDCBOMFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KCDBGKJANIH_FOPLDCBOMFM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCDBGKJANIH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KCDBGKJANIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KCDBGKJANIH*))((::PBYTE)hIl2Cpp + KCDBGKJANIH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDBGKJANIH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDBGKJANIH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KCDBGKJANIH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDBGKJANIH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KCDBGKJANIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCDBGKJANIH*))((::PBYTE)hIl2Cpp + KCDBGKJANIH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KCDBGKJANIH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
