#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIBNHPAGDOL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AIBNHPAGDOL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E279740)
#define AIBNHPAGDOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2799A0)
#define AIBNHPAGDOL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E279350)
#define AIBNHPAGDOL_CPPGKCHGKHM_OFFSET UNITYSDK_OFFSET(0x1E2793D0)
#define AIBNHPAGDOL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E279310)
#define AIBNHPAGDOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E279300)
#define AIBNHPAGDOL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2794C0)
#define AIBNHPAGDOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2793E0)
#define AIBNHPAGDOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2795A0)
#define AIBNHPAGDOL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2792C0)
#define AIBNHPAGDOL_KJHOLDCHFFN_OFFSET UNITYSDK_OFFSET(0x1E2793A0)
#define AIBNHPAGDOL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E279820)
#define AIBNHPAGDOL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2797E0)
#define AIBNHPAGDOL_MOGDPJKCFCE_OFFSET UNITYSDK_OFFSET(0x1E2793C0)
#define AIBNHPAGDOL_OMHLLLEILAJ_OFFSET UNITYSDK_OFFSET(0x1E2793B0)
#define AIBNHPAGDOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2792F0)
#define AIBNHPAGDOL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2795D0)
#define AIBNHPAGDOL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E279630)

inline static constexpr unsigned int AIBNHPAGDOL_TypeDefinitionIndex = 33596;

	class AIBNHPAGDOL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LOKAIGDNEFN; // 0x18
		::System::Boolean NLMDECKPIDC; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AIBNHPAGDOL")->GetStaticField(0x32980);
		}

		// static const ::System::Object KALDCJMPCEA; // 0x0
		// static const ::System::Object GDEMONJNBKO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBNHPAGDOL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AIBNHPAGDOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIBNHPAGDOL*))((::PBYTE)hIl2Cpp + AIBNHPAGDOL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIBNHPAGDOL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AIBNHPAGDOL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBNHPAGDOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AIBNHPAGDOL* Clone()
		{
			return ((::AIBNHPAGDOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBNHPAGDOL_CLONE_OFFSET))(this);
		}

		::System::Boolean KJHOLDCHFFN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBNHPAGDOL_KJHOLDCHFFN_OFFSET))(this);
		}

		::System::Void OMHLLLEILAJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIBNHPAGDOL_OMHLLLEILAJ_OFFSET))(this, a1);
		}

		::System::UInt32 MOGDPJKCFCE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBNHPAGDOL_MOGDPJKCFCE_OFFSET))(this);
		}

		::System::Void CPPGKCHGKHM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AIBNHPAGDOL_CPPGKCHGKHM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIBNHPAGDOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AIBNHPAGDOL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AIBNHPAGDOL*))((::PBYTE)hIl2Cpp + AIBNHPAGDOL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBNHPAGDOL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBNHPAGDOL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AIBNHPAGDOL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBNHPAGDOL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AIBNHPAGDOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIBNHPAGDOL*))((::PBYTE)hIl2Cpp + AIBNHPAGDOL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AIBNHPAGDOL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
