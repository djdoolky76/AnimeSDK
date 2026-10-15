#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILHFAFGOJAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ILHFAFGOJAC_AFDDABNNLJP_OFFSET UNITYSDK_OFFSET(0x1E6ADDE0)
#define ILHFAFGOJAC_AMLIFIFMLMK_OFFSET UNITYSDK_OFFSET(0x1E6ADDD0)
#define ILHFAFGOJAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6AE190)
#define ILHFAFGOJAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6AE510)
#define ILHFAFGOJAC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6ADD70)
#define ILHFAFGOJAC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6ADD30)
#define ILHFAFGOJAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6ADD20)
#define ILHFAFGOJAC_DBBJMKJJDMB_OFFSET UNITYSDK_OFFSET(0x1E6ADDF0)
#define ILHFAFGOJAC_DDCLKHNJHHN_OFFSET UNITYSDK_OFFSET(0x1E6ADDC0)
#define ILHFAFGOJAC_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E6ADE00)
#define ILHFAFGOJAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6ADF00)
#define ILHFAFGOJAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6ADE20)
#define ILHFAFGOJAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6ADFD0)
#define ILHFAFGOJAC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6ADCE0)
#define ILHFAFGOJAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6AE370)
#define ILHFAFGOJAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6AE320)
#define ILHFAFGOJAC_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E6ADE10)
#define ILHFAFGOJAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6ADD10)
#define ILHFAFGOJAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6AE000)
#define ILHFAFGOJAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6AE060)

	class ILHFAFGOJAC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AIKAJDGKENP; // 0x18
		::System::UInt32 FLBKCMIIFFP; // 0x1C
		::System::UInt32 OLLHBHENKHN; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ILHFAFGOJAC")->GetStaticField(0x48F50);
		}

		// static const ::System::Object KNGCCLCIOIK; // 0x0
		// static const ::System::Object CEFHBPCEDIF; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHFAFGOJAC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ILHFAFGOJAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILHFAFGOJAC*))((::PBYTE)hIl2Cpp + ILHFAFGOJAC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILHFAFGOJAC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ILHFAFGOJAC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHFAFGOJAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ILHFAFGOJAC* Clone()
		{
			return ((::ILHFAFGOJAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHFAFGOJAC_CLONE_OFFSET))(this);
		}

		::System::UInt32 DDCLKHNJHHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHFAFGOJAC_DDCLKHNJHHN_OFFSET))(this);
		}

		::System::Void AMLIFIFMLMK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILHFAFGOJAC_AMLIFIFMLMK_OFFSET))(this, a1);
		}

		::System::UInt32 AFDDABNNLJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHFAFGOJAC_AFDDABNNLJP_OFFSET))(this);
		}

		::System::Void DBBJMKJJDMB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILHFAFGOJAC_DBBJMKJJDMB_OFFSET))(this, a1);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHFAFGOJAC_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILHFAFGOJAC_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILHFAFGOJAC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ILHFAFGOJAC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILHFAFGOJAC*))((::PBYTE)hIl2Cpp + ILHFAFGOJAC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHFAFGOJAC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHFAFGOJAC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ILHFAFGOJAC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHFAFGOJAC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ILHFAFGOJAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILHFAFGOJAC*))((::PBYTE)hIl2Cpp + ILHFAFGOJAC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ILHFAFGOJAC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
