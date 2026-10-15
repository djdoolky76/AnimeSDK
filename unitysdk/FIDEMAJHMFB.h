#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/BattleScreenEffectType.h"
class FACKIAAMEHD;
class ILAAABDFDMB;
class KHDHPOKJFDP;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FIDEMAJHMFB_CTOR_OFFSET UNITYSDK_OFFSET(0x157A32F0)
#define FIDEMAJHMFB_ECGDIHEMNAO_OFFSET UNITYSDK_OFFSET(0x157A3020)
#define FIDEMAJHMFB_NJDJNCMBKCE_OFFSET UNITYSDK_OFFSET(0x157A3220)
#define FIDEMAJHMFB_OODKMLPOIMK_OFFSET UNITYSDK_OFFSET(0x157A2D80)

	class FIDEMAJHMFB : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleScreenEffectType, ::ILAAABDFDMB*>* BKEJDEEINDF; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIDEMAJHMFB_CTOR_OFFSET))(this);
		}

		::FACKIAAMEHD* OODKMLPOIMK(::KHDHPOKJFDP* a1)
		{
			return ((::FACKIAAMEHD*(*)(::PVOID, ::KHDHPOKJFDP*))((::PBYTE)hIl2Cpp + FIDEMAJHMFB_OODKMLPOIMK_OFFSET))(this, a1);
		}

		static ::System::String* NJDJNCMBKCE(::RPG::GameCore::BattleScreenEffectType a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::BattleScreenEffectType))((::PBYTE)hIl2Cpp + FIDEMAJHMFB_NJDJNCMBKCE_OFFSET))(a1);
		}

		::FACKIAAMEHD* ECGDIHEMNAO(::KHDHPOKJFDP* a1)
		{
			return ((::FACKIAAMEHD*(*)(::PVOID, ::KHDHPOKJFDP*))((::PBYTE)hIl2Cpp + FIDEMAJHMFB_ECGDIHEMNAO_OFFSET))(this, a1);
		}

	};
