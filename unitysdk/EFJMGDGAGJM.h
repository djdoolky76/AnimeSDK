#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
class NAOKFLDEDBJ;
class OHHPOGMFPBF;
namespace RPG::GameCore { class FireWaveProjectileBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define EFJMGDGAGJM_CTOR_OFFSET UNITYSDK_OFFSET(0x14812F20)
#define EFJMGDGAGJM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x148130D0)
#define EFJMGDGAGJM_EEKEIPKOEKN_OFFSET UNITYSDK_OFFSET(0x14813920)
#define EFJMGDGAGJM_INPHBLMECCB_OFFSET UNITYSDK_OFFSET(0x14813AF0)
#define EFJMGDGAGJM_MFLAEJDICJC_OFFSET UNITYSDK_OFFSET(0x14813480)
#define EFJMGDGAGJM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x148131A0)
#define EFJMGDGAGJM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x148138D0)
#define EFJMGDGAGJM_TICK_OFFSET UNITYSDK_OFFSET(0x14813760)

inline static constexpr unsigned int EFJMGDGAGJM_TypeDefinitionIndex = 56243;

	class EFJMGDGAGJM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::FireWaveProjectileBase* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::Il2CppArray<::NAOKFLDEDBJ*>* MMGFBHHLLOA; // 0x28
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x30
		::RPG::GameCore::GameEntity* KKFCJOJLGCO; // 0x38
		::KFELGAIGHAP* IFOMKIPFGMP; // 0x40
		::System::Int32 DFLGBMLGNPM; // 0x48
		::System::Int32 BLMPGAGBHHK; // 0x4C
		::System::Single LFCDKJIMHCD; // 0x50
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FireWaveProjectileBase* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FireWaveProjectileBase*))((::PBYTE)hIl2Cpp + EFJMGDGAGJM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJMGDGAGJM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJMGDGAGJM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EFJMGDGAGJM_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJMGDGAGJM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void MFLAEJDICJC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EFJMGDGAGJM_MFLAEJDICJC_OFFSET))(this, a1);
		}

		::NAOKFLDEDBJ* EEKEIPKOEKN(::OHHPOGMFPBF* a1)
		{
			return ((::NAOKFLDEDBJ*(*)(::PVOID, ::OHHPOGMFPBF*))((::PBYTE)hIl2Cpp + EFJMGDGAGJM_EEKEIPKOEKN_OFFSET))(this, a1);
		}

		::System::Void INPHBLMECCB(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + EFJMGDGAGJM_INPHBLMECCB_OFFSET))(this, a1);
		}

	};
