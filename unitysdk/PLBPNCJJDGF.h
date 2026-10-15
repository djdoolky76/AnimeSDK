#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ChangeHeroBasicType; }
namespace RPG::GameCore { class TaskContext; }

#define PLBPNCJJDGF_CTOR_OFFSET UNITYSDK_OFFSET(0xC2ECB70)
#define PLBPNCJJDGF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2ECBA0)

inline static constexpr unsigned int PLBPNCJJDGF_TypeDefinitionIndex = 52640;

	class PLBPNCJJDGF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeHeroBasicType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeHeroBasicType*))((::PBYTE)hIl2Cpp + PLBPNCJJDGF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBPNCJJDGF_ONTASKBEGIN_OFFSET))(this);
		}

	};
