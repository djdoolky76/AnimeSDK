#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class GELIALJDFBL;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerParamModifierCustomEvent; }

#define BJAFABPDMKK_CTOR_OFFSET UNITYSDK_OFFSET(0xB7912E0)
#define BJAFABPDMKK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB791440)

inline static constexpr unsigned int BJAFABPDMKK_TypeDefinitionIndex = 55761;

	class BJAFABPDMKK
	{
	public:
		::GELIALJDFBL* LLHKOFLJFCH; // 0x28
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerParamModifierCustomEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerParamModifierCustomEvent*))((::PBYTE)hIl2Cpp + BJAFABPDMKK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJAFABPDMKK_ONTASKBEGIN_OFFSET))(this);
		}

	};
