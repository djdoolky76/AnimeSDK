#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONAADAJBLEB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ONAADAJBLEB_ANKEGLNNHFF_OFFSET UNITYSDK_OFFSET(0x1DE93300)
#define ONAADAJBLEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE93660)
#define ONAADAJBLEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE93990)
#define ONAADAJBLEB_CIHBCMHFPNH_OFFSET UNITYSDK_OFFSET(0x1DE93320)
#define ONAADAJBLEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE932A0)
#define ONAADAJBLEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE93260)
#define ONAADAJBLEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE93250)
#define ONAADAJBLEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE93410)
#define ONAADAJBLEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE93330)
#define ONAADAJBLEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE934E0)
#define ONAADAJBLEB_IEINNDIKKOK_OFFSET UNITYSDK_OFFSET(0x1DE93310)
#define ONAADAJBLEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE93210)
#define ONAADAJBLEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE93810)
#define ONAADAJBLEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE937D0)
#define ONAADAJBLEB_OCKPPOCHBHD_OFFSET UNITYSDK_OFFSET(0x1DE932F0)
#define ONAADAJBLEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE93240)
#define ONAADAJBLEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE93520)
#define ONAADAJBLEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE93580)

inline static constexpr unsigned int ONAADAJBLEB_TypeDefinitionIndex = 34662;

	class ONAADAJBLEB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LPLIGHEFFPL; // 0x18
		::System::Byte _padding0[0x4];
		::System::Int64 MFNDCJLNKEJ; // 0x20
		static ::Google::Protobuf::MessageParser_1<::ONAADAJBLEB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ONAADAJBLEB*>**)UnitySDK::FromName("", "ONAADAJBLEB")->GetStaticField(0x23C40);
		}

		// static const ::System::Object KDNIGGADKHC; // 0x0
		// static const ::System::Object LIGKPDNOMNJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAADAJBLEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ONAADAJBLEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONAADAJBLEB*))((::PBYTE)hIl2Cpp + ONAADAJBLEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONAADAJBLEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ONAADAJBLEB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ONAADAJBLEB*>*(*)())((::PBYTE)hIl2Cpp + ONAADAJBLEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAADAJBLEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ONAADAJBLEB* Clone()
		{
			return ((::ONAADAJBLEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAADAJBLEB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OCKPPOCHBHD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAADAJBLEB_OCKPPOCHBHD_OFFSET))(this);
		}

		::System::Void ANKEGLNNHFF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ONAADAJBLEB_ANKEGLNNHFF_OFFSET))(this, a1);
		}

		::System::Int64 IEINNDIKKOK()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAADAJBLEB_IEINNDIKKOK_OFFSET))(this);
		}

		::System::Void CIHBCMHFPNH(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ONAADAJBLEB_CIHBCMHFPNH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONAADAJBLEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ONAADAJBLEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ONAADAJBLEB*))((::PBYTE)hIl2Cpp + ONAADAJBLEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAADAJBLEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAADAJBLEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ONAADAJBLEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONAADAJBLEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ONAADAJBLEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONAADAJBLEB*))((::PBYTE)hIl2Cpp + ONAADAJBLEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ONAADAJBLEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
