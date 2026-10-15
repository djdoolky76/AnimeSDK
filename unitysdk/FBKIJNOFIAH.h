#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBKIJNOFIAH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FBKIJNOFIAH_AKDNKOKFCJP_OFFSET UNITYSDK_OFFSET(0x1E3379F0)
#define FBKIJNOFIAH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E337D70)
#define FBKIJNOFIAH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E338040)
#define FBKIJNOFIAH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E337970)
#define FBKIJNOFIAH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E337940)
#define FBKIJNOFIAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E337930)
#define FBKIJNOFIAH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E337B30)
#define FBKIJNOFIAH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E337A20)
#define FBKIJNOFIAH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E337C00)
#define FBKIJNOFIAH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3378C0)
#define FBKIJNOFIAH_KFDLMMDAIED_OFFSET UNITYSDK_OFFSET(0x1E337A00)
#define FBKIJNOFIAH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E337EC0)
#define FBKIJNOFIAH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E337E80)
#define FBKIJNOFIAH_OIDAGILFOIH_OFFSET UNITYSDK_OFFSET(0x1E337A10)
#define FBKIJNOFIAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E337920)
#define FBKIJNOFIAH_PPPKJICHPAD_OFFSET UNITYSDK_OFFSET(0x1E3379E0)
#define FBKIJNOFIAH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E337C30)
#define FBKIJNOFIAH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E337C90)

inline static constexpr unsigned int FBKIJNOFIAH_TypeDefinitionIndex = 34417;

	class FBKIJNOFIAH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OKHIOMLIGGJ; // 0x18
		::System::UInt32 HGPAHCMJOLA; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FBKIJNOFIAH")->GetStaticField(0x59A20);
		}

		// static const ::System::Object LMFHJFMIJJL; // 0x0
		// static const ::System::Object PPMNDLLOGCG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKIJNOFIAH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FBKIJNOFIAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBKIJNOFIAH*))((::PBYTE)hIl2Cpp + FBKIJNOFIAH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBKIJNOFIAH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FBKIJNOFIAH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKIJNOFIAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FBKIJNOFIAH* Clone()
		{
			return ((::FBKIJNOFIAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKIJNOFIAH_CLONE_OFFSET))(this);
		}

		::System::UInt32 PPPKJICHPAD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKIJNOFIAH_PPPKJICHPAD_OFFSET))(this);
		}

		::System::Void AKDNKOKFCJP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBKIJNOFIAH_AKDNKOKFCJP_OFFSET))(this, a1);
		}

		::System::UInt32 KFDLMMDAIED()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKIJNOFIAH_KFDLMMDAIED_OFFSET))(this);
		}

		::System::Void OIDAGILFOIH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBKIJNOFIAH_OIDAGILFOIH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBKIJNOFIAH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FBKIJNOFIAH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBKIJNOFIAH*))((::PBYTE)hIl2Cpp + FBKIJNOFIAH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKIJNOFIAH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKIJNOFIAH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FBKIJNOFIAH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKIJNOFIAH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FBKIJNOFIAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBKIJNOFIAH*))((::PBYTE)hIl2Cpp + FBKIJNOFIAH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FBKIJNOFIAH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
