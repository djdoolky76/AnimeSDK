#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOLHAKEGKCL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GOLHAKEGKCL_AKDNKOKFCJP_OFFSET UNITYSDK_OFFSET(0x1E4C4190)
#define GOLHAKEGKCL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4C44B0)
#define GOLHAKEGKCL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C4830)
#define GOLHAKEGKCL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4C40C0)
#define GOLHAKEGKCL_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E4C4140)
#define GOLHAKEGKCL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4C4080)
#define GOLHAKEGKCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C4070)
#define GOLHAKEGKCL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4C4220)
#define GOLHAKEGKCL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4C41A0)
#define GOLHAKEGKCL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4C42F0)
#define GOLHAKEGKCL_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E4C4150)
#define GOLHAKEGKCL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4C4000)
#define GOLHAKEGKCL_KFDLMMDAIED_OFFSET UNITYSDK_OFFSET(0x1E4C4160)
#define GOLHAKEGKCL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4C4690)
#define GOLHAKEGKCL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4C4640)
#define GOLHAKEGKCL_OIDAGILFOIH_OFFSET UNITYSDK_OFFSET(0x1E4C4170)
#define GOLHAKEGKCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4C4060)
#define GOLHAKEGKCL_PPPKJICHPAD_OFFSET UNITYSDK_OFFSET(0x1E4C4180)
#define GOLHAKEGKCL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4C4320)
#define GOLHAKEGKCL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4C4380)

inline static constexpr unsigned int GOLHAKEGKCL_TypeDefinitionIndex = 31104;

	class GOLHAKEGKCL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KJAENGKDFJD; // 0x18
		::System::UInt32 OKHIOMLIGGJ; // 0x1C
		::System::UInt32 HGPAHCMJOLA; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GOLHAKEGKCL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GOLHAKEGKCL*>**)UnitySDK::FromName("", "GOLHAKEGKCL")->GetStaticField(0x231C0);
		}

		// static const ::System::Object PIACMPBJOIK; // 0x0
		// static const ::System::Object PPMNDLLOGCG; // 0x0
		// static const ::System::Object LMFHJFMIJJL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLHAKEGKCL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GOLHAKEGKCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOLHAKEGKCL*))((::PBYTE)hIl2Cpp + GOLHAKEGKCL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOLHAKEGKCL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GOLHAKEGKCL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GOLHAKEGKCL*>*(*)())((::PBYTE)hIl2Cpp + GOLHAKEGKCL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLHAKEGKCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GOLHAKEGKCL* Clone()
		{
			return ((::GOLHAKEGKCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLHAKEGKCL_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLHAKEGKCL_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOLHAKEGKCL_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::UInt32 KFDLMMDAIED()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLHAKEGKCL_KFDLMMDAIED_OFFSET))(this);
		}

		::System::Void OIDAGILFOIH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOLHAKEGKCL_OIDAGILFOIH_OFFSET))(this, a1);
		}

		::System::UInt32 PPPKJICHPAD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLHAKEGKCL_PPPKJICHPAD_OFFSET))(this);
		}

		::System::Void AKDNKOKFCJP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOLHAKEGKCL_AKDNKOKFCJP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOLHAKEGKCL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GOLHAKEGKCL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GOLHAKEGKCL*))((::PBYTE)hIl2Cpp + GOLHAKEGKCL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLHAKEGKCL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLHAKEGKCL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOLHAKEGKCL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLHAKEGKCL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GOLHAKEGKCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOLHAKEGKCL*))((::PBYTE)hIl2Cpp + GOLHAKEGKCL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOLHAKEGKCL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
