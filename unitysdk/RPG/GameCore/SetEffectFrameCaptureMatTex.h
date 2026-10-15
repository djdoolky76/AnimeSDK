#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetEffectFrameCaptureMatTex; }
namespace System { class String; }

#define RPG_GAMECORE_SETEFFECTFRAMECAPTUREMATTEX_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA81A20)
#define RPG_GAMECORE_SETEFFECTFRAMECAPTUREMATTEX_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA81A30)
#define RPG_GAMECORE_SETEFFECTFRAMECAPTUREMATTEX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA819F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEffectFrameCaptureMatTex_TypeDefinitionIndex = 22888;

	class SetEffectFrameCaptureMatTex : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueEffectName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTFRAMECAPTUREMATTEX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEffectFrameCaptureMatTex* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEffectFrameCaptureMatTex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTFRAMECAPTUREMATTEX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetEffectFrameCaptureMatTex* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetEffectFrameCaptureMatTex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTFRAMECAPTUREMATTEX_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
