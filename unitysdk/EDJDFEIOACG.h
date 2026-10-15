#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDJDFEIOACG;
class IKCDOOFJDKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EDJDFEIOACG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2330D0)
#define EDJDFEIOACG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E233410)
#define EDJDFEIOACG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E232AB0)
#define EDJDFEIOACG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E232A40)
#define EDJDFEIOACG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E232A30)
#define EDJDFEIOACG_EOBKNHHFEAB_OFFSET UNITYSDK_OFFSET(0x1E232B40)
#define EDJDFEIOACG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E232CC0)
#define EDJDFEIOACG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E232B50)
#define EDJDFEIOACG_GDMPEALDBPH_OFFSET UNITYSDK_OFFSET(0x1E232B30)
#define EDJDFEIOACG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E232F90)
#define EDJDFEIOACG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2329F0)
#define EDJDFEIOACG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E233240)
#define EDJDFEIOACG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E233130)
#define EDJDFEIOACG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E232A20)
#define EDJDFEIOACG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E232FE0)
#define EDJDFEIOACG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E233040)

inline static constexpr unsigned int EDJDFEIOACG_TypeDefinitionIndex = 25938;

	class EDJDFEIOACG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::IKCDOOFJDKO* DBBOMOKJNGE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EDJDFEIOACG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EDJDFEIOACG*>**)UnitySDK::FromName("", "EDJDFEIOACG")->GetStaticField(0x43FF0);
		}

		// static const ::System::Object EMGPBNAFCPP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJDFEIOACG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EDJDFEIOACG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDJDFEIOACG*))((::PBYTE)hIl2Cpp + EDJDFEIOACG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDJDFEIOACG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EDJDFEIOACG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EDJDFEIOACG*>*(*)())((::PBYTE)hIl2Cpp + EDJDFEIOACG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJDFEIOACG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EDJDFEIOACG* Clone()
		{
			return ((::EDJDFEIOACG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJDFEIOACG_CLONE_OFFSET))(this);
		}

		::IKCDOOFJDKO* GDMPEALDBPH()
		{
			return ((::IKCDOOFJDKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJDFEIOACG_GDMPEALDBPH_OFFSET))(this);
		}

		::System::Void EOBKNHHFEAB(::IKCDOOFJDKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKCDOOFJDKO*))((::PBYTE)hIl2Cpp + EDJDFEIOACG_EOBKNHHFEAB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EDJDFEIOACG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EDJDFEIOACG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EDJDFEIOACG*))((::PBYTE)hIl2Cpp + EDJDFEIOACG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJDFEIOACG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJDFEIOACG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EDJDFEIOACG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJDFEIOACG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EDJDFEIOACG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDJDFEIOACG*))((::PBYTE)hIl2Cpp + EDJDFEIOACG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EDJDFEIOACG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
