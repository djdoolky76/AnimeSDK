#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class PlanetFesClearSpinAnim; }
namespace RPG::GameCore { class TaskContext; }

#define PBEBJBGKOBD_CTOR_OFFSET UNITYSDK_OFFSET(0xBFE3080)
#define PBEBJBGKOBD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFE30B0)

inline static constexpr unsigned int PBEBJBGKOBD_TypeDefinitionIndex = 58259;

	class PBEBJBGKOBD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::PlanetFesClearSpinAnim* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::PlanetFesClearSpinAnim*))((::PBYTE)hIl2Cpp + PBEBJBGKOBD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBEBJBGKOBD_ONTASKBEGIN_OFFSET))(this);
		}

	};
