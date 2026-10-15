#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCPGBPNGOFF;
class LNKHNPOEJJE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LNKHNPOEJJE_ADGLNFILOHI_OFFSET UNITYSDK_OFFSET(0x1E988550)
#define LNKHNPOEJJE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E988A70)
#define LNKHNPOEJJE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E988D80)
#define LNKHNPOEJJE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9884B0)
#define LNKHNPOEJJE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E988420)
#define LNKHNPOEJJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E988410)
#define LNKHNPOEJJE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E988710)
#define LNKHNPOEJJE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E988590)
#define LNKHNPOEJJE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E988580)
#define LNKHNPOEJJE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E988890)
#define LNKHNPOEJJE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9883D0)
#define LNKHNPOEJJE_KLINCLPEAHO_OFFSET UNITYSDK_OFFSET(0x1E988560)
#define LNKHNPOEJJE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E988BD0)
#define LNKHNPOEJJE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E988B40)
#define LNKHNPOEJJE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E988570)
#define LNKHNPOEJJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E988400)
#define LNKHNPOEJJE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E988930)
#define LNKHNPOEJJE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E988990)

inline static constexpr unsigned int LNKHNPOEJJE_TypeDefinitionIndex = 32801;

	class LNKHNPOEJJE : public ::System::Object
	{
	public:
		::GCPGBPNGOFF* NLIJNNMCAAO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LNKHNPOEJJE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LNKHNPOEJJE*>**)UnitySDK::FromName("", "LNKHNPOEJJE")->GetStaticField(0x404F0);
		}

		// static const ::System::Object DMAFCIBFMPD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKHNPOEJJE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LNKHNPOEJJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNKHNPOEJJE*))((::PBYTE)hIl2Cpp + LNKHNPOEJJE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNKHNPOEJJE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LNKHNPOEJJE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LNKHNPOEJJE*>*(*)())((::PBYTE)hIl2Cpp + LNKHNPOEJJE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKHNPOEJJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LNKHNPOEJJE* Clone()
		{
			return ((::LNKHNPOEJJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKHNPOEJJE_CLONE_OFFSET))(this);
		}

		::GCPGBPNGOFF* ADGLNFILOHI()
		{
			return ((::GCPGBPNGOFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKHNPOEJJE_ADGLNFILOHI_OFFSET))(this);
		}

		::System::Void KLINCLPEAHO(::GCPGBPNGOFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCPGBPNGOFF*))((::PBYTE)hIl2Cpp + LNKHNPOEJJE_KLINCLPEAHO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKHNPOEJJE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LNKHNPOEJJE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LNKHNPOEJJE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LNKHNPOEJJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LNKHNPOEJJE*))((::PBYTE)hIl2Cpp + LNKHNPOEJJE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKHNPOEJJE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKHNPOEJJE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LNKHNPOEJJE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKHNPOEJJE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LNKHNPOEJJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNKHNPOEJJE*))((::PBYTE)hIl2Cpp + LNKHNPOEJJE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LNKHNPOEJJE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
