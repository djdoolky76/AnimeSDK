#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class RoadRashGameAbility_Charging; }
namespace RPG::GameCore { class TaskContext; }

#define CPPOFHANPJD_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD6B50)
#define CPPOFHANPJD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCD6B80)

inline static constexpr unsigned int CPPOFHANPJD_TypeDefinitionIndex = 58403;

	class CPPOFHANPJD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameAbility_Charging* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameAbility_Charging*))((::PBYTE)hIl2Cpp + CPPOFHANPJD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPOFHANPJD_ONTASKBEGIN_OFFSET))(this);
		}

	};
