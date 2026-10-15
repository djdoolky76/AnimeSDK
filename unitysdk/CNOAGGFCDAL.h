#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNOAGGFCDAL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CNOAGGFCDAL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0E0010)
#define CNOAGGFCDAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E00B0)
#define CNOAGGFCDAL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0DFCB0)
#define CNOAGGFCDAL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0DFC80)
#define CNOAGGFCDAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0DFC70)
#define CNOAGGFCDAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0DFE10)
#define CNOAGGFCDAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0DFD20)
#define CNOAGGFCDAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0DFF70)
#define CNOAGGFCDAL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0DFC00)
#define CNOAGGFCDAL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0E0060)
#define CNOAGGFCDAL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0E0030)
#define CNOAGGFCDAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0DFC60)
#define CNOAGGFCDAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0DFFA0)
#define CNOAGGFCDAL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0E0000)

inline static constexpr unsigned int CNOAGGFCDAL_TypeDefinitionIndex = 27711;

	class CNOAGGFCDAL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::CNOAGGFCDAL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CNOAGGFCDAL*>**)UnitySDK::FromName("", "CNOAGGFCDAL")->GetStaticField(0x1D530);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOAGGFCDAL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CNOAGGFCDAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNOAGGFCDAL*))((::PBYTE)hIl2Cpp + CNOAGGFCDAL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNOAGGFCDAL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CNOAGGFCDAL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CNOAGGFCDAL*>*(*)())((::PBYTE)hIl2Cpp + CNOAGGFCDAL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOAGGFCDAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CNOAGGFCDAL* Clone()
		{
			return ((::CNOAGGFCDAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOAGGFCDAL_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNOAGGFCDAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CNOAGGFCDAL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CNOAGGFCDAL*))((::PBYTE)hIl2Cpp + CNOAGGFCDAL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOAGGFCDAL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOAGGFCDAL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CNOAGGFCDAL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOAGGFCDAL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CNOAGGFCDAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNOAGGFCDAL*))((::PBYTE)hIl2Cpp + CNOAGGFCDAL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CNOAGGFCDAL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
