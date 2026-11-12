#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvEntityStopLookAt; }
namespace RPG::GameCore { class TaskContext; }

#define IPDBKHKLGKN_CTOR_OFFSET UNITYSDK_OFFSET(0xB852C80)
#define IPDBKHKLGKN_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB852E80)
#define IPDBKHKLGKN_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB852E90)
#define IPDBKHKLGKN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB852CB0)

inline static constexpr unsigned int IPDBKHKLGKN_TypeDefinitionIndex = 53476;

	class IPDBKHKLGKN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEntityStopLookAt* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEntityStopLookAt*))((::PBYTE)hIl2Cpp + IPDBKHKLGKN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPDBKHKLGKN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPDBKHKLGKN_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPDBKHKLGKN_ONSKIP_OFFSET))(this);
		}

	};
