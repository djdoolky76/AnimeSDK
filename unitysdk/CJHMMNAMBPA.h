#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class FormationMoveAddStream; }
namespace RPG::GameCore { class TaskContext; }

#define CJHMMNAMBPA_CTOR_OFFSET UNITYSDK_OFFSET(0xD20B210)
#define CJHMMNAMBPA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD20B240)

inline static constexpr unsigned int CJHMMNAMBPA_TypeDefinitionIndex = 58129;

	class CJHMMNAMBPA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FormationMoveAddStream* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FormationMoveAddStream*))((::PBYTE)hIl2Cpp + CJHMMNAMBPA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHMMNAMBPA_ONTASKBEGIN_OFFSET))(this);
		}

	};
