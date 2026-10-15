#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCBFOIIENII;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define BCBFOIIENII_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E904F80)
#define BCBFOIIENII_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9052E0)
#define BCBFOIIENII_CLONE_OFFSET UNITYSDK_OFFSET(0x1E904950)
#define BCBFOIIENII_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9048E0)
#define BCBFOIIENII_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9048D0)
#define BCBFOIIENII_DPKOHJLBEBB_OFFSET UNITYSDK_OFFSET(0x1E9049F0)
#define BCBFOIIENII_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E904B50)
#define BCBFOIIENII_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E904A50)
#define BCBFOIIENII_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E904A20)
#define BCBFOIIENII_FGGBMGCGCKF_OFFSET UNITYSDK_OFFSET(0x1E904A40)
#define BCBFOIIENII_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E904CF0)
#define BCBFOIIENII_IJPLICKGMHC_OFFSET UNITYSDK_OFFSET(0x1E904A00)
#define BCBFOIIENII_JAOPBIKPOMI_OFFSET UNITYSDK_OFFSET(0x1E904A30)
#define BCBFOIIENII_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E904890)
#define BCBFOIIENII_LKBDNLAMPPG_OFFSET UNITYSDK_OFFSET(0x1E9049E0)
#define BCBFOIIENII_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9051F0)
#define BCBFOIIENII_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E905140)
#define BCBFOIIENII_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E904A10)
#define BCBFOIIENII_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9048C0)
#define BCBFOIIENII_PFNPJNPKHHG_OFFSET UNITYSDK_OFFSET(0x1E9049D0)
#define BCBFOIIENII_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E904D90)
#define BCBFOIIENII_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E904DF0)

inline static constexpr unsigned int BCBFOIIENII_TypeDefinitionIndex = 31219;

	class BCBFOIIENII : public ::System::Object
	{
	public:
		::Proto::ItemList* JEDJCPJBEOM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 BHDCGBNFPKI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::UInt32 AENFHPAGFOI; // 0x28
		static ::Google::Protobuf::MessageParser_1<::BCBFOIIENII*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BCBFOIIENII*>**)UnitySDK::FromName("", "BCBFOIIENII")->GetStaticField(0x3AFB0);
		}

		// static const ::System::Object KGAMBJABCOJ; // 0x0
		// static const ::System::Object HPGDFCOBPGH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HLGEDBNIHII; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBFOIIENII_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BCBFOIIENII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCBFOIIENII*))((::PBYTE)hIl2Cpp + BCBFOIIENII_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCBFOIIENII_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BCBFOIIENII*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BCBFOIIENII*>*(*)())((::PBYTE)hIl2Cpp + BCBFOIIENII_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBFOIIENII_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BCBFOIIENII* Clone()
		{
			return ((::BCBFOIIENII*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBFOIIENII_CLONE_OFFSET))(this);
		}

		::System::UInt32 PFNPJNPKHHG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBFOIIENII_PFNPJNPKHHG_OFFSET))(this);
		}

		::System::Void LKBDNLAMPPG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCBFOIIENII_LKBDNLAMPPG_OFFSET))(this, a1);
		}

		::Proto::ItemList* DPKOHJLBEBB()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBFOIIENII_DPKOHJLBEBB_OFFSET))(this);
		}

		::System::Void IJPLICKGMHC(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + BCBFOIIENII_IJPLICKGMHC_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBFOIIENII_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCBFOIIENII_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 JAOPBIKPOMI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBFOIIENII_JAOPBIKPOMI_OFFSET))(this);
		}

		::System::Void FGGBMGCGCKF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCBFOIIENII_FGGBMGCGCKF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BCBFOIIENII_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BCBFOIIENII* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCBFOIIENII*))((::PBYTE)hIl2Cpp + BCBFOIIENII_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBFOIIENII_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBFOIIENII_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BCBFOIIENII_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBFOIIENII_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BCBFOIIENII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCBFOIIENII*))((::PBYTE)hIl2Cpp + BCBFOIIENII_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BCBFOIIENII_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
