#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/System/Guid.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class RogueTournCollectionShowUI; }
namespace RPG::GameCore { class TaskContext; }

#define HBGPFIKHPJC_AFPMOJKPEIC_OFFSET UNITYSDK_OFFSET(0x15BF7530)
#define HBGPFIKHPJC_AGHLPMFIJFJ_OFFSET UNITYSDK_OFFSET(0x15BF7400)
#define HBGPFIKHPJC_CTOR_OFFSET UNITYSDK_OFFSET(0x15BF6A60)
#define HBGPFIKHPJC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BF6B50)
#define HBGPFIKHPJC_DLDBCCINCEM_OFFSET UNITYSDK_OFFSET(0x15BF7490)
#define HBGPFIKHPJC_GGGKNHKPGHP_OFFSET UNITYSDK_OFFSET(0x15BF7080)
#define HBGPFIKHPJC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15BF6CC0)
#define HBGPFIKHPJC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15BF7130)
#define HBGPFIKHPJC_TICK_OFFSET UNITYSDK_OFFSET(0x15BF7220)

inline static constexpr unsigned int HBGPFIKHPJC_TypeDefinitionIndex = 58476;

	class HBGPFIKHPJC : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* KMPDMNNFFNE; // 0x18
		::KFELGAIGHAP* KEIFHFDOEDC; // 0x20
		::RPG::GameCore::RogueTournCollectionShowUI* IGHAHBNLIJA; // 0x28
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
		::System::Guid ELHKHAFNIDC; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueTournCollectionShowUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueTournCollectionShowUI*))((::PBYTE)hIl2Cpp + HBGPFIKHPJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBGPFIKHPJC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBGPFIKHPJC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBGPFIKHPJC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HBGPFIKHPJC_TICK_OFFSET))(this, a1);
		}

		::System::Void AFPMOJKPEIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBGPFIKHPJC_AFPMOJKPEIC_OFFSET))(this);
		}

		::System::Void GGGKNHKPGHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBGPFIKHPJC_GGGKNHKPGHP_OFFSET))(this);
		}

		::System::Void AGHLPMFIJFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBGPFIKHPJC_AGHLPMFIJFJ_OFFSET))(this);
		}

		::System::Void DLDBCCINCEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBGPFIKHPJC_DLDBCCINCEM_OFFSET))(this);
		}

	};
