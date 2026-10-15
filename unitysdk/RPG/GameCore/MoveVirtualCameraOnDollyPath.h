#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MoveVirtualCameraOnDollyPath; }
namespace System { class String; }

#define RPG_GAMECORE_MOVEVIRTUALCAMERAONDOLLYPATH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D890CB0)
#define RPG_GAMECORE_MOVEVIRTUALCAMERAONDOLLYPATH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D890CC0)
#define RPG_GAMECORE_MOVEVIRTUALCAMERAONDOLLYPATH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D890C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MoveVirtualCameraOnDollyPath_TypeDefinitionIndex = 21909;

	class MoveVirtualCameraOnDollyPath : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AreaName; // 0x18
		::System::String* AnchorName; // 0x20
		::System::Single StartPoint; // 0x28
		::System::Single EndPoint; // 0x2C
		::System::String* CurveName; // 0x30
		::System::Single Duration; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVEVIRTUALCAMERAONDOLLYPATH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MoveVirtualCameraOnDollyPath* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MoveVirtualCameraOnDollyPath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVEVIRTUALCAMERAONDOLLYPATH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MoveVirtualCameraOnDollyPath* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MoveVirtualCameraOnDollyPath*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVEVIRTUALCAMERAONDOLLYPATH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
