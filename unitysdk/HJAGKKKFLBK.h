#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCardCasterSource.h"
#include "unitysdk/System/Object.h"
class HJAGKKKFLBK;
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudHandCardViewModel; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HJAGKKKFLBK_CCTOR_OFFSET UNITYSDK_OFFSET(0x15D01F50)
#define HJAGKKKFLBK_COMPARE_OFFSET UNITYSDK_OFFSET(0x15D016C0)
#define HJAGKKKFLBK_CTOR_OFFSET UNITYSDK_OFFSET(0x15D01F40)
#define HJAGKKKFLBK_EMDGCFHHFGB_OFFSET UNITYSDK_OFFSET(0x15D01D40)

	class HJAGKKKFLBK : public ::System::Object
	{
	public:
		static ::HJAGKKKFLBK** StaticGet_FMJPMFEDIJL()
		{
			return (::HJAGKKKFLBK**)UnitySDK::FromName("", "HJAGKKKFLBK")->GetStaticField(0x1CDF0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateRinCardCasterSource, ::System::Int32>** StaticGet_HCIBEFAHKCO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateRinCardCasterSource, ::System::Int32>**)UnitySDK::FromName("", "HJAGKKKFLBK")->GetStaticField(0x1CDF8);
		}

		// static const ::System::Object CJOPNPHOMMM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJAGKKKFLBK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJAGKKKFLBK_CCTOR_OFFSET))();
		}

		::System::Int32 Compare(::RPG::Client::FateRin::Battle::FateRinBattleHudHandCardViewModel* a1, ::RPG::Client::FateRin::Battle::FateRinBattleHudHandCardViewModel* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudHandCardViewModel*, ::RPG::Client::FateRin::Battle::FateRinBattleHudHandCardViewModel*))((::PBYTE)hIl2Cpp + HJAGKKKFLBK_COMPARE_OFFSET))(this, a1, a2);
		}

		static ::System::Int32 EMDGCFHHFGB(::RPG::GameCore::FateRinCardCasterSource a1, ::RPG::GameCore::FateRinCardCasterSource a2)
		{
			return ((::System::Int32(*)(::RPG::GameCore::FateRinCardCasterSource, ::RPG::GameCore::FateRinCardCasterSource))((::PBYTE)hIl2Cpp + HJAGKKKFLBK_EMDGCFHHFGB_OFFSET))(a1, a2);
		}

	};
