#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class EBBBJDPGDFG;
class EKBAMCGELAK;
class KFELGAIGHAP;
class NAOKFLDEDBJ;
class OHHPOGMFPBF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CCHKCCPMDPD_CTOR_OFFSET UNITYSDK_OFFSET(0xCE2F370)
#define CCHKCCPMDPD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE2F490)
#define CCHKCCPMDPD_EEKEIPKOEKN_OFFSET UNITYSDK_OFFSET(0xCE2FBC0)
#define CCHKCCPMDPD_INPHBLMECCB_OFFSET UNITYSDK_OFFSET(0xCE2FE90)
#define CCHKCCPMDPD_MFLAEJDICJC_OFFSET UNITYSDK_OFFSET(0xCE2F6F0)
#define CCHKCCPMDPD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCE2F560)
#define CCHKCCPMDPD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCE2F9D0)
#define CCHKCCPMDPD_TICK_OFFSET UNITYSDK_OFFSET(0xCE2FA20)

inline static constexpr unsigned int CCHKCCPMDPD_TypeDefinitionIndex = 55075;

	class CCHKCCPMDPD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x18
		::RPG::GameCore::GameEntity* KKFCJOJLGCO; // 0x20
		::EBBBJDPGDFG* EEGKNKIBLHB; // 0x28
		::Il2CppArray<::NAOKFLDEDBJ*>* MMGFBHHLLOA; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::KFELGAIGHAP* IFOMKIPFGMP; // 0x40
		::EKBAMCGELAK* OFKGLJOAMLD; // 0x48
		::System::Int32 BLMPGAGBHHK; // 0x50
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint KBDPMBDJIOF; // 0x58
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EKBAMCGELAK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EKBAMCGELAK*))((::PBYTE)hIl2Cpp + CCHKCCPMDPD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHKCCPMDPD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHKCCPMDPD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHKCCPMDPD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CCHKCCPMDPD_TICK_OFFSET))(this, a1);
		}

		::System::Void MFLAEJDICJC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CCHKCCPMDPD_MFLAEJDICJC_OFFSET))(this, a1);
		}

		::NAOKFLDEDBJ* EEKEIPKOEKN(::OHHPOGMFPBF* a1)
		{
			return ((::NAOKFLDEDBJ*(*)(::PVOID, ::OHHPOGMFPBF*))((::PBYTE)hIl2Cpp + CCHKCCPMDPD_EEKEIPKOEKN_OFFSET))(this, a1);
		}

		::System::Void INPHBLMECCB(::NAOKFLDEDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAOKFLDEDBJ*))((::PBYTE)hIl2Cpp + CCHKCCPMDPD_INPHBLMECCB_OFFSET))(this, a1);
		}

	};
