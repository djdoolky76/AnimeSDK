#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetFloorCustomBoolV2; }
namespace RPG::GameCore { class TaskContext; }

#define DNCMCPBNBLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1193B8E0)
#define DNCMCPBNBLL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1193B910)

inline static constexpr unsigned int DNCMCPBNBLL_TypeDefinitionIndex = 53231;

	class DNCMCPBNBLL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFloorCustomBoolV2* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFloorCustomBoolV2*))((::PBYTE)hIl2Cpp + DNCMCPBNBLL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNCMCPBNBLL_ONTASKBEGIN_OFFSET))(this);
		}

	};
