#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightShowFullScreenCutInType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GridFightShowFullScreenCutIn; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSHOWFULLSCREENCUTIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D742010)
#define RPG_GAMECORE_GRIDFIGHTSHOWFULLSCREENCUTIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D742020)
#define RPG_GAMECORE_GRIDFIGHTSHOWFULLSCREENCUTIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D741FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowFullScreenCutIn_TypeDefinitionIndex = 23234;

	class GridFightShowFullScreenCutIn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::GridFightShowFullScreenCutInType CutInType; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* TraitKey; // 0x20
		::RPG::GameCore::DynamicFloat* TraitLv; // 0x28
		::System::String* OverrideImagePath; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWFULLSCREENCUTIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightShowFullScreenCutIn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightShowFullScreenCutIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWFULLSCREENCUTIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightShowFullScreenCutIn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightShowFullScreenCutIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWFULLSCREENCUTIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
