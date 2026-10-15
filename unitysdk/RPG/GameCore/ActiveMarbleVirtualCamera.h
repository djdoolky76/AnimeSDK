#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActiveVirtualCamera.h"
#include "unitysdk/RPG/GameCore/MarbleTargetType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActiveMarbleVirtualCamera; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVEMARBLEVIRTUALCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D349F10)
#define RPG_GAMECORE_ACTIVEMARBLEVIRTUALCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D349F40)
#define RPG_GAMECORE_ACTIVEMARBLEVIRTUALCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D349EC0)

namespace RPG::GameCore
{
	class ActiveMarbleVirtualCamera : public ::RPG::GameCore::ActiveVirtualCamera
	{
	public:
		::RPG::GameCore::MarbleTargetType FollowObject; // 0xF0
		::System::Byte _padding0[0x4];
		::System::String* FollowPoint; // 0xF8
		::RPG::GameCore::MarbleTargetType LookAtObject; // 0x100
		::System::Byte _padding1[0x4];
		::System::String* LookAtPoint; // 0x108
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEMARBLEVIRTUALCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActiveMarbleVirtualCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActiveMarbleVirtualCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEMARBLEVIRTUALCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActiveMarbleVirtualCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActiveMarbleVirtualCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVEMARBLEVIRTUALCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
