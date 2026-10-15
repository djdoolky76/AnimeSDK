#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/ContainerAnchor.h"
#include "unitysdk/RPG/GameCore/Booklet/ElementConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Booklet { class ContainerConfig; }

#define RPG_GAMECORE_BOOKLET_CONTAINERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D473570)
#define RPG_GAMECORE_BOOKLET_CONTAINERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D473240)
#define RPG_GAMECORE_BOOKLET_CONTAINERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D472DA0)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int ContainerConfig_TypeDefinitionIndex = 24969;

	class ContainerConfig : public ::RPG::GameCore::Booklet::ElementConfig
	{
	public:
		::RPG::GameCore::Booklet::ContainerAnchor Alignment; // 0x18
		::System::Int32 LeftPadding; // 0x1C
		::System::Int32 RightPadding; // 0x20
		::System::Int32 TopPadding; // 0x24
		::System::Int32 BottomPadding; // 0x28
		::System::Single Spacing; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_CONTAINERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::ContainerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::ContainerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_CONTAINERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::ContainerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::ContainerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_CONTAINERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
