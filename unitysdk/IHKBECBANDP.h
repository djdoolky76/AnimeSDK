#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client::Prop { class PuzzleBoardBase; }
namespace RPG::GameCore { class PropPuzzleCustomEventSender; }
namespace RPG::GameCore { class TaskContext; }

#define IHKBECBANDP_BDGDGKGCKLE_OFFSET UNITYSDK_OFFSET(0x16422DB0)
#define IHKBECBANDP_CTOR_OFFSET UNITYSDK_OFFSET(0x16422A40)
#define IHKBECBANDP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16423420)
#define IHKBECBANDP_HOIAPCBOGNK_OFFSET UNITYSDK_OFFSET(0x16422B70)
#define IHKBECBANDP_IOBHDPGLEAF_OFFSET UNITYSDK_OFFSET(0x16422E70)
#define IHKBECBANDP_MADJOPHFOIL_OFFSET UNITYSDK_OFFSET(0x16422F30)
#define IHKBECBANDP_NFBHBHHOOGM_OFFSET UNITYSDK_OFFSET(0x16422A50)
#define IHKBECBANDP_OEFGOCJOODD_OFFSET UNITYSDK_OFFSET(0x16422FF0)
#define IHKBECBANDP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16423190)
#define IHKBECBANDP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x164233D0)
#define IHKBECBANDP_OODCIAOCJBD_OFFSET UNITYSDK_OFFSET(0x16422C90)
#define IHKBECBANDP_PELFMFLKKGL_OFFSET UNITYSDK_OFFSET(0x164230D0)
#define IHKBECBANDP_TICK_OFFSET UNITYSDK_OFFSET(0x16423460)

	class IHKBECBANDP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PropPuzzleCustomEventSender* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::RPG::Client::Prop::PuzzleBoardBase* PNMFAOJNNIC; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropPuzzleCustomEventSender* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropPuzzleCustomEventSender*))((::PBYTE)hIl2Cpp + IHKBECBANDP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void NFBHBHHOOGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKBECBANDP_NFBHBHHOOGM_OFFSET))(this);
		}

		::System::Void HOIAPCBOGNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKBECBANDP_HOIAPCBOGNK_OFFSET))(this);
		}

		::System::Void OODCIAOCJBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKBECBANDP_OODCIAOCJBD_OFFSET))(this);
		}

		::System::Void BDGDGKGCKLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKBECBANDP_BDGDGKGCKLE_OFFSET))(this);
		}

		::System::Void IOBHDPGLEAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKBECBANDP_IOBHDPGLEAF_OFFSET))(this);
		}

		::System::Void MADJOPHFOIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKBECBANDP_MADJOPHFOIL_OFFSET))(this);
		}

		::System::Void OEFGOCJOODD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IHKBECBANDP_OEFGOCJOODD_OFFSET))(this, a1);
		}

		::System::Void PELFMFLKKGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKBECBANDP_PELFMFLKKGL_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKBECBANDP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKBECBANDP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKBECBANDP_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IHKBECBANDP_TICK_OFFSET))(this, a1);
		}

	};
