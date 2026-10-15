#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"
class AOLOCGDIAIO;
class EKFMIDBJDIA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DOPPLDOEKFA_AAHIODINBKG_OFFSET UNITYSDK_OFFSET(0x11FF7FD0)
#define DOPPLDOEKFA_BIHNFBEKBJJ_OFFSET UNITYSDK_OFFSET(0x11FF8400)
#define DOPPLDOEKFA_CTOR_OFFSET UNITYSDK_OFFSET(0x11FF8530)
#define DOPPLDOEKFA_GET_ACTIVEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x11FF8510)
#define DOPPLDOEKFA_LPNFCJMKNNL_OFFSET UNITYSDK_OFFSET(0x11FF8320)
#define DOPPLDOEKFA_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x11FF7E00)
#define DOPPLDOEKFA_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x11FF7EF0)
#define DOPPLDOEKFA_SET_ACTIVEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x11FF8520)

	class DOPPLDOEKFA : public ::System::Object
	{
	public:
		::AOLOCGDIAIO* _ActiveProcessor_k__BackingField; // 0x10
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::AOLOCGDIAIO*>* OMPCPGELAME; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPPLDOEKFA_CTOR_OFFSET))(this);
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + DOPPLDOEKFA_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPPLDOEKFA_ONPLUGINUNINIT_OFFSET))(this);
		}

		::System::Void AAHIODINBKG(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillType a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillType, ::System::Single))((::PBYTE)hIl2Cpp + DOPPLDOEKFA_AAHIODINBKG_OFFSET))(this, a1, a2, a3);
		}

		::AOLOCGDIAIO* LPNFCJMKNNL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::AOLOCGDIAIO*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DOPPLDOEKFA_LPNFCJMKNNL_OFFSET))(this, a1);
		}

		::System::Void BIHNFBEKBJJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DOPPLDOEKFA_BIHNFBEKBJJ_OFFSET))(this, a1);
		}

		::AOLOCGDIAIO* get_ActiveProcessor()
		{
			return ((::AOLOCGDIAIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPPLDOEKFA_GET_ACTIVEPROCESSOR_OFFSET))(this);
		}

		::System::Void set_ActiveProcessor(::AOLOCGDIAIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOLOCGDIAIO*))((::PBYTE)hIl2Cpp + DOPPLDOEKFA_SET_ACTIVEPROCESSOR_OFFSET))(this, a1);
		}

	};
