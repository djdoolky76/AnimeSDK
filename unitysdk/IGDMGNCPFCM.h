#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGDMGNCPFCM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IGDMGNCPFCM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E61D790)
#define IGDMGNCPFCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E61D9B0)
#define IGDMGNCPFCM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E61D3E0)
#define IGDMGNCPFCM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E61D3B0)
#define IGDMGNCPFCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E61D3A0)
#define IGDMGNCPFCM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E61D510)
#define IGDMGNCPFCM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E61D440)
#define IGDMGNCPFCM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E61D430)
#define IGDMGNCPFCM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E61D680)
#define IGDMGNCPFCM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E61D360)
#define IGDMGNCPFCM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E61D850)
#define IGDMGNCPFCM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E61D820)
#define IGDMGNCPFCM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E61D420)
#define IGDMGNCPFCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E61D390)
#define IGDMGNCPFCM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E61D6B0)
#define IGDMGNCPFCM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E61D710)

inline static constexpr unsigned int IGDMGNCPFCM_TypeDefinitionIndex = 26176;

	class IGDMGNCPFCM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IGDMGNCPFCM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IGDMGNCPFCM*>**)UnitySDK::FromName("", "IGDMGNCPFCM")->GetStaticField(0x4AF20);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDMGNCPFCM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IGDMGNCPFCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGDMGNCPFCM*))((::PBYTE)hIl2Cpp + IGDMGNCPFCM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGDMGNCPFCM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IGDMGNCPFCM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IGDMGNCPFCM*>*(*)())((::PBYTE)hIl2Cpp + IGDMGNCPFCM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDMGNCPFCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IGDMGNCPFCM* Clone()
		{
			return ((::IGDMGNCPFCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDMGNCPFCM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDMGNCPFCM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGDMGNCPFCM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGDMGNCPFCM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IGDMGNCPFCM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGDMGNCPFCM*))((::PBYTE)hIl2Cpp + IGDMGNCPFCM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDMGNCPFCM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDMGNCPFCM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IGDMGNCPFCM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDMGNCPFCM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IGDMGNCPFCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGDMGNCPFCM*))((::PBYTE)hIl2Cpp + IGDMGNCPFCM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IGDMGNCPFCM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
