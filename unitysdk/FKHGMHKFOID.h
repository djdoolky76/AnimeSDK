#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtMoveStopReason.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ST_RtMain_MoveToTarget; }
namespace RPG::GameCore { class TaskContext; }

#define FKHGMHKFOID_AIFBNMPDJOO_OFFSET UNITYSDK_OFFSET(0x157F5E50)
#define FKHGMHKFOID_CTOR_OFFSET UNITYSDK_OFFSET(0x157F5590)
#define FKHGMHKFOID_DNBPIGCANPC_OFFSET UNITYSDK_OFFSET(0x157F5C50)
#define FKHGMHKFOID_GPLCPLHKDNM_OFFSET UNITYSDK_OFFSET(0x157F5FC0)
#define FKHGMHKFOID_LDHHPDEAEFB_OFFSET UNITYSDK_OFFSET(0x157F6070)
#define FKHGMHKFOID_LGIPJIPLMGO_OFFSET UNITYSDK_OFFSET(0x157F5EB0)
#define FKHGMHKFOID_NILKOAOEOHL_OFFSET UNITYSDK_OFFSET(0x157F5EC0)
#define FKHGMHKFOID_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157F55C0)
#define FKHGMHKFOID_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x157F5A40)
#define FKHGMHKFOID_TICK_OFFSET UNITYSDK_OFFSET(0x157F5810)

	class FKHGMHKFOID
	{
	public:
		::RPG::GameCore::GameEntity* ADOMGCLAPCG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_RtMain_MoveToTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_RtMain_MoveToTarget*))((::PBYTE)hIl2Cpp + FKHGMHKFOID_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHGMHKFOID_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKHGMHKFOID_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHGMHKFOID_ONTASKRESET_OFFSET))(this);
		}

		::System::Boolean DNBPIGCANPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHGMHKFOID_DNBPIGCANPC_OFFSET))(this);
		}

		::System::Void AIFBNMPDJOO(::RPG::GameCore::RtMoveStopReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtMoveStopReason))((::PBYTE)hIl2Cpp + FKHGMHKFOID_AIFBNMPDJOO_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* LGIPJIPLMGO()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHGMHKFOID_LGIPJIPLMGO_OFFSET))(this);
		}

		::RPG::GameCore::IVec2 NILKOAOEOHL()
		{
			return ((::RPG::GameCore::IVec2(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHGMHKFOID_NILKOAOEOHL_OFFSET))(this);
		}

		::RPG::GameCore::FixVec3 GPLCPLHKDNM()
		{
			return ((::RPG::GameCore::FixVec3(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHGMHKFOID_GPLCPLHKDNM_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint LDHHPDEAEFB()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHGMHKFOID_LDHHPDEAEFB_OFFSET))(this);
		}

	};
