#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDCFKACPFNB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EDCFKACPFNB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E22D860)
#define EDCFKACPFNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E22DA80)
#define EDCFKACPFNB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E22D4B0)
#define EDCFKACPFNB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E22D480)
#define EDCFKACPFNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E22D470)
#define EDCFKACPFNB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E22D5E0)
#define EDCFKACPFNB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E22D510)
#define EDCFKACPFNB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E22D750)
#define EDCFKACPFNB_IBAHAIOBFFH_OFFSET UNITYSDK_OFFSET(0x1E22D500)
#define EDCFKACPFNB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E22D430)
#define EDCFKACPFNB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E22D920)
#define EDCFKACPFNB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E22D8F0)
#define EDCFKACPFNB_ONGCGPNGLPC_OFFSET UNITYSDK_OFFSET(0x1E22D4F0)
#define EDCFKACPFNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E22D460)
#define EDCFKACPFNB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E22D780)
#define EDCFKACPFNB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E22D7E0)

inline static constexpr unsigned int EDCFKACPFNB_TypeDefinitionIndex = 25413;

	class EDCFKACPFNB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KKJAEPBDCLP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EDCFKACPFNB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EDCFKACPFNB*>**)UnitySDK::FromName("", "EDCFKACPFNB")->GetStaticField(0x43340);
		}

		// static const ::System::Object JOOMIPGINJB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDCFKACPFNB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EDCFKACPFNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDCFKACPFNB*))((::PBYTE)hIl2Cpp + EDCFKACPFNB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDCFKACPFNB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EDCFKACPFNB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EDCFKACPFNB*>*(*)())((::PBYTE)hIl2Cpp + EDCFKACPFNB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDCFKACPFNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EDCFKACPFNB* Clone()
		{
			return ((::EDCFKACPFNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDCFKACPFNB_CLONE_OFFSET))(this);
		}

		::System::UInt32 ONGCGPNGLPC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDCFKACPFNB_ONGCGPNGLPC_OFFSET))(this);
		}

		::System::Void IBAHAIOBFFH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDCFKACPFNB_IBAHAIOBFFH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EDCFKACPFNB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EDCFKACPFNB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EDCFKACPFNB*))((::PBYTE)hIl2Cpp + EDCFKACPFNB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDCFKACPFNB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDCFKACPFNB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EDCFKACPFNB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDCFKACPFNB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EDCFKACPFNB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDCFKACPFNB*))((::PBYTE)hIl2Cpp + EDCFKACPFNB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EDCFKACPFNB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
