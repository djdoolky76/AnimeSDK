#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class BNBOAMEBAOE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayPenaconyEndmostShowPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class IDisposable; }

#define EPPNIODJJCL_BKPGNCBNMGP_OFFSET UNITYSDK_OFFSET(0x155DB710)
#define EPPNIODJJCL_CTOR_OFFSET UNITYSDK_OFFSET(0x155DAAD0)
#define EPPNIODJJCL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155DB430)
#define EPPNIODJJCL_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x155DAE20)
#define EPPNIODJJCL_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x155DB110)
#define EPPNIODJJCL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155DAAE0)
#define EPPNIODJJCL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x155DB570)
#define EPPNIODJJCL_TICK_OFFSET UNITYSDK_OFFSET(0x155DB6B0)

inline static constexpr unsigned int EPPNIODJJCL_TypeDefinitionIndex = 53069;

	class EPPNIODJJCL : public ::GELIALJDFBL
	{
	public:
		::BNBOAMEBAOE* JLMAKNFAEBH; // 0x18
		::System::IDisposable* IDDCLDHMEEM; // 0x20
		::RPG::GameCore::GameEntity* GGPBBEOEPCB; // 0x28
		::RPG::GameCore::PlayPenaconyEndmostShowPage* OFKGLJOAMLD; // 0x30
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayPenaconyEndmostShowPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayPenaconyEndmostShowPage*))((::PBYTE)hIl2Cpp + EPPNIODJJCL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPNIODJJCL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPNIODJJCL_FFKBFPKEPEN_OFFSET))(this);
		}

		::System::Void NMPLHCJKEOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPNIODJJCL_NMPLHCJKEOI_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPNIODJJCL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPNIODJJCL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPPNIODJJCL_TICK_OFFSET))(this, a1);
		}

		::System::Void BKPGNCBNMGP(::BNBOAMEBAOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBOAMEBAOE*))((::PBYTE)hIl2Cpp + EPPNIODJJCL_BKPGNCBNMGP_OFFSET))(this, a1);
		}

	};
