#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RenderResolution; }

#define RPG_GAMECORE_RENDERRESOLUTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9873C0)
#define RPG_GAMECORE_RENDERRESOLUTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D987250)

namespace RPG::GameCore
{
	class RenderResolution : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 width; // 0x10
		::System::Int32 height; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RENDERRESOLUTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RenderResolution* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RenderResolution*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RENDERRESOLUTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
