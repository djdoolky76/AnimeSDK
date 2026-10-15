#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEMKNPIFMBI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OONGDLIDJJJ;
namespace RPG::GameCore { class CheckHPPercentAxis; }

#define FFLALKIGDFP_CTOR_OFFSET UNITYSDK_OFFSET(0x15739110)
#define FFLALKIGDFP_ENFLDOAMMMC_OFFSET UNITYSDK_OFFSET(0x15739190)
#define FFLALKIGDFP_MNAKIEOGPDK_OFFSET UNITYSDK_OFFSET(0x15739120)

inline static constexpr unsigned int FFLALKIGDFP_TypeDefinitionIndex = 54367;

	class FFLALKIGDFP : public ::BEMKNPIFMBI
	{
	public:
		::RPG::GameCore::CheckHPPercentAxis* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::CheckHPPercentAxis* a1, ::OONGDLIDJJJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckHPPercentAxis*, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + FFLALKIGDFP_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint MNAKIEOGPDK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLALKIGDFP_MNAKIEOGPDK_OFFSET))(this);
		}

		::System::Boolean ENFLDOAMMMC(::OONGDLIDJJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + FFLALKIGDFP_ENFLDOAMMMC_OFFSET))(this, a1);
		}

	};
