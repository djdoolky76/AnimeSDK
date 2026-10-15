#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELJDPDFMLPM;
class KPOFAPDKBJA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ELJDPDFMLPM_BCEICCJIDKE_OFFSET UNITYSDK_OFFSET(0x1E2D3520)
#define ELJDPDFMLPM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2D3AC0)
#define ELJDPDFMLPM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D3E00)
#define ELJDPDFMLPM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2D34A0)
#define ELJDPDFMLPM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2D3430)
#define ELJDPDFMLPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D3420)
#define ELJDPDFMLPM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2D36B0)
#define ELJDPDFMLPM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2D3540)
#define ELJDPDFMLPM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2D3980)
#define ELJDPDFMLPM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2D33E0)
#define ELJDPDFMLPM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2D3C30)
#define ELJDPDFMLPM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2D3B20)
#define ELJDPDFMLPM_NPFAGFEPJMG_OFFSET UNITYSDK_OFFSET(0x1E2D3530)
#define ELJDPDFMLPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2D3410)
#define ELJDPDFMLPM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2D39D0)
#define ELJDPDFMLPM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2D3A30)

inline static constexpr unsigned int ELJDPDFMLPM_TypeDefinitionIndex = 33113;

	class ELJDPDFMLPM : public ::System::Object
	{
	public:
		::KPOFAPDKBJA* OBCBJBCGFCO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ELJDPDFMLPM")->GetStaticField(0x50DA0);
		}

		// static const ::System::Object JACGDPEBINO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDPDFMLPM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ELJDPDFMLPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELJDPDFMLPM*))((::PBYTE)hIl2Cpp + ELJDPDFMLPM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELJDPDFMLPM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ELJDPDFMLPM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDPDFMLPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ELJDPDFMLPM* Clone()
		{
			return ((::ELJDPDFMLPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDPDFMLPM_CLONE_OFFSET))(this);
		}

		::KPOFAPDKBJA* BCEICCJIDKE()
		{
			return ((::KPOFAPDKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDPDFMLPM_BCEICCJIDKE_OFFSET))(this);
		}

		::System::Void NPFAGFEPJMG(::KPOFAPDKBJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPOFAPDKBJA*))((::PBYTE)hIl2Cpp + ELJDPDFMLPM_NPFAGFEPJMG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ELJDPDFMLPM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ELJDPDFMLPM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ELJDPDFMLPM*))((::PBYTE)hIl2Cpp + ELJDPDFMLPM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDPDFMLPM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDPDFMLPM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ELJDPDFMLPM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDPDFMLPM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ELJDPDFMLPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELJDPDFMLPM*))((::PBYTE)hIl2Cpp + ELJDPDFMLPM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ELJDPDFMLPM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
