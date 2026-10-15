#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEMKNPIFMBI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class GELIALJDFBL;
class OONGDLIDJJJ;
namespace RPG::GameCore { class CheckPredicateAxis; }
namespace RPG::GameCore { class TaskContext; }

#define GFCOGEMCFFD_CTOR_OFFSET UNITYSDK_OFFSET(0x159DED90)
#define GFCOGEMCFFD_FBKGBOAJPHF_OFFSET UNITYSDK_OFFSET(0x159DEDA0)
#define GFCOGEMCFFD_MNAKIEOGPDK_OFFSET UNITYSDK_OFFSET(0x159DEFC0)

inline static constexpr unsigned int GFCOGEMCFFD_TypeDefinitionIndex = 54368;

	class GFCOGEMCFFD : public ::BEMKNPIFMBI
	{
	public:
		::GELIALJDFBL* LLHKOFLJFCH; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::CheckPredicateAxis* IGHAHBNLIJA; // 0x28
		::System::Void _ctor(::RPG::GameCore::CheckPredicateAxis* a1, ::OONGDLIDJJJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckPredicateAxis*, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + GFCOGEMCFFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void FBKGBOAJPHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCOGEMCFFD_FBKGBOAJPHF_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MNAKIEOGPDK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCOGEMCFFD_MNAKIEOGPDK_OFFSET))(this);
		}

	};
