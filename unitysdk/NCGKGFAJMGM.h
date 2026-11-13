#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
class KFELGAIGHAP;
class NAOKFLDEDBJ;
class OHHPOGMFPBF;
namespace RPG::GameCore { class AdventureFireProjectileBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define NCGKGFAJMGM_CTOR_OFFSET UNITYSDK_OFFSET(0x150F5750)
#define NCGKGFAJMGM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x150FB9F0)
#define NCGKGFAJMGM_EEKEIPKOEKN_OFFSET UNITYSDK_OFFSET(0x150FC2A0)
#define NCGKGFAJMGM_HLLKKGLEEHD_OFFSET UNITYSDK_OFFSET(0x150FC930)
#define NCGKGFAJMGM_IFOMKIPFGMP_OFFSET UNITYSDK_OFFSET(0x150FC810)
#define NCGKGFAJMGM_LMOKIPLMFJF_OFFSET UNITYSDK_OFFSET(0x150FC580)
#define NCGKGFAJMGM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x150FBB50)
#define NCGKGFAJMGM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x150FC480)
#define NCGKGFAJMGM_TICK_OFFSET UNITYSDK_OFFSET(0x150FC4D0)

inline static constexpr unsigned int NCGKGFAJMGM_TypeDefinitionIndex = 59135;

	class NCGKGFAJMGM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdventureFireProjectileBase* OFKGLJOAMLD; // 0x18
		::GELIALJDFBL* LLHKOFLJFCH; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::KFELGAIGHAP* BCGLDJBEBPK; // 0x30
		::KFELGAIGHAP* EGHHEMEKCGA; // 0x38
		::NAOKFLDEDBJ* BLDLELNJDML; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureFireProjectileBase* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureFireProjectileBase*))((::PBYTE)hIl2Cpp + NCGKGFAJMGM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGKGFAJMGM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGKGFAJMGM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void EEKEIPKOEKN(::RPG::GameCore::GameEntity* a1, ::OHHPOGMFPBF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::OHHPOGMFPBF*))((::PBYTE)hIl2Cpp + NCGKGFAJMGM_EEKEIPKOEKN_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGKGFAJMGM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NCGKGFAJMGM_TICK_OFFSET))(this, a1);
		}

		::System::Boolean LMOKIPLMFJF(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + NCGKGFAJMGM_LMOKIPLMFJF_OFFSET))(this, a1);
		}

		::System::Void IFOMKIPFGMP(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + NCGKGFAJMGM_IFOMKIPFGMP_OFFSET))(this, a1);
		}

		::System::Void HLLKKGLEEHD(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + NCGKGFAJMGM_HLLKKGLEEHD_OFFSET))(this, a1);
		}

	};
