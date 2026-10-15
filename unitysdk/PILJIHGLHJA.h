#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PILJIHGLHJA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PILJIHGLHJA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF6C690)
#define PILJIHGLHJA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF6C8B0)
#define PILJIHGLHJA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF6C2E0)
#define PILJIHGLHJA_COEONDABKIH_OFFSET UNITYSDK_OFFSET(0x1DF6C320)
#define PILJIHGLHJA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF6C2B0)
#define PILJIHGLHJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF6C2A0)
#define PILJIHGLHJA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF6C410)
#define PILJIHGLHJA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF6C340)
#define PILJIHGLHJA_FOCIPHMHHEB_OFFSET UNITYSDK_OFFSET(0x1DF6C330)
#define PILJIHGLHJA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF6C580)
#define PILJIHGLHJA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF6C260)
#define PILJIHGLHJA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF6C750)
#define PILJIHGLHJA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF6C720)
#define PILJIHGLHJA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF6C290)
#define PILJIHGLHJA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF6C5B0)
#define PILJIHGLHJA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF6C610)

inline static constexpr unsigned int PILJIHGLHJA_TypeDefinitionIndex = 31119;

	class PILJIHGLHJA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OCCJEGBDDNG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PILJIHGLHJA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PILJIHGLHJA*>**)UnitySDK::FromName("", "PILJIHGLHJA")->GetStaticField(0x44650);
		}

		// static const ::System::Object LCEHCAOINBN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PILJIHGLHJA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PILJIHGLHJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PILJIHGLHJA*))((::PBYTE)hIl2Cpp + PILJIHGLHJA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PILJIHGLHJA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PILJIHGLHJA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PILJIHGLHJA*>*(*)())((::PBYTE)hIl2Cpp + PILJIHGLHJA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PILJIHGLHJA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PILJIHGLHJA* Clone()
		{
			return ((::PILJIHGLHJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PILJIHGLHJA_CLONE_OFFSET))(this);
		}

		::System::UInt32 COEONDABKIH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PILJIHGLHJA_COEONDABKIH_OFFSET))(this);
		}

		::System::Void FOCIPHMHHEB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PILJIHGLHJA_FOCIPHMHHEB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PILJIHGLHJA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PILJIHGLHJA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PILJIHGLHJA*))((::PBYTE)hIl2Cpp + PILJIHGLHJA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PILJIHGLHJA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PILJIHGLHJA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PILJIHGLHJA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PILJIHGLHJA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PILJIHGLHJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PILJIHGLHJA*))((::PBYTE)hIl2Cpp + PILJIHGLHJA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PILJIHGLHJA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
