#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvIsometricCameraSizeBlend; }
namespace System { class String; }

#define RPG_GAMECORE_ADVISOMETRICCAMERASIZEBLEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A1C90)
#define RPG_GAMECORE_ADVISOMETRICCAMERASIZEBLEND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A1CA0)
#define RPG_GAMECORE_ADVISOMETRICCAMERASIZEBLEND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A1C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvIsometricCameraSizeBlend_TypeDefinitionIndex = 22215;

	class AdvIsometricCameraSizeBlend : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* SizeCurve; // 0x18
		::System::Single OrthographicSize; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICCAMERASIZEBLEND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvIsometricCameraSizeBlend* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvIsometricCameraSizeBlend*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICCAMERASIZEBLEND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvIsometricCameraSizeBlend* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvIsometricCameraSizeBlend*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVISOMETRICCAMERASIZEBLEND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
