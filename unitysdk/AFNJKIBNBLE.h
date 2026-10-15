#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByFateLevel; }
namespace RPG::GameCore { class TaskContext; }

#define AFNJKIBNBLE_CTOR_OFFSET UNITYSDK_OFFSET(0xCF1A4D0)
#define AFNJKIBNBLE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF1A5B0)

inline static constexpr unsigned int AFNJKIBNBLE_TypeDefinitionIndex = 55434;

	class AFNJKIBNBLE
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByFateLevel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByFateLevel*))((::PBYTE)hIl2Cpp + AFNJKIBNBLE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNJKIBNBLE_ONTASKBEGIN_OFFSET))(this);
		}

	};
