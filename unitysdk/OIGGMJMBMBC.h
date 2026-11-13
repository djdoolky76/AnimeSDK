#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class PKILELCBFKH;
namespace RPG::GameCore { class AbilityCurrentSPChange; }
namespace RPG::GameCore { class AbilityMaxSPChange; }
namespace RPG::GameCore { class AvatarEnergyBarState; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }

#define OIGGMJMBMBC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1948B510)
#define OIGGMJMBMBC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1948B650)
#define OIGGMJMBMBC_BGLCJHDKMMD_OFFSET UNITYSDK_OFFSET(0x1948AF60)
#define OIGGMJMBMBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1948B770)
#define OIGGMJMBMBC_EAOGLDEIMJO_OFFSET UNITYSDK_OFFSET(0x1948B450)
#define OIGGMJMBMBC_IHJCDKFFJLF_OFFSET UNITYSDK_OFFSET(0x1948B390)
#define OIGGMJMBMBC_JBMAJEJPAMO_OFFSET UNITYSDK_OFFSET(0x1948B1B0)
#define OIGGMJMBMBC_MNLFPHAOAGP_OFFSET UNITYSDK_OFFSET(0x1948AC00)
#define OIGGMJMBMBC_NJJHNDPJJJG_OFFSET UNITYSDK_OFFSET(0x1948B100)
#define OIGGMJMBMBC_PMHNHAKGJPJ_OFFSET UNITYSDK_OFFSET(0x1948AD40)
#define OIGGMJMBMBC__ONBIND_OFFSET UNITYSDK_OFFSET(0x1948AAE0)
#define OIGGMJMBMBC__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1948B0A0)
#define OIGGMJMBMBC__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1948B160)

inline static constexpr unsigned int OIGGMJMBMBC_TypeDefinitionIndex = 74320;

	class OIGGMJMBMBC : public ::FMPCODLIOLG
	{
	public:
		::PKILELCBFKH* NHNHKBJJKPP; // 0x60
		::RPG::GameCore::AvatarEnergyBarState* CLANFJEMFCP; // 0x68
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGGMJMBMBC_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGGMJMBMBC__ONBIND_OFFSET))(this);
		}

		::System::Void MNLFPHAOAGP(::RPG::GameCore::AbilityCurrentSPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentSPChange*))((::PBYTE)hIl2Cpp + OIGGMJMBMBC_MNLFPHAOAGP_OFFSET))(this, a1);
		}

		::System::Void BGLCJHDKMMD(::RPG::GameCore::AbilityMaxSPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxSPChange*))((::PBYTE)hIl2Cpp + OIGGMJMBMBC_BGLCJHDKMMD_OFFSET))(this, a1);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + OIGGMJMBMBC__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void NJJHNDPJJJG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OIGGMJMBMBC_NJJHNDPJJJG_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGGMJMBMBC__SETUPVIEW_OFFSET))(this);
		}

		::System::Void PMHNHAKGJPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGGMJMBMBC_PMHNHAKGJPJ_OFFSET))(this);
		}

		::System::String* JBMAJEJPAMO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGGMJMBMBC_JBMAJEJPAMO_OFFSET))(this);
		}

		::System::Void IHJCDKFFJLF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIGGMJMBMBC_IHJCDKFFJLF_OFFSET))(this, a1);
		}

		::System::Void EAOGLDEIMJO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIGGMJMBMBC_EAOGLDEIMJO_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGGMJMBMBC_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGGMJMBMBC_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
