#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByHitSplitRatio; }
namespace RPG::GameCore { class TaskContext; }

#define OJEJIIDCFMG_CTOR_OFFSET UNITYSDK_OFFSET(0xBEA7130)
#define OJEJIIDCFMG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEA7210)

inline static constexpr unsigned int OJEJIIDCFMG_TypeDefinitionIndex = 55449;

	class OJEJIIDCFMG
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByHitSplitRatio* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByHitSplitRatio*))((::PBYTE)hIl2Cpp + OJEJIIDCFMG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJEJIIDCFMG_ONTASKBEGIN_OFFSET))(this);
		}

	};
