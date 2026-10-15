#pragma once
#include "unitysdk/unitysdk.h"
class EFCNFMHNBHE;
class IFBFJDCECML;
class LMIOHCMPBJB;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceCheckAndSaveTargetsPredicateConfig; }

#define EFCNFMHNBHE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C5CDE00)
#define EFCNFMHNBHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5CDE90)
#define EFCNFMHNBHE_ISMATCHIMPL_OFFSET UNITYSDK_OFFSET(0x1C5CDEB0)

inline static constexpr unsigned int EFCNFMHNBHE_TypeDefinitionIndex = 37418;

	class EFCNFMHNBHE
	{
	public:
		::LMIOHCMPBJB* LMDHPABCOAB; // 0x20
		::System::Void _ctor(::RPG::GameCore::CakeRaceCheckAndSaveTargetsPredicateConfig* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceCheckAndSaveTargetsPredicateConfig*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + EFCNFMHNBHE_CTOR_OFFSET))(this, a1, a2);
		}

		static ::EFCNFMHNBHE* BPLPBPMEODA(::RPG::GameCore::CakeRaceCheckAndSaveTargetsPredicateConfig* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::EFCNFMHNBHE*(*)(::RPG::GameCore::CakeRaceCheckAndSaveTargetsPredicateConfig*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + EFCNFMHNBHE_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Boolean IsMatchImpl(::IFBFJDCECML* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + EFCNFMHNBHE_ISMATCHIMPL_OFFSET))(this, a1);
		}

	};
