#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NOJEJFMMCEG.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
class ABFALGOPMPL;
class FPNHGPEICOG;

#define DHGEHJGMCLB_CTOR_OFFSET UNITYSDK_OFFSET(0xEBD1740)
#define DHGEHJGMCLB_ILOHHJDPDBE_OFFSET UNITYSDK_OFFSET(0xEBCF3C0)
#define DHGEHJGMCLB_KKAGPMHGKPL_OFFSET UNITYSDK_OFFSET(0xEBD06F0)

inline static constexpr unsigned int DHGEHJGMCLB_TypeDefinitionIndex = 53690;

	class DHGEHJGMCLB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGEHJGMCLB_CTOR_OFFSET))(this);
		}

		::System::Boolean ILOHHJDPDBE(::FPNHGPEICOG* a1, ::FPNHGPEICOG* a2, ::NOJEJFMMCEG a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPNHGPEICOG*, ::FPNHGPEICOG*, ::NOJEJFMMCEG))((::PBYTE)hIl2Cpp + DHGEHJGMCLB_ILOHHJDPDBE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void KKAGPMHGKPL(::RPG::GameCore::FixVec2 a1, ::RPG::GameCore::FixVec2 a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixVec2 a5, ::RPG::GameCore::FixVec2 a6, ::ABFALGOPMPL* a7, ::System::Boolean a8, ::RPG::GameCore::FixVec2 a9, ::RPG::GameCore::FixPoint a10)
		{
			return ((::System::Void(*)(::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixVec2, ::ABFALGOPMPL*, ::System::Boolean, ::RPG::GameCore::FixVec2, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DHGEHJGMCLB_KKAGPMHGKPL_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

	};
