#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELJDPDFMLPM;
class KPOFAPDKBJA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ELJDPDFMLPM_BCEICCJIDKE_OFFSET UNITYSDK_OFFSET(0x1E2A5EA0)
#define ELJDPDFMLPM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2A6440)
#define ELJDPDFMLPM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A6780)
#define ELJDPDFMLPM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2A5E20)
#define ELJDPDFMLPM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A5DB0)
#define ELJDPDFMLPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A5DA0)
#define ELJDPDFMLPM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2A6030)
#define ELJDPDFMLPM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2A5EC0)
#define ELJDPDFMLPM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2A6300)
#define ELJDPDFMLPM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2A5D60)
#define ELJDPDFMLPM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2A65B0)
#define ELJDPDFMLPM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2A64A0)
#define ELJDPDFMLPM_NPFAGFEPJMG_OFFSET UNITYSDK_OFFSET(0x1E2A5EB0)
#define ELJDPDFMLPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2A5D90)
#define ELJDPDFMLPM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2A6350)
#define ELJDPDFMLPM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2A63B0)

inline static constexpr unsigned int ELJDPDFMLPM_TypeDefinitionIndex = 33113;

	class ELJDPDFMLPM : public ::System::Object
	{
	public:
		::KPOFAPDKBJA* OBCBJBCGFCO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ELJDPDFMLPM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ELJDPDFMLPM*>**)UnitySDK::FromName("", "ELJDPDFMLPM")->GetStaticField(0x51A00);
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

		static ::Google::Protobuf::MessageParser_1<::ELJDPDFMLPM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ELJDPDFMLPM*>*(*)())((::PBYTE)hIl2Cpp + ELJDPDFMLPM_JJGHOBBFNJD_OFFSET))();
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
