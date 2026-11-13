#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TakenMazePuzzleChallenge; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define EAGKLEJDFEP_AIAJKKCBBPO_OFFSET UNITYSDK_OFFSET(0x181CE7C0)
#define EAGKLEJDFEP_CLKNPOMHPCF_OFFSET UNITYSDK_OFFSET(0x181CE740)
#define EAGKLEJDFEP_CTOR_OFFSET UNITYSDK_OFFSET(0x181CE090)
#define EAGKLEJDFEP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x181CE1B0)
#define EAGKLEJDFEP_KJMCDIBFDLG_OFFSET UNITYSDK_OFFSET(0x181CE8F0)
#define EAGKLEJDFEP_LKNKJNDHHNN_OFFSET UNITYSDK_OFFSET(0x181CE870)
#define EAGKLEJDFEP_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0x181CE940)
#define EAGKLEJDFEP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x181CE310)
#define EAGKLEJDFEP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x181CE690)
#define EAGKLEJDFEP_TICK_OFFSET UNITYSDK_OFFSET(0x181CE6E0)

inline static constexpr unsigned int EAGKLEJDFEP_TypeDefinitionIndex = 54490;

	class EAGKLEJDFEP : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* HBLGHOCOHAL; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KFELGAIGHAP* LNMOCNDILJN; // 0x28
		::KFELGAIGHAP* FGFFJBEKHBO; // 0x30
		::RPG::GameCore::PropComponent* GBLNDEKFNNJ; // 0x38
		::KFELGAIGHAP* BHHFAIMDPCJ; // 0x40
		::KFELGAIGHAP* BKCCFPHPIHM; // 0x48
		::RPG::GameCore::TakenMazePuzzleChallenge* OFKGLJOAMLD; // 0x50
		::System::UInt32 DNCPEJNPCBC; // 0x58
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TakenMazePuzzleChallenge* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TakenMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + EAGKLEJDFEP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGKLEJDFEP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGKLEJDFEP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGKLEJDFEP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EAGKLEJDFEP_TICK_OFFSET))(this, a1);
		}

		::System::Void CLKNPOMHPCF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EAGKLEJDFEP_CLKNPOMHPCF_OFFSET))(this, a1);
		}

		::System::Void LKNKJNDHHNN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EAGKLEJDFEP_LKNKJNDHHNN_OFFSET))(this, a1);
		}

		::System::Void AIAJKKCBBPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGKLEJDFEP_AIAJKKCBBPO_OFFSET))(this);
		}

		::System::Void KJMCDIBFDLG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EAGKLEJDFEP_KJMCDIBFDLG_OFFSET))(this, a1);
		}

		::System::Void NEKGALPLEOH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EAGKLEJDFEP_NEKGALPLEOH_OFFSET))(this, a1);
		}

	};
