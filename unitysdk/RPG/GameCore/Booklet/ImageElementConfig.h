#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/FadeInElementConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Booklet { class ImageElementConfig; }
namespace System { class String; }

#define RPG_GAMECORE_BOOKLET_IMAGEELEMENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D473A80)
#define RPG_GAMECORE_BOOKLET_IMAGEELEMENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D473A90)
#define RPG_GAMECORE_BOOKLET_IMAGEELEMENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D474600)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int ImageElementConfig_TypeDefinitionIndex = 24972;

	class ImageElementConfig : public ::RPG::GameCore::Booklet::FadeInElementConfig
	{
	public:
		::System::String* ImagePath; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_IMAGEELEMENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::ImageElementConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::ImageElementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_IMAGEELEMENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::ImageElementConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::ImageElementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_IMAGEELEMENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
