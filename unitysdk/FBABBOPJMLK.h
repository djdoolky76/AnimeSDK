#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBABBOPJMLK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define FBABBOPJMLK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2FF860)
#define FBABBOPJMLK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2FFC20)
#define FBABBOPJMLK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2FF230)
#define FBABBOPJMLK_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E2FF2D0)
#define FBABBOPJMLK_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E2FF2F0)
#define FBABBOPJMLK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2FF1C0)
#define FBABBOPJMLK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2FF1B0)
#define FBABBOPJMLK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2FF4A0)
#define FBABBOPJMLK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2FF310)
#define FBABBOPJMLK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2FF2C0)
#define FBABBOPJMLK_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E2FF300)
#define FBABBOPJMLK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2FF630)
#define FBABBOPJMLK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2FF170)
#define FBABBOPJMLK_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E2FF2E0)
#define FBABBOPJMLK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2FFA40)
#define FBABBOPJMLK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2FF9A0)
#define FBABBOPJMLK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2FF2B0)
#define FBABBOPJMLK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2FF1A0)
#define FBABBOPJMLK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2FF6C0)
#define FBABBOPJMLK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2FF720)

inline static constexpr unsigned int FBABBOPJMLK_TypeDefinitionIndex = 32062;

	class FBABBOPJMLK : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 DNKADAFBILN; // 0x24
		static ::Google::Protobuf::MessageParser_1<::FBABBOPJMLK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FBABBOPJMLK*>**)UnitySDK::FromName("", "FBABBOPJMLK")->GetStaticField(0x4D8B0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBABBOPJMLK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FBABBOPJMLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBABBOPJMLK*))((::PBYTE)hIl2Cpp + FBABBOPJMLK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBABBOPJMLK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FBABBOPJMLK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FBABBOPJMLK*>*(*)())((::PBYTE)hIl2Cpp + FBABBOPJMLK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBABBOPJMLK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FBABBOPJMLK* Clone()
		{
			return ((::FBABBOPJMLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBABBOPJMLK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBABBOPJMLK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBABBOPJMLK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBABBOPJMLK_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBABBOPJMLK_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBABBOPJMLK_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + FBABBOPJMLK_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBABBOPJMLK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FBABBOPJMLK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBABBOPJMLK*))((::PBYTE)hIl2Cpp + FBABBOPJMLK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBABBOPJMLK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBABBOPJMLK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FBABBOPJMLK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBABBOPJMLK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FBABBOPJMLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBABBOPJMLK*))((::PBYTE)hIl2Cpp + FBABBOPJMLK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FBABBOPJMLK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
