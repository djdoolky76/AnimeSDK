#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPrepTutorialToastHintParam; }

#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALTOASTHINTPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73B1C0)
#define RPG_GAMECORE_GRIDFIGHTPREPTUTORIALTOASTHINTPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73A7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPrepTutorialToastHintParam_TypeDefinitionIndex = 19964;

	class GridFightPrepTutorialToastHintParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID Title; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALTOASTHINTPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightPrepTutorialToastHintParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightPrepTutorialToastHintParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPREPTUTORIALTOASTHINTPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
