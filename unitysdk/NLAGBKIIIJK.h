#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCPGBPNGOFF;
class NLAGBKIIIJK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NLAGBKIIIJK_ADGLNFILOHI_OFFSET UNITYSDK_OFFSET(0x1EB32460)
#define NLAGBKIIIJK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB32950)
#define NLAGBKIIIJK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB32C60)
#define NLAGBKIIIJK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB323B0)
#define NLAGBKIIIJK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB32330)
#define NLAGBKIIIJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB32320)
#define NLAGBKIIIJK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB32600)
#define NLAGBKIIIJK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB32480)
#define NLAGBKIIIJK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB32450)
#define NLAGBKIIIJK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB32780)
#define NLAGBKIIIJK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB322E0)
#define NLAGBKIIIJK_KLINCLPEAHO_OFFSET UNITYSDK_OFFSET(0x1EB32470)
#define NLAGBKIIIJK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB32AB0)
#define NLAGBKIIIJK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB32A20)
#define NLAGBKIIIJK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB32440)
#define NLAGBKIIIJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB32310)
#define NLAGBKIIIJK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB32810)
#define NLAGBKIIIJK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB32870)

inline static constexpr unsigned int NLAGBKIIIJK_TypeDefinitionIndex = 32797;

	class NLAGBKIIIJK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GCPGBPNGOFF* NLIJNNMCAAO; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NLAGBKIIIJK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NLAGBKIIIJK*>**)UnitySDK::FromName("", "NLAGBKIIIJK")->GetStaticField(0x69980);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DMAFCIBFMPD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGBKIIIJK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NLAGBKIIIJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLAGBKIIIJK*))((::PBYTE)hIl2Cpp + NLAGBKIIIJK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLAGBKIIIJK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NLAGBKIIIJK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NLAGBKIIIJK*>*(*)())((::PBYTE)hIl2Cpp + NLAGBKIIIJK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGBKIIIJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NLAGBKIIIJK* Clone()
		{
			return ((::NLAGBKIIIJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGBKIIIJK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGBKIIIJK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLAGBKIIIJK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::GCPGBPNGOFF* ADGLNFILOHI()
		{
			return ((::GCPGBPNGOFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGBKIIIJK_ADGLNFILOHI_OFFSET))(this);
		}

		::System::Void KLINCLPEAHO(::GCPGBPNGOFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCPGBPNGOFF*))((::PBYTE)hIl2Cpp + NLAGBKIIIJK_KLINCLPEAHO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLAGBKIIIJK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NLAGBKIIIJK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NLAGBKIIIJK*))((::PBYTE)hIl2Cpp + NLAGBKIIIJK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGBKIIIJK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGBKIIIJK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NLAGBKIIIJK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGBKIIIJK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NLAGBKIIIJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLAGBKIIIJK*))((::PBYTE)hIl2Cpp + NLAGBKIIIJK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NLAGBKIIIJK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
