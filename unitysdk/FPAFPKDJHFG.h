#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EDHPIGIAOLE;
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ListenStepOnTarget; }
namespace RPG::GameCore { class TaskContext; }

#define FPAFPKDJHFG_BDCKHPKNKBB_OFFSET UNITYSDK_OFFSET(0x1590B040)
#define FPAFPKDJHFG_CTOR_OFFSET UNITYSDK_OFFSET(0x15909F30)
#define FPAFPKDJHFG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1590A120)
#define FPAFPKDJHFG_FILCNPDBNPN_OFFSET UNITYSDK_OFFSET(0x1590AC50)
#define FPAFPKDJHFG_FMILHDJBGDA_OFFSET UNITYSDK_OFFSET(0x1590A6E0)
#define FPAFPKDJHFG_JIDAHEFEKLP_OFFSET UNITYSDK_OFFSET(0x1590AF40)
#define FPAFPKDJHFG_MJEMGDNOIIC_OFFSET UNITYSDK_OFFSET(0x1590A3B0)
#define FPAFPKDJHFG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1590A510)
#define FPAFPKDJHFG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1590AA50)
#define FPAFPKDJHFG_TICK_OFFSET UNITYSDK_OFFSET(0x1590ABF0)

	class FPAFPKDJHFG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ListenStepOnTarget* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KFELGAIGHAP* ECKCNGMMKBL; // 0x28
		::EDHPIGIAOLE* NEFDDGCPFFG; // 0x30
		::KFELGAIGHAP* DINAOFBDLPI; // 0x38
		::KFELGAIGHAP* CDCGFIMJAKF; // 0x40
		::KFELGAIGHAP* EGEJPBBNOKH; // 0x48
		::System::Boolean OMMDCOPCDKE; // 0x50
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ListenStepOnTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ListenStepOnTarget*))((::PBYTE)hIl2Cpp + FPAFPKDJHFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAFPKDJHFG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAFPKDJHFG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAFPKDJHFG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FPAFPKDJHFG_TICK_OFFSET))(this, a1);
		}

		::System::Void FILCNPDBNPN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FPAFPKDJHFG_FILCNPDBNPN_OFFSET))(this, a1);
		}

		::System::Void BDCKHPKNKBB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FPAFPKDJHFG_BDCKHPKNKBB_OFFSET))(this, a1);
		}

		::System::Void MJEMGDNOIIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAFPKDJHFG_MJEMGDNOIIC_OFFSET))(this);
		}

		::System::Void FMILHDJBGDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAFPKDJHFG_FMILHDJBGDA_OFFSET))(this);
		}

		::System::Boolean JIDAHEFEKLP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FPAFPKDJHFG_JIDAHEFEKLP_OFFSET))(this, a1);
		}

	};
