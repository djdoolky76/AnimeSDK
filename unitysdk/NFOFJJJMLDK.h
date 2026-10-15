#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceTargetLockStatus.h"
#include "unitysdk/System/Object.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
class PFMAAAJFLOA;

#define NFOFJJJMLDK_BGECAFPJMDA_1_OFFSET UNITYSDK_OFFSET(0x1C794000)
#define NFOFJJJMLDK_BGECAFPJMDA_OFFSET UNITYSDK_OFFSET(0x1C793F40)
#define NFOFJJJMLDK_FLKOAFFOIKJ_OFFSET UNITYSDK_OFFSET(0x1C794080)
#define NFOFJJJMLDK_HCKHNPKFLNB_OFFSET UNITYSDK_OFFSET(0x1C793E90)

inline static constexpr unsigned int NFOFJJJMLDK_TypeDefinitionIndex = 37238;

	class NFOFJJJMLDK : public ::System::Object
	{
	public:
		static ::System::Void HCKHNPKFLNB(::PBGNKMMDBGD* a1, ::IFBFJDCECML* a2, ::System::UInt32 a3, ::RPG::GameCore::CakeRaceTargetLockStatus a4)
		{
			return ((::System::Void(*)(::PBGNKMMDBGD*, ::IFBFJDCECML*, ::System::UInt32, ::RPG::GameCore::CakeRaceTargetLockStatus))((::PBYTE)hIl2Cpp + NFOFJJJMLDK_HCKHNPKFLNB_OFFSET))(a1, a2, a3, a4);
		}

		static ::PFMAAAJFLOA* BGECAFPJMDA(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::CakeRaceTargetLockStatus a3)
		{
			return ((::PFMAAAJFLOA*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::CakeRaceTargetLockStatus))((::PBYTE)hIl2Cpp + NFOFJJJMLDK_BGECAFPJMDA_OFFSET))(a1, a2, a3);
		}

		static ::PFMAAAJFLOA* BGECAFPJMDA_1(::IFBFJDCECML* a1, ::System::UInt32 a2, ::RPG::GameCore::CakeRaceTargetLockStatus a3)
		{
			return ((::PFMAAAJFLOA*(*)(::IFBFJDCECML*, ::System::UInt32, ::RPG::GameCore::CakeRaceTargetLockStatus))((::PBYTE)hIl2Cpp + NFOFJJJMLDK_BGECAFPJMDA_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean FLKOAFFOIKJ(::IFBFJDCECML* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::IFBFJDCECML*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NFOFJJJMLDK_FLKOAFFOIKJ_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
