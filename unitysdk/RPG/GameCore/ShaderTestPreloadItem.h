#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShaderTestPreloadItem; }
namespace System { class String; }

#define RPG_GAMECORE_SHADERTESTPRELOADITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DACED20)
#define RPG_GAMECORE_SHADERTESTPRELOADITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DACEC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShaderTestPreloadItem_TypeDefinitionIndex = 16355;

	class ShaderTestPreloadItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* Materials; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHADERTESTPRELOADITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShaderTestPreloadItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShaderTestPreloadItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHADERTESTPRELOADITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
