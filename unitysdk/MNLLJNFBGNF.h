#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGPIEEKIEME;
class MNLLJNFBGNF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MNLLJNFBGNF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDD9DD0)
#define MNLLJNFBGNF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDDA0A0)
#define MNLLJNFBGNF_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDD97D0)
#define MNLLJNFBGNF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDD96B0)
#define MNLLJNFBGNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDD96A0)
#define MNLLJNFBGNF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDD9AC0)
#define MNLLJNFBGNF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDD9940)
#define MNLLJNFBGNF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FDD9930)
#define MNLLJNFBGNF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDD9C40)
#define MNLLJNFBGNF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDD9660)
#define MNLLJNFBGNF_LHNDAGFGPLH_OFFSET UNITYSDK_OFFSET(0x1FDD9900)
#define MNLLJNFBGNF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDD9F10)
#define MNLLJNFBGNF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDD9EA0)
#define MNLLJNFBGNF_OAOHAFBDDMA_OFFSET UNITYSDK_OFFSET(0x1FDD9910)
#define MNLLJNFBGNF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FDD9920)
#define MNLLJNFBGNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDD9690)
#define MNLLJNFBGNF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDD9C90)
#define MNLLJNFBGNF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDD9CF0)

inline static constexpr unsigned int MNLLJNFBGNF_TypeDefinitionIndex = 34765;

	class MNLLJNFBGNF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KGPIEEKIEME* HLJKHOMPDAF; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MNLLJNFBGNF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MNLLJNFBGNF*>**)UnitySDK::FromName("", "MNLLJNFBGNF")->GetStaticField(0x61FF0);
		}

		// static const ::System::Object NLMACHMELAD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLLJNFBGNF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MNLLJNFBGNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNLLJNFBGNF*))((::PBYTE)hIl2Cpp + MNLLJNFBGNF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNLLJNFBGNF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MNLLJNFBGNF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MNLLJNFBGNF*>*(*)())((::PBYTE)hIl2Cpp + MNLLJNFBGNF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLLJNFBGNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MNLLJNFBGNF* Clone()
		{
			return ((::MNLLJNFBGNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLLJNFBGNF_CLONE_OFFSET))(this);
		}

		::KGPIEEKIEME* LHNDAGFGPLH()
		{
			return ((::KGPIEEKIEME*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLLJNFBGNF_LHNDAGFGPLH_OFFSET))(this);
		}

		::System::Void OAOHAFBDDMA(::KGPIEEKIEME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGPIEEKIEME*))((::PBYTE)hIl2Cpp + MNLLJNFBGNF_OAOHAFBDDMA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLLJNFBGNF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MNLLJNFBGNF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MNLLJNFBGNF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MNLLJNFBGNF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MNLLJNFBGNF*))((::PBYTE)hIl2Cpp + MNLLJNFBGNF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLLJNFBGNF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLLJNFBGNF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MNLLJNFBGNF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLLJNFBGNF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MNLLJNFBGNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNLLJNFBGNF*))((::PBYTE)hIl2Cpp + MNLLJNFBGNF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MNLLJNFBGNF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
