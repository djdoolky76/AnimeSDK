#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
class AkCallbackInfo;
class PAADPKGPFMJ_LIJIFNDLBDF;
class PHPFBBDLPNL_GDPCFEDMCHC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerSoundInAnim; }
namespace System { class Action; }
namespace System { class String; }

#define CELPGGNGOID_BLJNHIABBBN_OFFSET UNITYSDK_OFFSET(0xC9E6F70)
#define CELPGGNGOID_CHJOJCGHKDC_OFFSET UNITYSDK_OFFSET(0xC9E67B0)
#define CELPGGNGOID_CTOR_OFFSET UNITYSDK_OFFSET(0xC9E6520)
#define CELPGGNGOID_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC9E65C0)
#define CELPGGNGOID_GDIIPHEEEBK_OFFSET UNITYSDK_OFFSET(0xC9E6620)
#define CELPGGNGOID_GGHLJDDNIBF_OFFSET UNITYSDK_OFFSET(0xC9E7580)
#define CELPGGNGOID_JBJBMDKIJPH_OFFSET UNITYSDK_OFFSET(0xC9E7350)
#define CELPGGNGOID_KFPAIDFGJMO_OFFSET UNITYSDK_OFFSET(0xC9E7450)
#define CELPGGNGOID_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC9E6910)

	class CELPGGNGOID
	{
	public:
		::RPG::GameCore::GameEntity* ONIACPBDNMH; // 0x28
		::System::String* NIDHHGOJAHN; // 0x30
		::System::String* MGBHHNCMBHD; // 0x38
		::PAADPKGPFMJ_LIJIFNDLBDF* GEDBIMJBELE; // 0x40
		::PHPFBBDLPNL_GDPCFEDMCHC* LENAOOGGHDD; // 0x48
		::System::Action* PKDJEJPKOGO; // 0x50
		::System::Boolean LKABAJOFGPI; // 0x58
		::System::Boolean HKNNBCBGPOJ; // 0x59
		::System::Byte _padding0[0x2];
		::System::Int32 OHOGFBCFFFN; // 0x5C
		::System::UInt32 DHEOFFACDEK; // 0x60
		::System::Int32 IKHJBFPOFGK; // 0x64
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerSoundInAnim* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerSoundInAnim*))((::PBYTE)hIl2Cpp + CELPGGNGOID_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELPGGNGOID_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELPGGNGOID_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void JBJBMDKIJPH(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CELPGGNGOID_JBJBMDKIJPH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KFPAIDFGJMO(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CELPGGNGOID_KFPAIDFGJMO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GDIIPHEEEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELPGGNGOID_GDIIPHEEEBK_OFFSET))(this);
		}

		::System::Void GGHLJDDNIBF(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CELPGGNGOID_GGHLJDDNIBF_OFFSET))(this, a1, a2);
		}

		::System::Void CHJOJCGHKDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CELPGGNGOID_CHJOJCGHKDC_OFFSET))(this);
		}

		::System::String* BLJNHIABBBN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CELPGGNGOID_BLJNHIABBBN_OFFSET))(this);
		}

	};
