#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
class NAOKFLDEDBJ;
namespace RPG::GameCore { class FireMultiProjectilesBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IMAEPJJBPBK_ADMGPJLEBEF_OFFSET UNITYSDK_OFFSET(0x164BF090)
#define IMAEPJJBPBK_CTOR_OFFSET UNITYSDK_OFFSET(0x164BEAA0)
#define IMAEPJJBPBK_DFKILIMLBEN_OFFSET UNITYSDK_OFFSET(0x164BFA90)
#define IMAEPJJBPBK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164BF820)
#define IMAEPJJBPBK_ENPMICEBFJE_OFFSET UNITYSDK_OFFSET(0x164BF470)
#define IMAEPJJBPBK_GOCHKBNMOJM_OFFSET UNITYSDK_OFFSET(0x164BEDB0)
#define IMAEPJJBPBK_INPHBLMECCB_OFFSET UNITYSDK_OFFSET(0x164BFDF0)
#define IMAEPJJBPBK_JNAJJJCEHDL_OFFSET UNITYSDK_OFFSET(0x164BFD00)
#define IMAEPJJBPBK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164BF880)
#define IMAEPJJBPBK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x164BFC60)
#define IMAEPJJBPBK_TICK_OFFSET UNITYSDK_OFFSET(0x164BFB10)

inline static constexpr unsigned int IMAEPJJBPBK_TypeDefinitionIndex = 55065;

	class IMAEPJJBPBK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Collections::Generic::List_1<::System::Single>* NBMCBEDFFBH; // 0x20
		::RPG::GameCore::GameEntity* KKFCJOJLGCO; // 0x28
		::Il2CppArray<::NAOKFLDEDBJ*>* MMGFBHHLLOA; // 0x30
		::System::Collections::Generic::List_1<::KFELGAIGHAP*>* NINIMEBKNLO; // 0x38
		::System::Collections::Generic::List_1<::RPG::GameCore::ProjectileData*>* LJILIDHFNFJ; // 0x40
		::RPG::GameCore::FireMultiProjectilesBase* JKJPFJALGKO; // 0x48
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x50
		::System::Int32 KNLANGKFPLG; // 0x58
		::System::Int32 BLMPGAGBHHK; // 0x5C
		::System::Int32 BCMHNNPGGBD; // 0x60
		::System::Single LCBECIBFJCC; // 0x64
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FireMultiProjectilesBase* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FireMultiProjectilesBase*))((::PBYTE)hIl2Cpp + IMAEPJJBPBK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void GOCHKBNMOJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAEPJJBPBK_GOCHKBNMOJM_OFFSET))(this);
		}

		::System::Void ADMGPJLEBEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAEPJJBPBK_ADMGPJLEBEF_OFFSET))(this);
		}

		::System::Void ENPMICEBFJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAEPJJBPBK_ENPMICEBFJE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAEPJJBPBK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAEPJJBPBK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IMAEPJJBPBK_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAEPJJBPBK_ONTASKRESET_OFFSET))(this);
		}

		::System::Boolean JNAJJJCEHDL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAEPJJBPBK_JNAJJJCEHDL_OFFSET))(this);
		}

		::System::Void DFKILIMLBEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAEPJJBPBK_DFKILIMLBEN_OFFSET))(this);
		}

		::System::Void INPHBLMECCB(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + IMAEPJJBPBK_INPHBLMECCB_OFFSET))(this, a1);
		}

	};
