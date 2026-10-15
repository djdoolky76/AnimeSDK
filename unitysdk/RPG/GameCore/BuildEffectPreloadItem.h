#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BuildEffectPreloadItem; }
namespace RPG::GameCore { class EffectPathList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BUILDEFFECTPRELOADITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D480500)
#define RPG_GAMECORE_BUILDEFFECTPRELOADITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D480400)

namespace RPG::GameCore
{
	class BuildEffectPreloadItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::EffectPathList*>* PrelodConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUILDEFFECTPRELOADITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BuildEffectPreloadItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BuildEffectPreloadItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUILDEFFECTPRELOADITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
