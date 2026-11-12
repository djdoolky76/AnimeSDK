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

#define HOHMPGFCMKP_ADMGPJLEBEF_OFFSET UNITYSDK_OFFSET(0x16D5ADE0)
#define HOHMPGFCMKP_CTOR_OFFSET UNITYSDK_OFFSET(0x16D5A790)
#define HOHMPGFCMKP_DFKILIMLBEN_OFFSET UNITYSDK_OFFSET(0x16D5BAE0)
#define HOHMPGFCMKP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16D5B860)
#define HOHMPGFCMKP_ENPMICEBFJE_OFFSET UNITYSDK_OFFSET(0x16D5B4B0)
#define HOHMPGFCMKP_GOCHKBNMOJM_OFFSET UNITYSDK_OFFSET(0x16D5AB00)
#define HOHMPGFCMKP_INPHBLMECCB_OFFSET UNITYSDK_OFFSET(0x16D5BE40)
#define HOHMPGFCMKP_JNAJJJCEHDL_OFFSET UNITYSDK_OFFSET(0x16D5BD50)
#define HOHMPGFCMKP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16D5B8C0)
#define HOHMPGFCMKP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16D5BCB0)
#define HOHMPGFCMKP_TICK_OFFSET UNITYSDK_OFFSET(0x16D5BB60)

inline static constexpr unsigned int HOHMPGFCMKP_TypeDefinitionIndex = 55073;

	class HOHMPGFCMKP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::ProjectileData*>* LJILIDHFNFJ; // 0x20
		::Il2CppArray<::NAOKFLDEDBJ*>* MMGFBHHLLOA; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* NBMCBEDFFBH; // 0x30
		::EBBBJDPGDFG* EEGKNKIBLHB; // 0x38
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x40
		::RPG::GameCore::GameEntity* KKFCJOJLGCO; // 0x48
		::BIDMHFBILIO* JKJPFJALGKO; // 0x50
		::System::Collections::Generic::List_1<::KFELGAIGHAP*>* NINIMEBKNLO; // 0x58
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
