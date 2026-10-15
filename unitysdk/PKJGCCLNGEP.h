#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvMarkAsTauntProxy; }
namespace RPG::GameCore { class TaskContext; }

#define PKJGCCLNGEP_CTOR_OFFSET UNITYSDK_OFFSET(0xC2B9D70)
#define PKJGCCLNGEP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2B9DA0)

inline static constexpr unsigned int PKJGCCLNGEP_TypeDefinitionIndex = 52397;

	class PKJGCCLNGEP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvMarkAsTauntProxy* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvMarkAsTauntProxy*))((::PBYTE)hIl2Cpp + PKJGCCLNGEP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJGCCLNGEP_ONTASKBEGIN_OFFSET))(this);
		}

	};
