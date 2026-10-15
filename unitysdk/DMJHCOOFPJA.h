#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ResetLocalPlayerLookAtTargets; }
namespace RPG::GameCore { class TaskContext; }

#define DMJHCOOFPJA_CTOR_OFFSET UNITYSDK_OFFSET(0xFEBCB90)
#define DMJHCOOFPJA_EDNJAFJEPJF_OFFSET UNITYSDK_OFFSET(0xFEBCC60)
#define DMJHCOOFPJA_NDBOOAEKNMC_OFFSET UNITYSDK_OFFSET(0xFEBCCC0)
#define DMJHCOOFPJA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFEBCBC0)

inline static constexpr unsigned int DMJHCOOFPJA_TypeDefinitionIndex = 58396;

	class DMJHCOOFPJA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetLocalPlayerLookAtTargets* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetLocalPlayerLookAtTargets*))((::PBYTE)hIl2Cpp + DMJHCOOFPJA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMJHCOOFPJA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void EDNJAFJEPJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMJHCOOFPJA_EDNJAFJEPJF_OFFSET))(this);
		}

		::System::Boolean NDBOOAEKNMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMJHCOOFPJA_NDBOOAEKNMC_OFFSET))(this);
		}

	};
