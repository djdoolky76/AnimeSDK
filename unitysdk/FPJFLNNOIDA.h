#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/System/ValueTuple_4.h"
class BNBOAMEBAOE;
class GLHMMLODNHN;
namespace RPG::Client { class GridFightBattleGameContext; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::GameCore { class GridFightManager; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define FPJFLNNOIDA_AFGDJGIIPIF_OFFSET UNITYSDK_OFFSET(0x1684F230)
#define FPJFLNNOIDA_AFHLHHJFOID_OFFSET UNITYSDK_OFFSET(0x16850780)
#define FPJFLNNOIDA_BKPGNCBNMGP_OFFSET UNITYSDK_OFFSET(0x1684EC80)
#define FPJFLNNOIDA_CJHNDNNPILF_OFFSET UNITYSDK_OFFSET(0x1684EF20)
#define FPJFLNNOIDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1684EC70)
#define FPJFLNNOIDA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x168508D0)
#define FPJFLNNOIDA_OHCFACKFJBB_OFFSET UNITYSDK_OFFSET(0x1684F7E0)
#define FPJFLNNOIDA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1684ECD0)
#define FPJFLNNOIDA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16850820)
#define FPJFLNNOIDA_TICK_OFFSET UNITYSDK_OFFSET(0x16850870)
#define FPJFLNNOIDA__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0x16850920)

inline static constexpr unsigned int FPJFLNNOIDA_TypeDefinitionIndex = 59398;

	class FPJFLNNOIDA : public ::GELIALJDFBL
	{
	public:
		::BNBOAMEBAOE* JLMAKNFAEBH; // 0x18
		::GLHMMLODNHN* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		// static const ::System::Object DAFOBOJNIIH; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GLHMMLODNHN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GLHMMLODNHN*))((::PBYTE)hIl2Cpp + FPJFLNNOIDA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void BKPGNCBNMGP(::BNBOAMEBAOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBOAMEBAOE*))((::PBYTE)hIl2Cpp + FPJFLNNOIDA_BKPGNCBNMGP_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJFLNNOIDA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::ValueTuple_4<::System::String*, ::System::String*, ::System::UInt32, ::System::UInt32> CJHNDNNPILF(::System::UInt32 a1)
		{
			return ((::System::ValueTuple_4<::System::String*, ::System::String*, ::System::UInt32, ::System::UInt32>(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FPJFLNNOIDA_CJHNDNNPILF_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightRole* AFGDJGIIPIF(::RPG::Client::GridFightBattleGameContext* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightRole*(*)(::RPG::Client::GridFightBattleGameContext*, ::System::UInt32))((::PBYTE)hIl2Cpp + FPJFLNNOIDA_AFGDJGIIPIF_OFFSET))(a1, a2);
		}

		static ::RPG::Client::GridFightRole* OHCFACKFJBB(::RPG::Client::GridFightBattleGameContext* a1, ::RPG::GameCore::GridFightManager* a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::GridFightRole*(*)(::RPG::Client::GridFightBattleGameContext*, ::RPG::GameCore::GridFightManager*, ::System::UInt32))((::PBYTE)hIl2Cpp + FPJFLNNOIDA_OHCFACKFJBB_OFFSET))(a1, a2, a3);
		}

		static ::System::String* AFHLHHJFOID(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::String*(*)(::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + FPJFLNNOIDA_AFHLHHJFOID_OFFSET))(a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJFLNNOIDA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FPJFLNNOIDA_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJFLNNOIDA_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPJFLNNOIDA__ONTASKBEGIN_B__3_0_OFFSET))(this);
		}

	};
