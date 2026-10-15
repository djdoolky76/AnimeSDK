#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLNNIAHJBCO;
class LGNJPFPACGH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LGNJPFPACGH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E92A8C0)
#define LGNJPFPACGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E92ABD0)
#define LGNJPFPACGH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E92A3A0)
#define LGNJPFPACGH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E92A350)
#define LGNJPFPACGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E92A340)
#define LGNJPFPACGH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E92A5C0)
#define LGNJPFPACGH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E92A440)
#define LGNJPFPACGH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E92A410)
#define LGNJPFPACGH_FAIDKCHOBJO_OFFSET UNITYSDK_OFFSET(0x1E92A430)
#define LGNJPFPACGH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E92A740)
#define LGNJPFPACGH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E92A300)
#define LGNJPFPACGH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E92AA20)
#define LGNJPFPACGH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E92A990)
#define LGNJPFPACGH_MJFMCFPJNLI_OFFSET UNITYSDK_OFFSET(0x1E92A420)
#define LGNJPFPACGH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E92A400)
#define LGNJPFPACGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E92A330)
#define LGNJPFPACGH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E92A780)
#define LGNJPFPACGH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E92A7E0)

inline static constexpr unsigned int LGNJPFPACGH_TypeDefinitionIndex = 30004;

	class LGNJPFPACGH : public ::System::Object
	{
	public:
		::KLNNIAHJBCO* DOPFAEJLNPE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LGNJPFPACGH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LGNJPFPACGH*>**)UnitySDK::FromName("", "LGNJPFPACGH")->GetStaticField(0x35950);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CDNOBMJFNIG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNJPFPACGH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LGNJPFPACGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGNJPFPACGH*))((::PBYTE)hIl2Cpp + LGNJPFPACGH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGNJPFPACGH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LGNJPFPACGH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LGNJPFPACGH*>*(*)())((::PBYTE)hIl2Cpp + LGNJPFPACGH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNJPFPACGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LGNJPFPACGH* Clone()
		{
			return ((::LGNJPFPACGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNJPFPACGH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNJPFPACGH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGNJPFPACGH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::KLNNIAHJBCO* MJFMCFPJNLI()
		{
			return ((::KLNNIAHJBCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNJPFPACGH_MJFMCFPJNLI_OFFSET))(this);
		}

		::System::Void FAIDKCHOBJO(::KLNNIAHJBCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLNNIAHJBCO*))((::PBYTE)hIl2Cpp + LGNJPFPACGH_FAIDKCHOBJO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGNJPFPACGH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LGNJPFPACGH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGNJPFPACGH*))((::PBYTE)hIl2Cpp + LGNJPFPACGH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNJPFPACGH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNJPFPACGH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LGNJPFPACGH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNJPFPACGH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LGNJPFPACGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGNJPFPACGH*))((::PBYTE)hIl2Cpp + LGNJPFPACGH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LGNJPFPACGH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
