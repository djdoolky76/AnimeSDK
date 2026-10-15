#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShaderTestPreloadConfig; }
namespace RPG::GameCore { class ShaderTestPreloadItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SHADERTESTPRELOADCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DACEC20)
#define RPG_GAMECORE_SHADERTESTPRELOADCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DACEA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShaderTestPreloadConfig_TypeDefinitionIndex = 16356;

	class ShaderTestPreloadConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ShaderTestPreloadItem*>* AvatarMaterialList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ShaderTestPreloadItem*>* NPCMaterialList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ShaderTestPreloadItem*>* MonsterMaterialList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHADERTESTPRELOADCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShaderTestPreloadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShaderTestPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHADERTESTPRELOADCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
