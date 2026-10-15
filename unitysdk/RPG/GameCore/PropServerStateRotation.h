#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropServerStateRotation; }

#define RPG_GAMECORE_PROPSERVERSTATEROTATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D953970)
#define RPG_GAMECORE_PROPSERVERSTATEROTATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D953930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropServerStateRotation_TypeDefinitionIndex = 20350;

	class PropServerStateRotation : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSERVERSTATEROTATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropServerStateRotation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropServerStateRotation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSERVERSTATEROTATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
