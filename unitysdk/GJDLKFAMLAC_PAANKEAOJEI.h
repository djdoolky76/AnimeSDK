#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJDLKFAMLAC_NDGLMJJNNDO.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GJDLKFAMLAC_PAANKEAOJEI_BKDAAFNCPOP.h"

class GJDLKFAMLAC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GJDLKFAMLAC_PAANKEAOJEI_BFHANBNFECH_OFFSET UNITYSDK_OFFSET(0x18148220)
#define GJDLKFAMLAC_PAANKEAOJEI_BKNALEPGKAN_OFFSET UNITYSDK_OFFSET(0x18147E20)
#define GJDLKFAMLAC_PAANKEAOJEI_CPAIDIDACIO_OFFSET UNITYSDK_OFFSET(0x18147DC0)
#define GJDLKFAMLAC_PAANKEAOJEI_FENCOLLJAMO_OFFSET UNITYSDK_OFFSET(0x181468A0)
#define GJDLKFAMLAC_PAANKEAOJEI_HNFAPPAHNKF_OFFSET UNITYSDK_OFFSET(0x181478F0)
#define GJDLKFAMLAC_PAANKEAOJEI_JIKCDDDHBOF_OFFSET UNITYSDK_OFFSET(0x18147750)
#define GJDLKFAMLAC_PAANKEAOJEI_NJHAMLMBFLH_OFFSET UNITYSDK_OFFSET(0x18147C40)
#define GJDLKFAMLAC_PAANKEAOJEI__CTOR_OFFSET UNITYSDK_OFFSET(0x18146670)

inline static constexpr unsigned int GJDLKFAMLAC_PAANKEAOJEI_TypeDefinitionIndex = 39917;

class GJDLKFAMLAC_PAANKEAOJEI : public ::System::Object
{
public:
	// static const ::System::Char DJDMIGGPKHH = 0x0; // 0x0
	::System::Collections::Generic::List_1<::System::String*>* KGIGIPEPEAG; // 0x10
	::System::Collections::Generic::List_1<::System::UInt16>* BMKIIEOEMBB; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Char, ::System::UInt16>* KLJMAHOPHPP; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Char, ::System::Collections::Generic::List_1<::System::Int32>*>* LEMOPGNPOJG; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* PKBNCCJBAEF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDLKFAMLAC_PAANKEAOJEI__CTOR_OFFSET))(this);
	}

	::GJDLKFAMLAC* FENCOLLJAMO()
	{
		return ((::GJDLKFAMLAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDLKFAMLAC_PAANKEAOJEI_FENCOLLJAMO_OFFSET))(this);
	}

	::System::Void HNFAPPAHNKF(::System::UInt16 OMMEALOOOOD, ::System::UInt16 AKICNLOFKOM, ::System::String* HOAGNLFKPLB, ::System::Char MJLIAKKPHOP, ::System::String* PAEGCBJFHDD)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::String*, ::System::Char, ::System::String*))((::PBYTE)hIl2Cpp + GJDLKFAMLAC_PAANKEAOJEI_HNFAPPAHNKF_OFFSET))(this, OMMEALOOOOD, AKICNLOFKOM, HOAGNLFKPLB, MJLIAKKPHOP, PAEGCBJFHDD);
	}

	static ::System::Void JIKCDDDHBOF(::GJDLKFAMLAC_NDGLMJJNNDO DKOFFFNEFJC, ::System::Int32 IKCNNGLAJKF, ::System::Int32 NHPAAGCDMHO, ::System::Collections::Generic::List_1<::System::String*>* FBKMNJIEFAB, ::GJDLKFAMLAC_PAANKEAOJEI_BKDAAFNCPOP& HBMGHPEPBNC)
	{
		return ((::System::Void(*)(::GJDLKFAMLAC_NDGLMJJNNDO, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*, ::GJDLKFAMLAC_PAANKEAOJEI_BKDAAFNCPOP&))((::PBYTE)hIl2Cpp + GJDLKFAMLAC_PAANKEAOJEI_JIKCDDDHBOF_OFFSET))(DKOFFFNEFJC, IKCNNGLAJKF, NHPAAGCDMHO, FBKMNJIEFAB, HBMGHPEPBNC);
	}

	::System::Boolean CPAIDIDACIO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDLKFAMLAC_PAANKEAOJEI_CPAIDIDACIO_OFFSET))(this);
	}

	::System::Void BKNALEPGKAN(::System::Char JAAEMFLPJDG, ::System::UInt16 OMMEALOOOOD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Char, ::System::UInt16))((::PBYTE)hIl2Cpp + GJDLKFAMLAC_PAANKEAOJEI_BKNALEPGKAN_OFFSET))(this, JAAEMFLPJDG, OMMEALOOOOD);
	}

	::System::Collections::Generic::List_1<::System::Int32>* NJHAMLMBFLH(::System::Char OJICKHPDBNH)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + GJDLKFAMLAC_PAANKEAOJEI_NJHAMLMBFLH_OFFSET))(this, OJICKHPDBNH);
	}

	::System::Void BFHANBNFECH(::System::String* LCEGOBBEECM, ::System::UInt16 OMMEALOOOOD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + GJDLKFAMLAC_PAANKEAOJEI_BFHANBNFECH_OFFSET))(this, LCEGOBBEECM, OMMEALOOOOD);
	}
};
