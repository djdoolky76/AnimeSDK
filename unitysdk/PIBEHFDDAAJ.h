#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIBEHFDDAAJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PIBEHFDDAAJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF40770)
#define PIBEHFDDAAJ_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x1DF403F0)
#define PIBEHFDDAAJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF409D0)
#define PIBEHFDDAAJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF40380)
#define PIBEHFDDAAJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF40340)
#define PIBEHFDDAAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF40330)
#define PIBEHFDDAAJ_DLBMEBEGNGL_OFFSET UNITYSDK_OFFSET(0x1DF40400)
#define PIBEHFDDAAJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF404F0)
#define PIBEHFDDAAJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF40410)
#define PIBEHFDDAAJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF405D0)
#define PIBEHFDDAAJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF402F0)
#define PIBEHFDDAAJ_JKCPFFEIMPL_OFFSET UNITYSDK_OFFSET(0x1DF403D0)
#define PIBEHFDDAAJ_KDOOLLFFFLB_OFFSET UNITYSDK_OFFSET(0x1DF403E0)
#define PIBEHFDDAAJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF40850)
#define PIBEHFDDAAJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF40810)
#define PIBEHFDDAAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF40320)
#define PIBEHFDDAAJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF40600)
#define PIBEHFDDAAJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF40660)

inline static constexpr unsigned int PIBEHFDDAAJ_TypeDefinitionIndex = 26749;

	class PIBEHFDDAAJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NBFPOGFBMFE; // 0x18
		::System::Boolean HJLFLLMAOID; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PIBEHFDDAAJ")->GetStaticField(0x405E0);
		}

		// static const ::System::Object ILCHGFLIDAL; // 0x0
		// static const ::System::Object GKBPDIPOFGE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBEHFDDAAJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PIBEHFDDAAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIBEHFDDAAJ*))((::PBYTE)hIl2Cpp + PIBEHFDDAAJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIBEHFDDAAJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PIBEHFDDAAJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBEHFDDAAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PIBEHFDDAAJ* Clone()
		{
			return ((::PIBEHFDDAAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBEHFDDAAJ_CLONE_OFFSET))(this);
		}

		::System::Boolean JKCPFFEIMPL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBEHFDDAAJ_JKCPFFEIMPL_OFFSET))(this);
		}

		::System::Void KDOOLLFFFLB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PIBEHFDDAAJ_KDOOLLFFFLB_OFFSET))(this, a1);
		}

		::System::UInt32 CBOFFPEFEPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBEHFDDAAJ_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::Void DLBMEBEGNGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIBEHFDDAAJ_DLBMEBEGNGL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIBEHFDDAAJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PIBEHFDDAAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIBEHFDDAAJ*))((::PBYTE)hIl2Cpp + PIBEHFDDAAJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBEHFDDAAJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBEHFDDAAJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PIBEHFDDAAJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBEHFDDAAJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PIBEHFDDAAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIBEHFDDAAJ*))((::PBYTE)hIl2Cpp + PIBEHFDDAAJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PIBEHFDDAAJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
