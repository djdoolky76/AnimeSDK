#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class SetViewModeServantFollow; }
namespace RPG::GameCore { class TaskContext; }

#define LLKGPHDPPGK_CTOR_OFFSET UNITYSDK_OFFSET(0xB773F00)
#define LLKGPHDPPGK_LDHFGDGFNEI_OFFSET UNITYSDK_OFFSET(0xB7741D0)
#define LLKGPHDPPGK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB773F30)

inline static constexpr unsigned int LLKGPHDPPGK_TypeDefinitionIndex = 56437;

	class LLKGPHDPPGK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetViewModeServantFollow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetViewModeServantFollow*))((::PBYTE)hIl2Cpp + LLKGPHDPPGK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKGPHDPPGK_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::MVector3 LDHFGDGFNEI(::UnityEngine::Vector3 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LLKGPHDPPGK_LDHFGDGFNEI_OFFSET))(this, a1);
		}

	};
