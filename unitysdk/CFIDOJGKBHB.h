#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFIDOJGKBHB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CFIDOJGKBHB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E076600)
#define CFIDOJGKBHB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0766A0)
#define CFIDOJGKBHB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0762F0)
#define CFIDOJGKBHB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0762C0)
#define CFIDOJGKBHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0762B0)
#define CFIDOJGKBHB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E076400)
#define CFIDOJGKBHB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E076330)
#define CFIDOJGKBHB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E076560)
#define CFIDOJGKBHB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E076270)
#define CFIDOJGKBHB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E076650)
#define CFIDOJGKBHB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E076620)
#define CFIDOJGKBHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0762A0)
#define CFIDOJGKBHB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E076590)
#define CFIDOJGKBHB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0765F0)

inline static constexpr unsigned int CFIDOJGKBHB_TypeDefinitionIndex = 29554;

	class CFIDOJGKBHB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::CFIDOJGKBHB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CFIDOJGKBHB*>**)UnitySDK::FromName("", "CFIDOJGKBHB")->GetStaticField(0x11D80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIDOJGKBHB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CFIDOJGKBHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFIDOJGKBHB*))((::PBYTE)hIl2Cpp + CFIDOJGKBHB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFIDOJGKBHB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CFIDOJGKBHB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CFIDOJGKBHB*>*(*)())((::PBYTE)hIl2Cpp + CFIDOJGKBHB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIDOJGKBHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CFIDOJGKBHB* Clone()
		{
			return ((::CFIDOJGKBHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIDOJGKBHB_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CFIDOJGKBHB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CFIDOJGKBHB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFIDOJGKBHB*))((::PBYTE)hIl2Cpp + CFIDOJGKBHB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIDOJGKBHB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIDOJGKBHB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CFIDOJGKBHB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIDOJGKBHB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CFIDOJGKBHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFIDOJGKBHB*))((::PBYTE)hIl2Cpp + CFIDOJGKBHB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CFIDOJGKBHB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
