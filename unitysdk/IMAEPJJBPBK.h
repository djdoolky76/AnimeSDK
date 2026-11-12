#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class NAOKFLDEDBJ;
class OHHPOGMFPBF;
namespace RPG::GameCore { class FireMultiProjectilesBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IMAEPJJBPBK_ADMGPJLEBEF_OFFSET UNITYSDK_OFFSET(0xB7FBC80)
#define IMAEPJJBPBK_CTOR_OFFSET UNITYSDK_OFFSET(0xB7FB830)
#define IMAEPJJBPBK_DFKILIMLBEN_OFFSET UNITYSDK_OFFSET(0xB7FC6D0)
#define IMAEPJJBPBK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7FC110)
#define IMAEPJJBPBK_ENPMICEBFJE_OFFSET UNITYSDK_OFFSET(0xB7FBEE0)
#define IMAEPJJBPBK_GOCHKBNMOJM_OFFSET UNITYSDK_OFFSET(0xB7FB9A0)
#define IMAEPJJBPBK_JNAJJJCEHDL_OFFSET UNITYSDK_OFFSET(0xB7FC940)
#define IMAEPJJBPBK_KJBNCNFLBDJ_OFFSET UNITYSDK_OFFSET(0xB7FC380)
#define IMAEPJJBPBK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7FC170)
#define IMAEPJJBPBK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7FC8A0)
#define IMAEPJJBPBK_TICK_OFFSET UNITYSDK_OFFSET(0xB7FC750)

inline static constexpr unsigned int IMAEPJJBPBK_TypeDefinitionIndex = 56241;

	class IMAEPJJBPBK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Collections::Generic::List_1<::System::Single>* NBMCBEDFFBH; // 0x20
		::RPG::GameCore::FireMultiProjectilesBase* JKJPFJALGKO; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::ProjectileData*>* LJILIDHFNFJ; // 0x30
		::Il2CppArray<::NAOKFLDEDBJ*>* MMGFBHHLLOA; // 0x38
		::OHHPOGMFPBF* OJBNGPLELMF; // 0x40
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x48
		::RPG::GameCore::GameEntity* KKFCJOJLGCO; // 0x50
		::System::Int32 KNLANGKFPLG; // 0x58
		::System::Single LCBECIBFJCC; // 0x5C
		::System::Int32 BLMPGAGBHHK; // 0x60
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

		::System::Void KJBNCNFLBDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMAEPJJBPBK_KJBNCNFLBDJ_OFFSET))(this);
		}

	};
