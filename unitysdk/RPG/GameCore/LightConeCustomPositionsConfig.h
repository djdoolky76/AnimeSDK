#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LightConeCustomPositionsConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LIGHTCONECUSTOMPOSITIONSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CF3D0)
#define RPG_GAMECORE_LIGHTCONECUSTOMPOSITIONSCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7CF2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LightConeCustomPositionsConfig_TypeDefinitionIndex = 17492;

	class LightConeCustomPositionsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::MVector3>* CustomPositionAnchor; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIGHTCONECUSTOMPOSITIONSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LightConeCustomPositionsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LightConeCustomPositionsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIGHTCONECUSTOMPOSITIONSCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
