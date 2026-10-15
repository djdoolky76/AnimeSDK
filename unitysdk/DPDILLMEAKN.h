#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPDILLMEAKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DPDILLMEAKN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E20BEF0)
#define DPDILLMEAKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E20C1C0)
#define DPDILLMEAKN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E20BB40)
#define DPDILLMEAKN_COEONDABKIH_OFFSET UNITYSDK_OFFSET(0x1E20BB90)
#define DPDILLMEAKN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E20BB10)
#define DPDILLMEAKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E20BB00)
#define DPDILLMEAKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E20BCB0)
#define DPDILLMEAKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E20BBD0)
#define DPDILLMEAKN_FOCIPHMHHEB_OFFSET UNITYSDK_OFFSET(0x1E20BBA0)
#define DPDILLMEAKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E20BD80)
#define DPDILLMEAKN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E20BAC0)
#define DPDILLMEAKN_LOOMPBFMBCN_OFFSET UNITYSDK_OFFSET(0x1E20BBC0)
#define DPDILLMEAKN_MCKAAMENFCE_OFFSET UNITYSDK_OFFSET(0x1E20BBB0)
#define DPDILLMEAKN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E20C040)
#define DPDILLMEAKN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E20C000)
#define DPDILLMEAKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E20BAF0)
#define DPDILLMEAKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E20BDB0)
#define DPDILLMEAKN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E20BE10)

inline static constexpr unsigned int DPDILLMEAKN_TypeDefinitionIndex = 31923;

	class DPDILLMEAKN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OCCJEGBDDNG; // 0x18
		::System::UInt32 CPHKLPMPADB; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::DPDILLMEAKN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DPDILLMEAKN*>**)UnitySDK::FromName("", "DPDILLMEAKN")->GetStaticField(0x44890);
		}

		// static const ::System::Object LCEHCAOINBN; // 0x0
		// static const ::System::Object MCCPOKCDGKE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDILLMEAKN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DPDILLMEAKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPDILLMEAKN*))((::PBYTE)hIl2Cpp + DPDILLMEAKN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPDILLMEAKN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DPDILLMEAKN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DPDILLMEAKN*>*(*)())((::PBYTE)hIl2Cpp + DPDILLMEAKN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDILLMEAKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DPDILLMEAKN* Clone()
		{
			return ((::DPDILLMEAKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDILLMEAKN_CLONE_OFFSET))(this);
		}

		::System::UInt32 COEONDABKIH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDILLMEAKN_COEONDABKIH_OFFSET))(this);
		}

		::System::Void FOCIPHMHHEB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DPDILLMEAKN_FOCIPHMHHEB_OFFSET))(this, a1);
		}

		::System::UInt32 MCKAAMENFCE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDILLMEAKN_MCKAAMENFCE_OFFSET))(this);
		}

		::System::Void LOOMPBFMBCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DPDILLMEAKN_LOOMPBFMBCN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPDILLMEAKN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DPDILLMEAKN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DPDILLMEAKN*))((::PBYTE)hIl2Cpp + DPDILLMEAKN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDILLMEAKN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDILLMEAKN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DPDILLMEAKN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPDILLMEAKN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DPDILLMEAKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPDILLMEAKN*))((::PBYTE)hIl2Cpp + DPDILLMEAKN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DPDILLMEAKN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
