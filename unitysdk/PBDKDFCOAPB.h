#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBDKDFCOAPB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PBDKDFCOAPB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEC6ED0)
#define PBDKDFCOAPB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC6F70)
#define PBDKDFCOAPB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEC6BC0)
#define PBDKDFCOAPB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEC6B90)
#define PBDKDFCOAPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC6B80)
#define PBDKDFCOAPB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEC6CD0)
#define PBDKDFCOAPB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEC6C00)
#define PBDKDFCOAPB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEC6E30)
#define PBDKDFCOAPB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEC6B40)
#define PBDKDFCOAPB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEC6F20)
#define PBDKDFCOAPB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEC6EF0)
#define PBDKDFCOAPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEC6B70)
#define PBDKDFCOAPB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEC6E60)
#define PBDKDFCOAPB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEC6EC0)

inline static constexpr unsigned int PBDKDFCOAPB_TypeDefinitionIndex = 30614;

	class PBDKDFCOAPB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::PBDKDFCOAPB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PBDKDFCOAPB*>**)UnitySDK::FromName("", "PBDKDFCOAPB")->GetStaticField(0x2C4F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDKDFCOAPB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PBDKDFCOAPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBDKDFCOAPB*))((::PBYTE)hIl2Cpp + PBDKDFCOAPB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBDKDFCOAPB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PBDKDFCOAPB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PBDKDFCOAPB*>*(*)())((::PBYTE)hIl2Cpp + PBDKDFCOAPB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDKDFCOAPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PBDKDFCOAPB* Clone()
		{
			return ((::PBDKDFCOAPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDKDFCOAPB_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PBDKDFCOAPB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PBDKDFCOAPB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PBDKDFCOAPB*))((::PBYTE)hIl2Cpp + PBDKDFCOAPB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDKDFCOAPB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDKDFCOAPB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PBDKDFCOAPB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDKDFCOAPB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PBDKDFCOAPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBDKDFCOAPB*))((::PBYTE)hIl2Cpp + PBDKDFCOAPB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PBDKDFCOAPB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
