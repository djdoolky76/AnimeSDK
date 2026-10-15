#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetMunicipalEnable; }
namespace RPG::GameCore { class TaskContext; }

#define CAPPELIGNBM_CTOR_OFFSET UNITYSDK_OFFSET(0xC496290)
#define CAPPELIGNBM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC4962C0)

inline static constexpr unsigned int CAPPELIGNBM_TypeDefinitionIndex = 58559;

	class CAPPELIGNBM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMunicipalEnable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMunicipalEnable*))((::PBYTE)hIl2Cpp + CAPPELIGNBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPPELIGNBM_ONTASKBEGIN_OFFSET))(this);
		}

	};
