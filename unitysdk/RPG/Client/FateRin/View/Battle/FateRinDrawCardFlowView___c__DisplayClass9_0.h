#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDBOGJINCFP;
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace RPG::Client::Promises { class IPendingPromise; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCFC80F0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW___C__DISPLAYCLASS9_0__PLAYDRAWFLOW_B__0_OFFSET UNITYSDK_OFFSET(0xCFC9100)

namespace RPG::Client::FateRin::View::Battle
{
	class FateRinDrawCardFlowView___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MDBOGJINCFP* audioService; // 0x10
		::RPG::Client::Promises::IPendingPromise* pending; // 0x18
		::System::Collections::Generic::IList_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* posCtrls; // 0x20
		::System::Int32 count; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayDrawFlow_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINDRAWCARDFLOWVIEW___C__DISPLAYCLASS9_0__PLAYDRAWFLOW_B__0_OFFSET))(this, a1);
		}

	};
}
