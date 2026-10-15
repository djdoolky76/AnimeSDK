#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnchorConfigOld; }

#define RPG_GAMECORE_ANCHORCONFIGOLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F2410)
#define RPG_GAMECORE_ANCHORCONFIGOLD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3F23D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnchorConfigOld_TypeDefinitionIndex = 18321;

	class AnchorConfigOld : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANCHORCONFIGOLD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AnchorConfigOld* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AnchorConfigOld*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ANCHORCONFIGOLD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
