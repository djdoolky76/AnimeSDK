#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonoEffectLodDetail; }

#define RPG_GAMECORE_MONOEFFECTLODDETAIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D89BD60)
#define RPG_GAMECORE_MONOEFFECTLODDETAIL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D89BB90)

namespace RPG::GameCore
{
	class MonoEffectLodDetail : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 BoundSize; // 0x10
		::System::Single Lifetime; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOEFFECTLODDETAIL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonoEffectLodDetail* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonoEffectLodDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOEFFECTLODDETAIL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
