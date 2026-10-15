#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByBreakBaseDamage; }
namespace RPG::GameCore { class TaskContext; }

#define NFMOPPKFHKA_CTOR_OFFSET UNITYSDK_OFFSET(0xBB95970)
#define NFMOPPKFHKA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB95A50)

inline static constexpr unsigned int NFMOPPKFHKA_TypeDefinitionIndex = 55417;

	class NFMOPPKFHKA
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByBreakBaseDamage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByBreakBaseDamage*))((::PBYTE)hIl2Cpp + NFMOPPKFHKA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMOPPKFHKA_ONTASKBEGIN_OFFSET))(this);
		}

	};
