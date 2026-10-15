#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameRadialBlurEffect; }

#define RPG_GAMECORE_LITTLEGAMERADIALBLUREFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E5AA0)
#define RPG_GAMECORE_LITTLEGAMERADIALBLUREFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7E5AD0)
#define RPG_GAMECORE_LITTLEGAMERADIALBLUREFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E5A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameRadialBlurEffect_TypeDefinitionIndex = 21491;

	class LittleGameRadialBlurEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean HiendOnly; // 0x18
		::System::Boolean Active; // 0x19
		::System::Byte _padding0[0x2];
		::System::Single Duration; // 0x1C
		::System::Single BlurX; // 0x20
		::System::Single BlurY; // 0x24
		::System::Single BlurRadius; // 0x28
		::System::Int32 Iteration; // 0x2C
		::System::Single BlurStart; // 0x30
		::System::Single BlurFeather; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMERADIALBLUREFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameRadialBlurEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameRadialBlurEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMERADIALBLUREFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameRadialBlurEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameRadialBlurEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMERADIALBLUREFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
