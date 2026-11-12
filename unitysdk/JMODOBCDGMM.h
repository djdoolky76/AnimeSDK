#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OFAKEFLLHNP;

#define JMODOBCDGMM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA9E390)
#define JMODOBCDGMM_GHAKDDNKLGH_OFFSET UNITYSDK_OFFSET(0xBA9E130)
#define JMODOBCDGMM_HJEMHMNCBIN_OFFSET UNITYSDK_OFFSET(0xBA9E320)
#define JMODOBCDGMM_PFIEMGLKFPC_OFFSET UNITYSDK_OFFSET(0xBA9E1F0)

inline static constexpr unsigned int JMODOBCDGMM_TypeDefinitionIndex = 66774;

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
