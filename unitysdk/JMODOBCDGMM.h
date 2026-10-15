#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OFAKEFLLHNP;

#define JMODOBCDGMM_CTOR_OFFSET UNITYSDK_OFFSET(0xB26D0D0)
#define JMODOBCDGMM_GHAKDDNKLGH_OFFSET UNITYSDK_OFFSET(0xB26CE70)
#define JMODOBCDGMM_HJEMHMNCBIN_OFFSET UNITYSDK_OFFSET(0xB26D060)
#define JMODOBCDGMM_PFIEMGLKFPC_OFFSET UNITYSDK_OFFSET(0xB26CF30)

inline static constexpr unsigned int JMODOBCDGMM_TypeDefinitionIndex = 65100;

	class JMODOBCDGMM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMODOBCDGMM_CTOR_OFFSET))(this);
		}

		static ::OFAKEFLLHNP* GHAKDDNKLGH(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::OFAKEFLLHNP*(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JMODOBCDGMM_GHAKDDNKLGH_OFFSET))(a1, a2);
		}

		static ::OFAKEFLLHNP* PFIEMGLKFPC(::RPG::GameCore::FixPoint a1)
		{
			return ((::OFAKEFLLHNP*(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JMODOBCDGMM_PFIEMGLKFPC_OFFSET))(a1);
		}

		static ::OFAKEFLLHNP* HJEMHMNCBIN(::RPG::GameCore::FixPoint a1)
		{
			return ((::OFAKEFLLHNP*(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JMODOBCDGMM_HJEMHMNCBIN_OFFSET))(a1);
		}

	};
