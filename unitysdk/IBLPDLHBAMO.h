#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBLPDLHBAMO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IBLPDLHBAMO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F935AF0)
#define IBLPDLHBAMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F935D10)
#define IBLPDLHBAMO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F9356E0)
#define IBLPDLHBAMO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F9356B0)
#define IBLPDLHBAMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9356A0)
#define IBLPDLHBAMO_DJBIKNOKPMF_OFFSET UNITYSDK_OFFSET(0x1F935750)
#define IBLPDLHBAMO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F935870)
#define IBLPDLHBAMO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F935770)
#define IBLPDLHBAMO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F9359E0)
#define IBLPDLHBAMO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F935630)
#define IBLPDLHBAMO_KLDBBOJKEHN_OFFSET UNITYSDK_OFFSET(0x1F935760)
#define IBLPDLHBAMO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F935BB0)
#define IBLPDLHBAMO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F935B80)
#define IBLPDLHBAMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F935690)
#define IBLPDLHBAMO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F935A10)
#define IBLPDLHBAMO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F935A70)

inline static constexpr unsigned int IBLPDLHBAMO_TypeDefinitionIndex = 30315;

	class IBLPDLHBAMO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HDEJGCKNMFP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IBLPDLHBAMO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IBLPDLHBAMO*>**)UnitySDK::FromName("", "IBLPDLHBAMO")->GetStaticField(0x49BD0);
		}

		// static const ::System::Object GMNPBKLKGHG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBLPDLHBAMO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IBLPDLHBAMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBLPDLHBAMO*))((::PBYTE)hIl2Cpp + IBLPDLHBAMO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBLPDLHBAMO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IBLPDLHBAMO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IBLPDLHBAMO*>*(*)())((::PBYTE)hIl2Cpp + IBLPDLHBAMO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBLPDLHBAMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IBLPDLHBAMO* Clone()
		{
			return ((::IBLPDLHBAMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBLPDLHBAMO_CLONE_OFFSET))(this);
		}

		::System::UInt32 DJBIKNOKPMF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBLPDLHBAMO_DJBIKNOKPMF_OFFSET))(this);
		}

		::System::Void KLDBBOJKEHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IBLPDLHBAMO_KLDBBOJKEHN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBLPDLHBAMO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IBLPDLHBAMO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IBLPDLHBAMO*))((::PBYTE)hIl2Cpp + IBLPDLHBAMO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBLPDLHBAMO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBLPDLHBAMO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IBLPDLHBAMO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBLPDLHBAMO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IBLPDLHBAMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBLPDLHBAMO*))((::PBYTE)hIl2Cpp + IBLPDLHBAMO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IBLPDLHBAMO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
