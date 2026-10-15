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

#define PILJIHGLHJA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF3F020)
#define PILJIHGLHJA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF3F240)
#define PILJIHGLHJA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF3EC70)
#define PILJIHGLHJA_COEONDABKIH_OFFSET UNITYSDK_OFFSET(0x1DF3ECB0)
#define PILJIHGLHJA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF3EC40)
#define PILJIHGLHJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF3EC30)
#define PILJIHGLHJA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF3EDA0)
#define PILJIHGLHJA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF3ECD0)
#define PILJIHGLHJA_FOCIPHMHHEB_OFFSET UNITYSDK_OFFSET(0x1DF3ECC0)
#define PILJIHGLHJA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF3EF10)
#define PILJIHGLHJA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF3EBF0)
#define PILJIHGLHJA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF3F0E0)
#define PILJIHGLHJA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF3F0B0)
#define PILJIHGLHJA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF3EC20)
#define PILJIHGLHJA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF3EF40)
#define PILJIHGLHJA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF3EFA0)

inline static constexpr unsigned int PILJIHGLHJA_TypeDefinitionIndex = 31119;

	class PILJIHGLHJA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OCCJEGBDDNG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PILJIHGLHJA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PILJIHGLHJA*>**)UnitySDK::FromName("", "PILJIHGLHJA")->GetStaticField(0x355A0);
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
