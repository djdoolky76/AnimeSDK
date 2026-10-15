#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropSpecialVisionConfig; }

#define RPG_GAMECORE_PROPSPECIALVISIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D958110)
#define RPG_GAMECORE_PROPSPECIALVISIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D957EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSpecialVisionConfig_TypeDefinitionIndex = 20510;

	class PropSpecialVisionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x10
		::RPG::GameCore::DynamicFloat* GroupPropID; // 0x18
		::System::Boolean TargetIsOwner; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicString* PropKey; // 0x28
		::System::UInt32 StencilRefGBuffer; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSPECIALVISIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSpecialVisionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSpecialVisionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSPECIALVISIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
