#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::GameCore { class GameEntity; }

#define IIMFGAHFLDH_CTOR_OFFSET UNITYSDK_OFFSET(0x193F0EA0)
#define IIMFGAHFLDH_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x193F0E00)
#define IIMFGAHFLDH_ONRETURN_OFFSET UNITYSDK_OFFSET(0x193F0E50)
#define IIMFGAHFLDH__ONBIND_OFFSET UNITYSDK_OFFSET(0x193F0D30)
#define IIMFGAHFLDH__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x193F0CD0)

inline static constexpr unsigned int IIMFGAHFLDH_TypeDefinitionIndex = 73529;

	class IIMFGAHFLDH : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMFGAHFLDH_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + IIMFGAHFLDH__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMFGAHFLDH__ONBIND_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IIMFGAHFLDH_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMFGAHFLDH_ONRETURN_OFFSET))(this);
		}

	};
