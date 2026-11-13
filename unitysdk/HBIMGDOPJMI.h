#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class RtDamageConstConfig; }

#define HBIMGDOPJMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C170F10)
#define HBIMGDOPJMI_DOEOJKHPDOP_OFFSET UNITYSDK_OFFSET(0x1C171070)
#define HBIMGDOPJMI_GET_DAMAGECONST_OFFSET UNITYSDK_OFFSET(0x1C171160)
#define HBIMGDOPJMI_MFPBLPMLJGB_OFFSET UNITYSDK_OFFSET(0x1C171000)
#define HBIMGDOPJMI_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x1C170F60)
#define HBIMGDOPJMI_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x1C170FB0)
#define HBIMGDOPJMI_PPFIFCMFDLE_OFFSET UNITYSDK_OFFSET(0x1C1710F0)
#define HBIMGDOPJMI_SET_DAMAGECONST_OFFSET UNITYSDK_OFFSET(0x1C171170)

inline static constexpr unsigned int HBIMGDOPJMI_TypeDefinitionIndex = 55271;

	class HBIMGDOPJMI : public ::System::Object
	{
	public:
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x10
		::RPG::GameCore::RtDamageConstConfig* _DamageConst_k__BackingField; // 0x18
		::System::UInt64 ENJPLJGNMPL; // 0x20
		::System::UInt64 DPACLNJMILC; // 0x28
		::RPG::GameCore::FixPoint PDIDAFEHOND; // 0x30
		::RPG::GameCore::FixPoint ABINBKACLJK; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIMGDOPJMI_CTOR_OFFSET))(this);
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + HBIMGDOPJMI_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIMGDOPJMI_ONPLUGINUNINIT_OFFSET))(this);
		}

		::System::Void MFPBLPMLJGB(::RPG::GameCore::RtDamageConstConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtDamageConstConfig*))((::PBYTE)hIl2Cpp + HBIMGDOPJMI_MFPBLPMLJGB_OFFSET))(this, a1);
		}

		::System::Void DOEOJKHPDOP(::System::UInt64 a1, ::System::UInt64 a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HBIMGDOPJMI_DOEOJKHPDOP_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::FixPoint PPFIFCMFDLE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HBIMGDOPJMI_PPFIFCMFDLE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::RtDamageConstConfig* get_DamageConst()
		{
			return ((::RPG::GameCore::RtDamageConstConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBIMGDOPJMI_GET_DAMAGECONST_OFFSET))(this);
		}

		::System::Void set_DamageConst(::RPG::GameCore::RtDamageConstConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtDamageConstConfig*))((::PBYTE)hIl2Cpp + HBIMGDOPJMI_SET_DAMAGECONST_OFFSET))(this, a1);
		}

	};
