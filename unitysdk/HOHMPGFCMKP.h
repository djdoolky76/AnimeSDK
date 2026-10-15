#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BIDMHFBILIO;
class EBBBJDPGDFG;
class KFELGAIGHAP;
class NAOKFLDEDBJ;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOHMPGFCMKP_ADMGPJLEBEF_OFFSET UNITYSDK_OFFSET(0x15DB7E50)
#define HOHMPGFCMKP_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB7800)
#define HOHMPGFCMKP_DFKILIMLBEN_OFFSET UNITYSDK_OFFSET(0x15DB8B50)
#define HOHMPGFCMKP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DB88D0)
#define HOHMPGFCMKP_ENPMICEBFJE_OFFSET UNITYSDK_OFFSET(0x15DB8520)
#define HOHMPGFCMKP_GOCHKBNMOJM_OFFSET UNITYSDK_OFFSET(0x15DB7B70)
#define HOHMPGFCMKP_INPHBLMECCB_OFFSET UNITYSDK_OFFSET(0x15DB8EB0)
#define HOHMPGFCMKP_JNAJJJCEHDL_OFFSET UNITYSDK_OFFSET(0x15DB8DC0)
#define HOHMPGFCMKP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DB8930)
#define HOHMPGFCMKP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15DB8D20)
#define HOHMPGFCMKP_TICK_OFFSET UNITYSDK_OFFSET(0x15DB8BD0)

	class HOHMPGFCMKP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x18
		::Il2CppArray<::NAOKFLDEDBJ*>* MMGFBHHLLOA; // 0x20
		::EBBBJDPGDFG* EEGKNKIBLHB; // 0x28
		::System::Collections::Generic::List_1<::KFELGAIGHAP*>* NINIMEBKNLO; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::ProjectileData*>* LJILIDHFNFJ; // 0x38
		::RPG::GameCore::GameEntity* KKFCJOJLGCO; // 0x40
		::BIDMHFBILIO* JKJPFJALGKO; // 0x48
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x50
		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* NBMCBEDFFBH; // 0x58
		::RPG::GameCore::FixPoint KBDPMBDJIOF; // 0x60
		::System::Int32 KNLANGKFPLG; // 0x68
		::System::Int32 BCMHNNPGGBD; // 0x6C
		::System::Int32 BLMPGAGBHHK; // 0x70
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BIDMHFBILIO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BIDMHFBILIO*))((::PBYTE)hIl2Cpp + HOHMPGFCMKP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void GOCHKBNMOJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHMPGFCMKP_GOCHKBNMOJM_OFFSET))(this);
		}

		::System::Void ADMGPJLEBEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHMPGFCMKP_ADMGPJLEBEF_OFFSET))(this);
		}

		::System::Void ENPMICEBFJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHMPGFCMKP_ENPMICEBFJE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHMPGFCMKP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHMPGFCMKP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HOHMPGFCMKP_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHMPGFCMKP_ONTASKRESET_OFFSET))(this);
		}

		::System::Boolean JNAJJJCEHDL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHMPGFCMKP_JNAJJJCEHDL_OFFSET))(this);
		}

		::System::Void DFKILIMLBEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHMPGFCMKP_DFKILIMLBEN_OFFSET))(this);
		}

		::System::Void INPHBLMECCB(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + HOHMPGFCMKP_INPHBLMECCB_OFFSET))(this, a1);
		}

	};
