#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetHitOverrideLayerWeight; }
namespace RPG::GameCore { class TaskContext; }

#define KOPNIJBLJOB_CTOR_OFFSET UNITYSDK_OFFSET(0xB59D7E0)
#define KOPNIJBLJOB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB59D810)

inline static constexpr unsigned int KOPNIJBLJOB_TypeDefinitionIndex = 55519;

	class KOPNIJBLJOB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetHitOverrideLayerWeight* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetHitOverrideLayerWeight*))((::PBYTE)hIl2Cpp + KOPNIJBLJOB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPNIJBLJOB_ONTASKBEGIN_OFFSET))(this);
		}

	};
