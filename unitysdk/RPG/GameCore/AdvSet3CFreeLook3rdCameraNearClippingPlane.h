#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSet3CFreeLook3rdCameraNearClippingPlane; }

#define RPG_GAMECORE_ADVSET3CFREELOOK3RDCAMERANEARCLIPPINGPLANE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D37F7E0)
#define RPG_GAMECORE_ADVSET3CFREELOOK3RDCAMERANEARCLIPPINGPLANE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D37F7F0)
#define RPG_GAMECORE_ADVSET3CFREELOOK3RDCAMERANEARCLIPPINGPLANE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D37F7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSet3CFreeLook3rdCameraNearClippingPlane_TypeDefinitionIndex = 20296;

	class AdvSet3CFreeLook3rdCameraNearClippingPlane : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single NearClippingPlane; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSET3CFREELOOK3RDCAMERANEARCLIPPINGPLANE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSet3CFreeLook3rdCameraNearClippingPlane* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSet3CFreeLook3rdCameraNearClippingPlane*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSET3CFREELOOK3RDCAMERANEARCLIPPINGPLANE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSet3CFreeLook3rdCameraNearClippingPlane* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSet3CFreeLook3rdCameraNearClippingPlane*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSET3CFREELOOK3RDCAMERANEARCLIPPINGPLANE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
