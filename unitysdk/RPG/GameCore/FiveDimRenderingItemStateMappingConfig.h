#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FDRIStateMaskEnum.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimRenderingItemStateMappingConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FIVEDIMRENDERINGITEMSTATEMAPPINGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D75F0)
#define RPG_GAMECORE_FIVEDIMRENDERINGITEMSTATEMAPPINGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D7510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimRenderingItemStateMappingConfig_TypeDefinitionIndex = 16720;

	class FiveDimRenderingItemStateMappingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FDRIStateMaskEnum>* RenderingItemStateMapping; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRENDERINGITEMSTATEMAPPINGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimRenderingItemStateMappingConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimRenderingItemStateMappingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRENDERINGITEMSTATEMAPPINGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
