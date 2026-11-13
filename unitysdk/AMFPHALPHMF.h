#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDKAFBBHPFL.h"
#include "unitysdk/System/Object.h"
class AMFPHALPHMF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AMFPHALPHMF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2002E5E0)
#define AMFPHALPHMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x2002E8F0)
#define AMFPHALPHMF_CLONE_OFFSET UNITYSDK_OFFSET(0x2002E1D0)
#define AMFPHALPHMF_CPEEIHDCIFD_OFFSET UNITYSDK_OFFSET(0x2002E240)
#define AMFPHALPHMF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2002E1A0)
#define AMFPHALPHMF_CTOR_OFFSET UNITYSDK_OFFSET(0x2002E190)
#define AMFPHALPHMF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2002E390)
#define AMFPHALPHMF_EQUALS_OFFSET UNITYSDK_OFFSET(0x2002E280)
#define AMFPHALPHMF_FHOLHJHEOMJ_OFFSET UNITYSDK_OFFSET(0x2002E250)
#define AMFPHALPHMF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2002E460)
#define AMFPHALPHMF_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x2002E270)
#define AMFPHALPHMF_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x2002E260)
#define AMFPHALPHMF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2002E120)
#define AMFPHALPHMF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2002E770)
#define AMFPHALPHMF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2002E730)
#define AMFPHALPHMF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2002E180)
#define AMFPHALPHMF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2002E490)
#define AMFPHALPHMF_WRITETO_OFFSET UNITYSDK_OFFSET(0x2002E4F0)

inline static constexpr unsigned int AMFPHALPHMF_TypeDefinitionIndex = 29766;

	class AMFPHALPHMF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NMABHKCOLCM; // 0x18
		::FDKAFBBHPFL GMPNCOBOFDM; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::AMFPHALPHMF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AMFPHALPHMF*>**)UnitySDK::FromName("", "AMFPHALPHMF")->GetStaticField(0x3A210);
		}

		// static const ::System::Object IADILMFABOH; // 0x0
		// static const ::System::Object GDFHGOOLLFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFPHALPHMF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AMFPHALPHMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMFPHALPHMF*))((::PBYTE)hIl2Cpp + AMFPHALPHMF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMFPHALPHMF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AMFPHALPHMF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AMFPHALPHMF*>*(*)())((::PBYTE)hIl2Cpp + AMFPHALPHMF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFPHALPHMF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AMFPHALPHMF* Clone()
		{
			return ((::AMFPHALPHMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFPHALPHMF_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPEEIHDCIFD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFPHALPHMF_CPEEIHDCIFD_OFFSET))(this);
		}

		::System::Void FHOLHJHEOMJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMFPHALPHMF_FHOLHJHEOMJ_OFFSET))(this, a1);
		}

		::FDKAFBBHPFL JBIOGKPHKKC()
		{
			return ((::FDKAFBBHPFL(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFPHALPHMF_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::FDKAFBBHPFL a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDKAFBBHPFL))((::PBYTE)hIl2Cpp + AMFPHALPHMF_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMFPHALPHMF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AMFPHALPHMF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AMFPHALPHMF*))((::PBYTE)hIl2Cpp + AMFPHALPHMF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFPHALPHMF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFPHALPHMF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AMFPHALPHMF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFPHALPHMF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AMFPHALPHMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMFPHALPHMF*))((::PBYTE)hIl2Cpp + AMFPHALPHMF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AMFPHALPHMF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
