#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GDEKGOOCHHP;
class KFELGAIGHAP;
class NBBBBGDEFLP_KEEHKEKMOHI;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SetComponentAssetLoadStateWithAnimState; }
namespace RPG::GameCore { class TaskContext; }

#define NBBBBGDEFLP_CTOR_OFFSET UNITYSDK_OFFSET(0xC340EB0)
#define NBBBBGDEFLP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC340FF0)
#define NBBBBGDEFLP_GCODBPBKONJ_OFFSET UNITYSDK_OFFSET(0xC341950)
#define NBBBBGDEFLP_LHOOAPLGJFO_OFFSET UNITYSDK_OFFSET(0xC341730)
#define NBBBBGDEFLP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC3412B0)
#define NBBBBGDEFLP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC3411D0)
#define NBBBBGDEFLP_TICK_OFFSET UNITYSDK_OFFSET(0xC3422C0)

inline static constexpr unsigned int NBBBBGDEFLP_TypeDefinitionIndex = 56561;

	class NBBBBGDEFLP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::GDEKGOOCHHP* AHFMFKILHLP; // 0x20
		::KFELGAIGHAP* JPIPPJOPJIL; // 0x28
		::KFELGAIGHAP* BBLAHCCDCDH; // 0x30
		::RPG::GameCore::SetComponentAssetLoadStateWithAnimState* OFKGLJOAMLD; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetComponentAssetLoadStateWithAnimState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetComponentAssetLoadStateWithAnimState*))((::PBYTE)hIl2Cpp + NBBBBGDEFLP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBBBGDEFLP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBBBGDEFLP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBBBGDEFLP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBBBBGDEFLP_TICK_OFFSET))(this, a1);
		}

		::NBBBBGDEFLP_KEEHKEKMOHI* LHOOAPLGJFO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::NBBBBGDEFLP_KEEHKEKMOHI*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NBBBBGDEFLP_LHOOAPLGJFO_OFFSET))(this, a1);
		}

		::System::Void GCODBPBKONJ(::NBBBBGDEFLP_KEEHKEKMOHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBBBBGDEFLP_KEEHKEKMOHI*))((::PBYTE)hIl2Cpp + NBBBBGDEFLP_GCODBPBKONJ_OFFSET))(this, a1);
		}

	};
