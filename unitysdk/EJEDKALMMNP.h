#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJEDKALMMNP_LPHDAIMKFNN.h"
#include "unitysdk/JMEOHDKGMHK.h"
#include "unitysdk/System/Object.h"
class EJEDKALMMNP;
class GNBBDMBNNDJ;
class OCGAELCDMOE;
class OJLACOONJNG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EJEDKALMMNP_BIPFGPMHCKD_OFFSET UNITYSDK_OFFSET(0x1E2B2710)
#define EJEDKALMMNP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2B31F0)
#define EJEDKALMMNP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B3CF0)
#define EJEDKALMMNP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2B2830)
#define EJEDKALMMNP_CNBENBKMJHN_OFFSET UNITYSDK_OFFSET(0x1E2B26B0)
#define EJEDKALMMNP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2B2490)
#define EJEDKALMMNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B2480)
#define EJEDKALMMNP_EEPJDBKPKFD_OFFSET UNITYSDK_OFFSET(0x1E2B28B0)
#define EJEDKALMMNP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2B28F0)
#define EJEDKALMMNP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2B28C0)
#define EJEDKALMMNP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2B2890)
#define EJEDKALMMNP_FOFJFFGAJLM_OFFSET UNITYSDK_OFFSET(0x1E2B2790)
#define EJEDKALMMNP_GELDOFPOAJE_OFFSET UNITYSDK_OFFSET(0x1E2B2870)
#define EJEDKALMMNP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2B2C80)
#define EJEDKALMMNP_HOKDNFBHJCE_OFFSET UNITYSDK_OFFSET(0x1E2B28A0)
#define EJEDKALMMNP_JDKLKBFPDGG_OFFSET UNITYSDK_OFFSET(0x1E2B27B0)
#define EJEDKALMMNP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2B2440)
#define EJEDKALMMNP_KLMIMKLIGKD_OFFSET UNITYSDK_OFFSET(0x1E2B2810)
#define EJEDKALMMNP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2B39C0)
#define EJEDKALMMNP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2B3530)
#define EJEDKALMMNP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2B2880)
#define EJEDKALMMNP_OEOLLINMHND_OFFSET UNITYSDK_OFFSET(0x1E2B2860)
#define EJEDKALMMNP_OJPNBMLEJOJ_OFFSET UNITYSDK_OFFSET(0x1E2B2730)
#define EJEDKALMMNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2B2470)
#define EJEDKALMMNP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2B2ED0)
#define EJEDKALMMNP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2B2F30)

inline static constexpr unsigned int EJEDKALMMNP_TypeDefinitionIndex = 32487;

	class EJEDKALMMNP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Object* IJCOFPEJPOL; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::EJEDKALMMNP_LPHDAIMKFNN FAAPAGIBMOF; // 0x24
		::JMEOHDKGMHK BIADFCJHOGN; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EJEDKALMMNP")->GetStaticField(0x4B120);
		}

		// static const ::System::Object OPLCEPOKLEI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HFFKPGDPMCC; // 0x0
		// static const ::System::Object MJMCHLFHDCB; // 0x0
		// static const ::System::Object NBLILNPGBOA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEDKALMMNP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EJEDKALMMNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJEDKALMMNP*))((::PBYTE)hIl2Cpp + EJEDKALMMNP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJEDKALMMNP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EJEDKALMMNP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEDKALMMNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EJEDKALMMNP* Clone()
		{
			return ((::EJEDKALMMNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEDKALMMNP_CLONE_OFFSET))(this);
		}

		::JMEOHDKGMHK OEOLLINMHND()
		{
			return ((::JMEOHDKGMHK(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEDKALMMNP_OEOLLINMHND_OFFSET))(this);
		}

		::System::Void GELDOFPOAJE(::JMEOHDKGMHK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMEOHDKGMHK))((::PBYTE)hIl2Cpp + EJEDKALMMNP_GELDOFPOAJE_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEDKALMMNP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJEDKALMMNP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::OJLACOONJNG* CNBENBKMJHN()
		{
			return ((::OJLACOONJNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEDKALMMNP_CNBENBKMJHN_OFFSET))(this);
		}

		::System::Void BIPFGPMHCKD(::OJLACOONJNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJLACOONJNG*))((::PBYTE)hIl2Cpp + EJEDKALMMNP_BIPFGPMHCKD_OFFSET))(this, a1);
		}

		::OCGAELCDMOE* OJPNBMLEJOJ()
		{
			return ((::OCGAELCDMOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEDKALMMNP_OJPNBMLEJOJ_OFFSET))(this);
		}

		::System::Void FOFJFFGAJLM(::OCGAELCDMOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCGAELCDMOE*))((::PBYTE)hIl2Cpp + EJEDKALMMNP_FOFJFFGAJLM_OFFSET))(this, a1);
		}

		::GNBBDMBNNDJ* JDKLKBFPDGG()
		{
			return ((::GNBBDMBNNDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEDKALMMNP_JDKLKBFPDGG_OFFSET))(this);
		}

		::System::Void KLMIMKLIGKD(::GNBBDMBNNDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNBBDMBNNDJ*))((::PBYTE)hIl2Cpp + EJEDKALMMNP_KLMIMKLIGKD_OFFSET))(this, a1);
		}

		::EJEDKALMMNP_LPHDAIMKFNN HOKDNFBHJCE()
		{
			return ((::EJEDKALMMNP_LPHDAIMKFNN(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEDKALMMNP_HOKDNFBHJCE_OFFSET))(this);
		}

		::System::Void EEPJDBKPKFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEDKALMMNP_EEPJDBKPKFD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJEDKALMMNP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EJEDKALMMNP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EJEDKALMMNP*))((::PBYTE)hIl2Cpp + EJEDKALMMNP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEDKALMMNP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEDKALMMNP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EJEDKALMMNP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEDKALMMNP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EJEDKALMMNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJEDKALMMNP*))((::PBYTE)hIl2Cpp + EJEDKALMMNP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EJEDKALMMNP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
