#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJNOEFFJDJK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GJNOEFFJDJK_BMDGCNADLKC_OFFSET UNITYSDK_OFFSET(0x1E4AC7C0)
#define GJNOEFFJDJK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4ACB60)
#define GJNOEFFJDJK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4ACEE0)
#define GJNOEFFJDJK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4AC740)
#define GJNOEFFJDJK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4AC700)
#define GJNOEFFJDJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4AC6F0)
#define GJNOEFFJDJK_EEBLEFFIHBP_OFFSET UNITYSDK_OFFSET(0x1E4AC7B0)
#define GJNOEFFJDJK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4AC8D0)
#define GJNOEFFJDJK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4AC7F0)
#define GJNOEFFJDJK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4AC9A0)
#define GJNOEFFJDJK_GJIBPKKENEO_OFFSET UNITYSDK_OFFSET(0x1E4AC7A0)
#define GJNOEFFJDJK_IENMFHALCIC_OFFSET UNITYSDK_OFFSET(0x1E4AC7E0)
#define GJNOEFFJDJK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4AC6B0)
#define GJNOEFFJDJK_LGMLMDFDIBJ_OFFSET UNITYSDK_OFFSET(0x1E4AC790)
#define GJNOEFFJDJK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4ACD40)
#define GJNOEFFJDJK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4ACCF0)
#define GJNOEFFJDJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4AC6E0)
#define GJNOEFFJDJK_POKCANMKPBC_OFFSET UNITYSDK_OFFSET(0x1E4AC7D0)
#define GJNOEFFJDJK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4AC9D0)
#define GJNOEFFJDJK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4ACA30)

	class GJNOEFFJDJK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PLKGEBACJMA; // 0x18
		::System::UInt32 CLHJJFPJKJN; // 0x1C
		::System::UInt32 HMPAFLDIPPB; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GJNOEFFJDJK")->GetStaticField(0x1C1D0);
		}

		// static const ::System::Object MLABBDNGIEJ; // 0x0
		// static const ::System::Object OEAKKPCOOJF; // 0x0
		// static const ::System::Object CPFEBLJMAIC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJNOEFFJDJK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GJNOEFFJDJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJNOEFFJDJK*))((::PBYTE)hIl2Cpp + GJNOEFFJDJK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJNOEFFJDJK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GJNOEFFJDJK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJNOEFFJDJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GJNOEFFJDJK* Clone()
		{
			return ((::GJNOEFFJDJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJNOEFFJDJK_CLONE_OFFSET))(this);
		}

		::System::UInt32 LGMLMDFDIBJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJNOEFFJDJK_LGMLMDFDIBJ_OFFSET))(this);
		}

		::System::Void GJIBPKKENEO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GJNOEFFJDJK_GJIBPKKENEO_OFFSET))(this, a1);
		}

		::System::UInt32 EEBLEFFIHBP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJNOEFFJDJK_EEBLEFFIHBP_OFFSET))(this);
		}

		::System::Void BMDGCNADLKC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GJNOEFFJDJK_BMDGCNADLKC_OFFSET))(this, a1);
		}

		::System::UInt32 POKCANMKPBC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJNOEFFJDJK_POKCANMKPBC_OFFSET))(this);
		}

		::System::Void IENMFHALCIC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GJNOEFFJDJK_IENMFHALCIC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJNOEFFJDJK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GJNOEFFJDJK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GJNOEFFJDJK*))((::PBYTE)hIl2Cpp + GJNOEFFJDJK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJNOEFFJDJK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJNOEFFJDJK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GJNOEFFJDJK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJNOEFFJDJK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GJNOEFFJDJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJNOEFFJDJK*))((::PBYTE)hIl2Cpp + GJNOEFFJDJK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GJNOEFFJDJK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
