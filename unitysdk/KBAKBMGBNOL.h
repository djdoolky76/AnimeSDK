#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBAKBMGBNOL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KBAKBMGBNOL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7E9230)
#define KBAKBMGBNOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7E9540)
#define KBAKBMGBNOL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7E8DB0)
#define KBAKBMGBNOL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7E8D70)
#define KBAKBMGBNOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E8D60)
#define KBAKBMGBNOL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7E8F50)
#define KBAKBMGBNOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7E8E60)
#define KBAKBMGBNOL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7E8E10)
#define KBAKBMGBNOL_FLABFFODLAN_OFFSET UNITYSDK_OFFSET(0x1E7E8E50)
#define KBAKBMGBNOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7E9030)
#define KBAKBMGBNOL_GMGCKILGECB_OFFSET UNITYSDK_OFFSET(0x1E7E8E30)
#define KBAKBMGBNOL_JFPFGJGFCGE_OFFSET UNITYSDK_OFFSET(0x1E7E8E40)
#define KBAKBMGBNOL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7E8D20)
#define KBAKBMGBNOL_LJBBKBHMBJF_OFFSET UNITYSDK_OFFSET(0x1E7E8E20)
#define KBAKBMGBNOL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7E93A0)
#define KBAKBMGBNOL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7E9350)
#define KBAKBMGBNOL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7E8E00)
#define KBAKBMGBNOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7E8D50)
#define KBAKBMGBNOL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7E9060)
#define KBAKBMGBNOL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7E90C0)

inline static constexpr unsigned int KBAKBMGBNOL_TypeDefinitionIndex = 30342;

	class KBAKBMGBNOL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 CBJLKLAIGPG; // 0x1C
		::System::Boolean JNDBHPPKILC; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KBAKBMGBNOL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KBAKBMGBNOL*>**)UnitySDK::FromName("", "KBAKBMGBNOL")->GetStaticField(0xE4B0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DPMPPDAIAAD; // 0x0
		// static const ::System::Object ABJLJCFPJJL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBAKBMGBNOL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KBAKBMGBNOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBAKBMGBNOL*))((::PBYTE)hIl2Cpp + KBAKBMGBNOL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBAKBMGBNOL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KBAKBMGBNOL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KBAKBMGBNOL*>*(*)())((::PBYTE)hIl2Cpp + KBAKBMGBNOL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBAKBMGBNOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KBAKBMGBNOL* Clone()
		{
			return ((::KBAKBMGBNOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBAKBMGBNOL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBAKBMGBNOL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KBAKBMGBNOL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 LJBBKBHMBJF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBAKBMGBNOL_LJBBKBHMBJF_OFFSET))(this);
		}

		::System::Void GMGCKILGECB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KBAKBMGBNOL_GMGCKILGECB_OFFSET))(this, a1);
		}

		::System::Boolean JFPFGJGFCGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBAKBMGBNOL_JFPFGJGFCGE_OFFSET))(this);
		}

		::System::Void FLABFFODLAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KBAKBMGBNOL_FLABFFODLAN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBAKBMGBNOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KBAKBMGBNOL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KBAKBMGBNOL*))((::PBYTE)hIl2Cpp + KBAKBMGBNOL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBAKBMGBNOL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBAKBMGBNOL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KBAKBMGBNOL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBAKBMGBNOL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KBAKBMGBNOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBAKBMGBNOL*))((::PBYTE)hIl2Cpp + KBAKBMGBNOL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KBAKBMGBNOL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
