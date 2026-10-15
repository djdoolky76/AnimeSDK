#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/RPG/GameCore/DamageTextType.h"
namespace RPG::GameCore { class SetDamageTextStyle; }
namespace RPG::GameCore { class TaskContext; }

#define KEBDODHAIEK_CTOR_OFFSET UNITYSDK_OFFSET(0xB370CD0)
#define KEBDODHAIEK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB370CE0)
#define KEBDODHAIEK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB370D20)
#define KEBDODHAIEK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB370E80)
#define KEBDODHAIEK_PBLLPHDMGGO_OFFSET UNITYSDK_OFFSET(0xB370E30)
#define KEBDODHAIEK_TICK_OFFSET UNITYSDK_OFFSET(0xB370ED0)

inline static constexpr unsigned int KEBDODHAIEK_TypeDefinitionIndex = 56402;

	class KEBDODHAIEK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetDamageTextStyle* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDamageTextStyle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDamageTextStyle*))((::PBYTE)hIl2Cpp + KEBDODHAIEK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBDODHAIEK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBDODHAIEK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBDODHAIEK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KEBDODHAIEK_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::UIFloatingTextType PBLLPHDMGGO(::RPG::GameCore::DamageTextType a1)
		{
			return ((::RPG::Client::UIFloatingTextType(*)(::PVOID, ::RPG::GameCore::DamageTextType))((::PBYTE)hIl2Cpp + KEBDODHAIEK_PBLLPHDMGGO_OFFSET))(this, a1);
		}

	};
