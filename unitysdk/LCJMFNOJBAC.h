#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCJMFNOJBAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define LCJMFNOJBAC_AMEFBODJIHJ_OFFSET UNITYSDK_OFFSET(0x1E8C0160)
#define LCJMFNOJBAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8C06D0)
#define LCJMFNOJBAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8C0AA0)
#define LCJMFNOJBAC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8C00A0)
#define LCJMFNOJBAC_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E8C0140)
#define LCJMFNOJBAC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8C0030)
#define LCJMFNOJBAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C0020)
#define LCJMFNOJBAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8C0310)
#define LCJMFNOJBAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8C0180)
#define LCJMFNOJBAC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8C0130)
#define LCJMFNOJBAC_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E8C0150)
#define LCJMFNOJBAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8C04A0)
#define LCJMFNOJBAC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8BFFE0)
#define LCJMFNOJBAC_KMANAJJOLLP_OFFSET UNITYSDK_OFFSET(0x1E8C0170)
#define LCJMFNOJBAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8C08C0)
#define LCJMFNOJBAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8C0820)
#define LCJMFNOJBAC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8C0120)
#define LCJMFNOJBAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8C0010)
#define LCJMFNOJBAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8C0530)
#define LCJMFNOJBAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8C0590)

inline static constexpr unsigned int LCJMFNOJBAC_TypeDefinitionIndex = 30775;

	class LCJMFNOJBAC : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 AAGAKAIKGCM; // 0x24
		static ::Google::Protobuf::MessageParser_1<::LCJMFNOJBAC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LCJMFNOJBAC*>**)UnitySDK::FromName("", "LCJMFNOJBAC")->GetStaticField(0x2CA40);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object MGPGDLIJKLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJMFNOJBAC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LCJMFNOJBAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCJMFNOJBAC*))((::PBYTE)hIl2Cpp + LCJMFNOJBAC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCJMFNOJBAC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LCJMFNOJBAC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LCJMFNOJBAC*>*(*)())((::PBYTE)hIl2Cpp + LCJMFNOJBAC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJMFNOJBAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LCJMFNOJBAC* Clone()
		{
			return ((::LCJMFNOJBAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJMFNOJBAC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJMFNOJBAC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LCJMFNOJBAC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJMFNOJBAC_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + LCJMFNOJBAC_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::UInt32 AMEFBODJIHJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJMFNOJBAC_AMEFBODJIHJ_OFFSET))(this);
		}

		::System::Void KMANAJJOLLP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LCJMFNOJBAC_KMANAJJOLLP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LCJMFNOJBAC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LCJMFNOJBAC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LCJMFNOJBAC*))((::PBYTE)hIl2Cpp + LCJMFNOJBAC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJMFNOJBAC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJMFNOJBAC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LCJMFNOJBAC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJMFNOJBAC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LCJMFNOJBAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCJMFNOJBAC*))((::PBYTE)hIl2Cpp + LCJMFNOJBAC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LCJMFNOJBAC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
