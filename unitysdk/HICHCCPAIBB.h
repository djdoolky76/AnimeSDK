#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
namespace RPG::Client { class BattleSilverWolf999CustomUIData; }

#define HICHCCPAIBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1902CA90)
#define HICHCCPAIBB__ONBIND_OFFSET UNITYSDK_OFFSET(0x1902C9E0)
#define HICHCCPAIBB__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1902C980)

inline static constexpr unsigned int HICHCCPAIBB_TypeDefinitionIndex = 73269;

	class HICHCCPAIBB : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::BattleSilverWolf999CustomUIData* JNEALEEMIIF; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HICHCCPAIBB_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + HICHCCPAIBB__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HICHCCPAIBB__ONBIND_OFFSET))(this);
		}

	};
