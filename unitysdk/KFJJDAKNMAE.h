#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class EPFHDFJPECH;
class ICLHCMBJDAN;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityPixAirExcelValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityValueGetterAttributeConfig; }
namespace RPG::GameCore { class LittleGameAbilityValueGetterCalculateConfig; }
namespace RPG::GameCore { class LittleGameAbilityValueGetterCompareConfig; }
namespace RPG::GameCore { class LittleGameAbilityValueGetterSumAttributeConfig; }

#define KFJJDAKNMAE_CMOFLOLOMPB_OFFSET UNITYSDK_OFFSET(0xB3B33F0)
#define KFJJDAKNMAE_CTOR_OFFSET UNITYSDK_OFFSET(0xB3B36A0)
#define KFJJDAKNMAE_DOBANCMPCPD_OFFSET UNITYSDK_OFFSET(0xB3B3340)
#define KFJJDAKNMAE_ELIKIPNJFOE_OFFSET UNITYSDK_OFFSET(0xB3B3180)
#define KFJJDAKNMAE_LNFAHNBPJIM_OFFSET UNITYSDK_OFFSET(0xB3B2EB0)
#define KFJJDAKNMAE_LPFFLBDBEOO_OFFSET UNITYSDK_OFFSET(0xB3B2E20)
#define KFJJDAKNMAE_MMEOMCINFOG_OFFSET UNITYSDK_OFFSET(0xB3B3060)
#define KFJJDAKNMAE_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0xB3B2B10)

inline static constexpr unsigned int KFJJDAKNMAE_TypeDefinitionIndex = 79404;

	class KFJJDAKNMAE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFJJDAKNMAE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MNGGAOFNGIP(::ICLHCMBJDAN* a1, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::ICLHCMBJDAN*, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + KFJJDAKNMAE_MNGGAOFNGIP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint LPFFLBDBEOO(::ICLHCMBJDAN* a1, ::RPG::GameCore::LittleGameAbilityPixAirExcelValueGetterConfig* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::ICLHCMBJDAN*, ::RPG::GameCore::LittleGameAbilityPixAirExcelValueGetterConfig*))((::PBYTE)hIl2Cpp + KFJJDAKNMAE_LPFFLBDBEOO_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint LNFAHNBPJIM(::ICLHCMBJDAN* a1, ::RPG::GameCore::LittleGameAbilityValueGetterCalculateConfig* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::ICLHCMBJDAN*, ::RPG::GameCore::LittleGameAbilityValueGetterCalculateConfig*))((::PBYTE)hIl2Cpp + KFJJDAKNMAE_LNFAHNBPJIM_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint MMEOMCINFOG(::ICLHCMBJDAN* a1, ::RPG::GameCore::LittleGameAbilityValueGetterAttributeConfig* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::ICLHCMBJDAN*, ::RPG::GameCore::LittleGameAbilityValueGetterAttributeConfig*))((::PBYTE)hIl2Cpp + KFJJDAKNMAE_MMEOMCINFOG_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint ELIKIPNJFOE(::ICLHCMBJDAN* a1, ::RPG::GameCore::LittleGameAbilityValueGetterSumAttributeConfig* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::ICLHCMBJDAN*, ::RPG::GameCore::LittleGameAbilityValueGetterSumAttributeConfig*))((::PBYTE)hIl2Cpp + KFJJDAKNMAE_ELIKIPNJFOE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint DOBANCMPCPD(::ICLHCMBJDAN* a1, ::RPG::GameCore::LittleGameAbilityValueGetterCompareConfig* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::ICLHCMBJDAN*, ::RPG::GameCore::LittleGameAbilityValueGetterCompareConfig*))((::PBYTE)hIl2Cpp + KFJJDAKNMAE_DOBANCMPCPD_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint CMOFLOLOMPB(::EPFHDFJPECH* a1, ::RPG::GameCore::LittleGameAbilityAttributeType a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::EPFHDFJPECH*, ::RPG::GameCore::LittleGameAbilityAttributeType))((::PBYTE)hIl2Cpp + KFJJDAKNMAE_CMOFLOLOMPB_OFFSET))(this, a1, a2);
		}

	};
