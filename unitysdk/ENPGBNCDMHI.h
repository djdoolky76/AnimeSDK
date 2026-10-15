#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvMonsterForbidSelect; }
namespace RPG::GameCore { class TaskContext; }

#define ENPGBNCDMHI_CTOR_OFFSET UNITYSDK_OFFSET(0x155AB580)
#define ENPGBNCDMHI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155AB5B0)

inline static constexpr unsigned int ENPGBNCDMHI_TypeDefinitionIndex = 57880;

	class ENPGBNCDMHI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvMonsterForbidSelect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvMonsterForbidSelect*))((::PBYTE)hIl2Cpp + ENPGBNCDMHI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENPGBNCDMHI_ONTASKBEGIN_OFFSET))(this);
		}

	};
