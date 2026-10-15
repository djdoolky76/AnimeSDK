#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDCFKACPFNB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EDCFKACPFNB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E25AEE0)
#define EDCFKACPFNB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E25B100)
#define EDCFKACPFNB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E25AB30)
#define EDCFKACPFNB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E25AB00)
#define EDCFKACPFNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E25AAF0)
#define EDCFKACPFNB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E25AC60)
#define EDCFKACPFNB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E25AB90)
#define EDCFKACPFNB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E25ADD0)
#define EDCFKACPFNB_IBAHAIOBFFH_OFFSET UNITYSDK_OFFSET(0x1E25AB80)
#define EDCFKACPFNB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E25AAB0)
#define EDCFKACPFNB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E25AFA0)
#define EDCFKACPFNB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E25AF70)
#define EDCFKACPFNB_ONGCGPNGLPC_OFFSET UNITYSDK_OFFSET(0x1E25AB70)
#define EDCFKACPFNB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E25AAE0)
#define EDCFKACPFNB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E25AE00)
#define EDCFKACPFNB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E25AE60)

inline static constexpr unsigned int EDCFKACPFNB_TypeDefinitionIndex = 25413;

	class EDCFKACPFNB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KKJAEPBDCLP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EDCFKACPFNB")->GetStaticField(0x3F550);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EDCFKACPFNB_JJGHOBBFNJD_OFFSET))();
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
