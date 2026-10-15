#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFAIANENDEE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PFAIANENDEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEF3CF0)
#define PFAIANENDEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEF3F10)
#define PFAIANENDEE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEF38E0)
#define PFAIANENDEE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEF38B0)
#define PFAIANENDEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF38A0)
#define PFAIANENDEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEF3A70)
#define PFAIANENDEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEF3970)
#define PFAIANENDEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEF3BE0)
#define PFAIANENDEE_HLPNNJEENHB_OFFSET UNITYSDK_OFFSET(0x1DEF3950)
#define PFAIANENDEE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEF3830)
#define PFAIANENDEE_LKKLFPFDLJE_OFFSET UNITYSDK_OFFSET(0x1DEF3960)
#define PFAIANENDEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEF3DB0)
#define PFAIANENDEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEF3D80)
#define PFAIANENDEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEF3890)
#define PFAIANENDEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEF3C10)
#define PFAIANENDEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEF3C70)

inline static constexpr unsigned int PFAIANENDEE_TypeDefinitionIndex = 34800;

	class PFAIANENDEE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MJIFBAMKHGK; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PFAIANENDEE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PFAIANENDEE*>**)UnitySDK::FromName("", "PFAIANENDEE")->GetStaticField(0x31570);
		}

		// static const ::System::Object GEHGDJOODDF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAIANENDEE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PFAIANENDEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFAIANENDEE*))((::PBYTE)hIl2Cpp + PFAIANENDEE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFAIANENDEE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PFAIANENDEE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PFAIANENDEE*>*(*)())((::PBYTE)hIl2Cpp + PFAIANENDEE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAIANENDEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PFAIANENDEE* Clone()
		{
			return ((::PFAIANENDEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAIANENDEE_CLONE_OFFSET))(this);
		}

		::System::UInt32 HLPNNJEENHB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAIANENDEE_HLPNNJEENHB_OFFSET))(this);
		}

		::System::Void LKKLFPFDLJE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PFAIANENDEE_LKKLFPFDLJE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PFAIANENDEE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PFAIANENDEE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PFAIANENDEE*))((::PBYTE)hIl2Cpp + PFAIANENDEE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAIANENDEE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAIANENDEE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PFAIANENDEE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAIANENDEE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PFAIANENDEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFAIANENDEE*))((::PBYTE)hIl2Cpp + PFAIANENDEE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PFAIANENDEE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
