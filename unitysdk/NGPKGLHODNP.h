#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByWorldLevel; }
namespace RPG::GameCore { class TaskContext; }

#define NGPKGLHODNP_CTOR_OFFSET UNITYSDK_OFFSET(0xBBB3540)
#define NGPKGLHODNP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBB3620)

inline static constexpr unsigned int NGPKGLHODNP_TypeDefinitionIndex = 55481;

	class NGPKGLHODNP
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByWorldLevel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByWorldLevel*))((::PBYTE)hIl2Cpp + NGPKGLHODNP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPKGLHODNP_ONTASKBEGIN_OFFSET))(this);
		}

	};
