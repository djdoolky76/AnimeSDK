#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGDOJIBGKCP.h"
#include "unitysdk/System/Object.h"

class BLLLKPBKEPM;
class DNIEKELALEM;
class GIIFGADGIBA;
class JHLNCNJHGPO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DFJKMBAAHCM_EHKFNCANLKA_OFFSET UNITYSDK_OFFSET(0x149A2CC0)
#define DFJKMBAAHCM_OFOPCEHABHO_OFFSET UNITYSDK_OFFSET(0x149A2A90)
#define DFJKMBAAHCM_PGBJLELFDPN_OFFSET UNITYSDK_OFFSET(0x149A26B0)
#define DFJKMBAAHCM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x149A3220)
#define DFJKMBAAHCM__CTOR_OFFSET UNITYSDK_OFFSET(0x149A2600)

inline static constexpr unsigned int DFJKMBAAHCM_TypeDefinitionIndex = 52370;

class DFJKMBAAHCM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::DGDOJIBGKCP>* MCHJFJKEOKN; // 0x10
	::System::Collections::Generic::List_1<::GIIFGADGIBA*>* HPGJCCHBNMK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJKMBAAHCM__CTOR_OFFSET))(this);
	}

	::System::Void PGBJLELFDPN(::JHLNCNJHGPO* OGHFNBPMOOJ)
	{
		return ((::System::Void(*)(::PVOID, ::JHLNCNJHGPO*))((::PBYTE)hIl2Cpp + DFJKMBAAHCM_PGBJLELFDPN_OFFSET))(this, OGHFNBPMOOJ);
	}

	::System::Void OFOPCEHABHO(::BLLLKPBKEPM* HMDFJHJCGBE)
	{
		return ((::System::Void(*)(::PVOID, ::BLLLKPBKEPM*))((::PBYTE)hIl2Cpp + DFJKMBAAHCM_OFOPCEHABHO_OFFSET))(this, HMDFJHJCGBE);
	}

	::System::Void EHKFNCANLKA(::DNIEKELALEM* LCACDMJCGKA, ::JHLNCNJHGPO* OGHFNBPMOOJ)
	{
		return ((::System::Void(*)(::PVOID, ::DNIEKELALEM*, ::JHLNCNJHGPO*))((::PBYTE)hIl2Cpp + DFJKMBAAHCM_EHKFNCANLKA_OFFSET))(this, LCACDMJCGKA, OGHFNBPMOOJ);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFJKMBAAHCM_PHOADBJGFBE_OFFSET))(this);
	}
};
