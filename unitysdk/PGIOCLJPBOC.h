#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/System/Guid.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class RogueTournExhibitionShowUI; }
namespace RPG::GameCore { class TaskContext; }

#define PGIOCLJPBOC_AFPMOJKPEIC_OFFSET UNITYSDK_OFFSET(0xC221990)
#define PGIOCLJPBOC_AGHLPMFIJFJ_OFFSET UNITYSDK_OFFSET(0xC221860)
#define PGIOCLJPBOC_CTOR_OFFSET UNITYSDK_OFFSET(0xC220EA0)
#define PGIOCLJPBOC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC220F90)
#define PGIOCLJPBOC_DLDBCCINCEM_OFFSET UNITYSDK_OFFSET(0xC2218F0)
#define PGIOCLJPBOC_GGGKNHKPGHP_OFFSET UNITYSDK_OFFSET(0xC2214E0)
#define PGIOCLJPBOC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC221110)
#define PGIOCLJPBOC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC221590)
#define PGIOCLJPBOC_TICK_OFFSET UNITYSDK_OFFSET(0xC221680)

inline static constexpr unsigned int PGIOCLJPBOC_TypeDefinitionIndex = 58480;

	class PGIOCLJPBOC : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* KMPDMNNFFNE; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::KFELGAIGHAP* KEIFHFDOEDC; // 0x28
		::RPG::GameCore::RogueTournExhibitionShowUI* IGHAHBNLIJA; // 0x30
		::System::Guid ELHKHAFNIDC; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueTournExhibitionShowUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueTournExhibitionShowUI*))((::PBYTE)hIl2Cpp + PGIOCLJPBOC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIOCLJPBOC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIOCLJPBOC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIOCLJPBOC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PGIOCLJPBOC_TICK_OFFSET))(this, a1);
		}

		::System::Void AFPMOJKPEIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIOCLJPBOC_AFPMOJKPEIC_OFFSET))(this);
		}

		::System::Void GGGKNHKPGHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIOCLJPBOC_GGGKNHKPGHP_OFFSET))(this);
		}

		::System::Void AGHLPMFIJFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIOCLJPBOC_AGHLPMFIJFJ_OFFSET))(this);
		}

		::System::Void DLDBCCINCEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIOCLJPBOC_DLDBCCINCEM_OFFSET))(this);
		}

	};
