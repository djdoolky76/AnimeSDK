#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class RoadRashGameAbility_UltimateV2; }
namespace RPG::GameCore { class TaskContext; }

#define EDLDHNBFNPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1332A520)
#define EDLDHNBFNPH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1332A550)

inline static constexpr unsigned int EDLDHNBFNPH_TypeDefinitionIndex = 58411;

	class EDLDHNBFNPH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameAbility_UltimateV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameAbility_UltimateV2*))((::PBYTE)hIl2Cpp + EDLDHNBFNPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDLDHNBFNPH_ONTASKBEGIN_OFFSET))(this);
		}

	};
