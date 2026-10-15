#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG { template <typename T1, typename T2, typename T3, typename T4> class FuncBinder_4; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyActionDelay; }
namespace RPG::GameCore { class TaskContext; }

#define CKGKGBIKFLP_CTOR_OFFSET UNITYSDK_OFFSET(0xD75A430)
#define CKGKGBIKFLP_GEJNOLBPEBO_OFFSET UNITYSDK_OFFSET(0xD75A960)
#define CKGKGBIKFLP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD75A460)

inline static constexpr unsigned int CKGKGBIKFLP_TypeDefinitionIndex = 55186;

	class CKGKGBIKFLP
	{
	public:
		::RPG::FuncBinder_4<::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint>* ONFNEAPDKDG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyActionDelay* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyActionDelay*))((::PBYTE)hIl2Cpp + CKGKGBIKFLP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKGKGBIKFLP_ONTASKBEGIN_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint GEJNOLBPEBO(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CKGKGBIKFLP_GEJNOLBPEBO_OFFSET))(a1, a2, a3);
		}

	};
