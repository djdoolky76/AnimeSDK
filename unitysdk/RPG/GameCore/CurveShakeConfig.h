#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CurveShakeConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CURVESHAKECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5BB670)
#define RPG_GAMECORE_CURVESHAKECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5BB3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CurveShakeConfig_TypeDefinitionIndex = 16415;

	class CurveShakeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* CurvePath; // 0x10
		::System::Single CurveDuration; // 0x18
		::RPG::MVector3 CurveAmplitude; // 0x1C
		::RPG::MVector3 CurveRandomDir; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURVESHAKECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CurveShakeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CurveShakeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CURVESHAKECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
