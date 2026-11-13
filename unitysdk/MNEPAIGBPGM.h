#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHNBFDNKLHE;
class MNEPAIGBPGM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MNEPAIGBPGM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F96EF90)
#define MNEPAIGBPGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F96F280)
#define MNEPAIGBPGM_CLONE_OFFSET UNITYSDK_OFFSET(0x1F96EA50)
#define MNEPAIGBPGM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F96E9E0)
#define MNEPAIGBPGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F96E9D0)
#define MNEPAIGBPGM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F96EC90)
#define MNEPAIGBPGM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F96EB10)
#define MNEPAIGBPGM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F96EAE0)
#define MNEPAIGBPGM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F96EE10)
#define MNEPAIGBPGM_IPFDMFDOKHJ_OFFSET UNITYSDK_OFFSET(0x1F96EB00)
#define MNEPAIGBPGM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F96E990)
#define MNEPAIGBPGM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F96F0E0)
#define MNEPAIGBPGM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F96F060)
#define MNEPAIGBPGM_NDGJGMEFMLH_OFFSET UNITYSDK_OFFSET(0x1F96EAF0)
#define MNEPAIGBPGM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F96EAD0)
#define MNEPAIGBPGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F96E9C0)
#define MNEPAIGBPGM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F96EE50)
#define MNEPAIGBPGM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F96EEB0)

inline static constexpr unsigned int MNEPAIGBPGM_TypeDefinitionIndex = 34930;

	class MNEPAIGBPGM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KHNBFDNKLHE* CHFNJJAMCCO; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MNEPAIGBPGM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MNEPAIGBPGM*>**)UnitySDK::FromName("", "MNEPAIGBPGM")->GetStaticField(0x50920);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CJDOLCNNPKL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNEPAIGBPGM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MNEPAIGBPGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNEPAIGBPGM*))((::PBYTE)hIl2Cpp + MNEPAIGBPGM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNEPAIGBPGM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MNEPAIGBPGM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MNEPAIGBPGM*>*(*)())((::PBYTE)hIl2Cpp + MNEPAIGBPGM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNEPAIGBPGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MNEPAIGBPGM* Clone()
		{
			return ((::MNEPAIGBPGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNEPAIGBPGM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNEPAIGBPGM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MNEPAIGBPGM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::KHNBFDNKLHE* NDGJGMEFMLH()
		{
			return ((::KHNBFDNKLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNEPAIGBPGM_NDGJGMEFMLH_OFFSET))(this);
		}

		::System::Void IPFDMFDOKHJ(::KHNBFDNKLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + MNEPAIGBPGM_IPFDMFDOKHJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MNEPAIGBPGM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MNEPAIGBPGM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MNEPAIGBPGM*))((::PBYTE)hIl2Cpp + MNEPAIGBPGM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNEPAIGBPGM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNEPAIGBPGM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MNEPAIGBPGM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNEPAIGBPGM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MNEPAIGBPGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNEPAIGBPGM*))((::PBYTE)hIl2Cpp + MNEPAIGBPGM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MNEPAIGBPGM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
