#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class BNBOAMEBAOE;
class EKFMIDBJDIA;
class GELIALJDFBL;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitCustomString; }

#define MPLFJICIMNH_BKPGNCBNMGP_OFFSET UNITYSDK_OFFSET(0x1B229BE0)
#define MPLFJICIMNH_CTOR_OFFSET UNITYSDK_OFFSET(0x1B229790)
#define MPLFJICIMNH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B229890)
#define MPLFJICIMNH_HCPNJDHBFHH_OFFSET UNITYSDK_OFFSET(0x1B2297B0)
#define MPLFJICIMNH_KIGKKADGFCC_OFFSET UNITYSDK_OFFSET(0x1B229C30)
#define MPLFJICIMNH_MGHBLMNCEMG_OFFSET UNITYSDK_OFFSET(0x1B229A30)
#define MPLFJICIMNH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B2299C0)
#define MPLFJICIMNH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B229B30)
#define MPLFJICIMNH_PAGELPBKAOE_OFFSET UNITYSDK_OFFSET(0x1B2298E0)
#define MPLFJICIMNH_TICK_OFFSET UNITYSDK_OFFSET(0x1B229B80)

inline static constexpr unsigned int MPLFJICIMNH_TypeDefinitionIndex = 60152;

	class MPLFJICIMNH : public ::GELIALJDFBL
	{
	public:
		::GELIALJDFBL* JLMAKNFAEBH; // 0x18
		::RPG::GameCore::WaitCustomString* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Boolean GGJECIOIBCJ; // 0x30
		::System::Boolean NCDPNHDBKKG; // 0x31
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitCustomString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitCustomString*))((::PBYTE)hIl2Cpp + MPLFJICIMNH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLFJICIMNH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLFJICIMNH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLFJICIMNH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MPLFJICIMNH_TICK_OFFSET))(this, a1);
		}

		::System::Void BKPGNCBNMGP(::BNBOAMEBAOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBOAMEBAOE*))((::PBYTE)hIl2Cpp + MPLFJICIMNH_BKPGNCBNMGP_OFFSET))(this, a1);
		}

		::System::Void HCPNJDHBFHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLFJICIMNH_HCPNJDHBFHH_OFFSET))(this);
		}

		::System::Void PAGELPBKAOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPLFJICIMNH_PAGELPBKAOE_OFFSET))(this);
		}

		::System::Void KIGKKADGFCC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + MPLFJICIMNH_KIGKKADGFCC_OFFSET))(this, a1);
		}

		::System::Void MGHBLMNCEMG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MPLFJICIMNH_MGHBLMNCEMG_OFFSET))(this, a1);
		}

	};
