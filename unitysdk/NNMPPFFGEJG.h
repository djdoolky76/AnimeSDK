#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GridFightHideTraitEffect; }
namespace RPG::GameCore { class TaskContext; }

#define NNMPPFFGEJG_CTOR_OFFSET UNITYSDK_OFFSET(0x17A0F530)
#define NNMPPFFGEJG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A0F560)

inline static constexpr unsigned int NNMPPFFGEJG_TypeDefinitionIndex = 59382;

	class NNMPPFFGEJG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightHideTraitEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightHideTraitEffect*))((::PBYTE)hIl2Cpp + NNMPPFFGEJG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNMPPFFGEJG_ONTASKBEGIN_OFFSET))(this);
		}

	};
