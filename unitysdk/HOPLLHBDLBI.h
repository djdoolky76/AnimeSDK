#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HOPLLHBDLBI;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HOPLLHBDLBI_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1E5C5520)
#define HOPLLHBDLBI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5C5A30)
#define HOPLLHBDLBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C5D50)
#define HOPLLHBDLBI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5C5460)
#define HOPLLHBDLBI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5C53F0)
#define HOPLLHBDLBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C53E0)
#define HOPLLHBDLBI_EHMAFEANNKM_OFFSET UNITYSDK_OFFSET(0x1E5C5510)
#define HOPLLHBDLBI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5C5660)
#define HOPLLHBDLBI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5C5560)
#define HOPLLHBDLBI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E5C5550)
#define HOPLLHBDLBI_FLDEJDGGMGD_OFFSET UNITYSDK_OFFSET(0x1E5C5500)
#define HOPLLHBDLBI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5C5800)
#define HOPLLHBDLBI_IGDPIIJEELD_OFFSET UNITYSDK_OFFSET(0x1E5C54E0)
#define HOPLLHBDLBI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5C53A0)
#define HOPLLHBDLBI_KMOAIPBICFE_OFFSET UNITYSDK_OFFSET(0x1E5C54F0)
#define HOPLLHBDLBI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5C5C80)
#define HOPLLHBDLBI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5C5BF0)
#define HOPLLHBDLBI_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1E5C5530)
#define HOPLLHBDLBI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E5C5540)
#define HOPLLHBDLBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5C53D0)
#define HOPLLHBDLBI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5C5840)
#define HOPLLHBDLBI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5C58A0)

inline static constexpr unsigned int HOPLLHBDLBI_TypeDefinitionIndex = 28254;

	class HOPLLHBDLBI : public ::System::Object
	{
	public:
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 APAHJAEEAIH; // 0x24
		::System::UInt32 EEBKDMBJHEC; // 0x28
		static ::Google::Protobuf::MessageParser_1<::HOPLLHBDLBI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HOPLLHBDLBI*>**)UnitySDK::FromName("", "HOPLLHBDLBI")->GetStaticField(0x3E320);
		}

		// static const ::System::Object LCLODCLLPDD; // 0x0
		// static const ::System::Object DCPHPJKBJBN; // 0x0
		// static const ::System::Object HNBHJOFPFLM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HOPLLHBDLBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOPLLHBDLBI*))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOPLLHBDLBI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HOPLLHBDLBI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HOPLLHBDLBI*>*(*)())((::PBYTE)hIl2Cpp + HOPLLHBDLBI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HOPLLHBDLBI* Clone()
		{
			return ((::HOPLLHBDLBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_CLONE_OFFSET))(this);
		}

		::System::UInt32 IGDPIIJEELD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_IGDPIIJEELD_OFFSET))(this);
		}

		::System::Void KMOAIPBICFE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_KMOAIPBICFE_OFFSET))(this, a1);
		}

		::System::UInt32 FLDEJDGGMGD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_FLDEJDGGMGD_OFFSET))(this);
		}

		::System::Void EHMAFEANNKM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_EHMAFEANNKM_OFFSET))(this, a1);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HOPLLHBDLBI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HOPLLHBDLBI*))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HOPLLHBDLBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOPLLHBDLBI*))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HOPLLHBDLBI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
