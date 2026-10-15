#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetNavMeshState; }
namespace RPG::GameCore { class TaskContext; }

#define JNJOKNCLFIA_AJDPNFPFOGK_OFFSET UNITYSDK_OFFSET(0xB282820)
#define JNJOKNCLFIA_CTOR_OFFSET UNITYSDK_OFFSET(0xB282790)
#define JNJOKNCLFIA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB2827C0)

inline static constexpr unsigned int JNJOKNCLFIA_TypeDefinitionIndex = 53249;

	class JNJOKNCLFIA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetNavMeshState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetNavMeshState*))((::PBYTE)hIl2Cpp + JNJOKNCLFIA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJOKNCLFIA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean AJDPNFPFOGK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJOKNCLFIA_AJDPNFPFOGK_OFFSET))(this);
		}

	};
