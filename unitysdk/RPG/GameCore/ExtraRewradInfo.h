#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExtraRewradInfo; }

#define RPG_GAMECORE_EXTRAREWRADINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D695760)
#define RPG_GAMECORE_EXTRAREWRADINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D695720)

namespace RPG::GameCore
{
	class ExtraRewradInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXTRAREWRADINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExtraRewradInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExtraRewradInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXTRAREWRADINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
