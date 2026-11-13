#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOOHICJHPGL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define OOOHICJHPGL_AEFDIIMBEOI_OFFSET UNITYSDK_OFFSET(0x20361180)
#define OOOHICJHPGL_BGGFEOJOIDL_OFFSET UNITYSDK_OFFSET(0x20361120)
#define OOOHICJHPGL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x203617C0)
#define OOOHICJHPGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x20361C00)
#define OOOHICJHPGL_CKIFFFCFPDA_OFFSET UNITYSDK_OFFSET(0x20361190)
#define OOOHICJHPGL_CLONE_OFFSET UNITYSDK_OFFSET(0x20361050)
#define OOOHICJHPGL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20360FB0)
#define OOOHICJHPGL_CTOR_OFFSET UNITYSDK_OFFSET(0x20360FA0)
#define OOOHICJHPGL_DKBCHJFIJAK_OFFSET UNITYSDK_OFFSET(0x20361110)
#define OOOHICJHPGL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x203612C0)
#define OOOHICJHPGL_EQUALS_OFFSET UNITYSDK_OFFSET(0x203611A0)
#define OOOHICJHPGL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x20361150)
#define OOOHICJHPGL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20361470)
#define OOOHICJHPGL_JJGHNHIAFKM_OFFSET UNITYSDK_OFFSET(0x20361170)
#define OOOHICJHPGL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20360F60)
#define OOOHICJHPGL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20361AC0)
#define OOOHICJHPGL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x203619C0)
#define OOOHICJHPGL_MPNJGCHJKPA_OFFSET UNITYSDK_OFFSET(0x20361130)
#define OOOHICJHPGL_NEOKJMPFBCN_OFFSET UNITYSDK_OFFSET(0x20361100)
#define OOOHICJHPGL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x20361140)
#define OOOHICJHPGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20360F90)
#define OOOHICJHPGL_PFKJHHCINNM_OFFSET UNITYSDK_OFFSET(0x20361160)
#define OOOHICJHPGL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20361570)
#define OOOHICJHPGL_WRITETO_OFFSET UNITYSDK_OFFSET(0x203615D0)

inline static constexpr unsigned int OOOHICJHPGL_TypeDefinitionIndex = 26595;

	class OOOHICJHPGL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* BEBNFGDKGJK; // 0x18
		::Proto::ItemList* AMMENNLHHMA; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		::System::UInt32 ADEPENCCEMI; // 0x2C
		::System::UInt32 AIPDAGBGBCN; // 0x30
		static ::Google::Protobuf::MessageParser_1<::OOOHICJHPGL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OOOHICJHPGL*>**)UnitySDK::FromName("", "OOOHICJHPGL")->GetStaticField(0x2A0B0);
		}

		// static const ::System::Object OHNKMBECIAE; // 0x0
		// static const ::System::Object JHKEIKHFDON; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JEINNEAEFBD; // 0x0
		// static const ::System::Object OCBMLOFJIHA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOHICJHPGL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OOOHICJHPGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOOHICJHPGL*))((::PBYTE)hIl2Cpp + OOOHICJHPGL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOOHICJHPGL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OOOHICJHPGL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OOOHICJHPGL*>*(*)())((::PBYTE)hIl2Cpp + OOOHICJHPGL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOHICJHPGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OOOHICJHPGL* Clone()
		{
			return ((::OOOHICJHPGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOHICJHPGL_CLONE_OFFSET))(this);
		}

		::System::UInt32 NEOKJMPFBCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOHICJHPGL_NEOKJMPFBCN_OFFSET))(this);
		}

		::System::Void DKBCHJFIJAK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOOHICJHPGL_DKBCHJFIJAK_OFFSET))(this, a1);
		}

		::Proto::ItemList* BGGFEOJOIDL()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOHICJHPGL_BGGFEOJOIDL_OFFSET))(this);
		}

		::System::Void MPNJGCHJKPA(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + OOOHICJHPGL_MPNJGCHJKPA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOHICJHPGL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOOHICJHPGL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 PFKJHHCINNM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOHICJHPGL_PFKJHHCINNM_OFFSET))(this);
		}

		::System::Void JJGHNHIAFKM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOOHICJHPGL_JJGHNHIAFKM_OFFSET))(this, a1);
		}

		::Proto::ItemList* AEFDIIMBEOI()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOHICJHPGL_AEFDIIMBEOI_OFFSET))(this);
		}

		::System::Void CKIFFFCFPDA(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + OOOHICJHPGL_CKIFFFCFPDA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OOOHICJHPGL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OOOHICJHPGL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OOOHICJHPGL*))((::PBYTE)hIl2Cpp + OOOHICJHPGL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOHICJHPGL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOHICJHPGL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OOOHICJHPGL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOHICJHPGL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OOOHICJHPGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOOHICJHPGL*))((::PBYTE)hIl2Cpp + OOOHICJHPGL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OOOHICJHPGL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
