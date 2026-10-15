#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Booklet { class ElementConfig; }

#define RPG_GAMECORE_BOOKLET_ELEMENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D472BA0)
#define RPG_GAMECORE_BOOKLET_ELEMENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D474010)
#define RPG_GAMECORE_BOOKLET_ELEMENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D473710)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int ElementConfig_TypeDefinitionIndex = 24963;

	class ElementConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 PrefabID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_ELEMENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::ElementConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::ElementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_ELEMENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::ElementConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::ElementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_ELEMENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
