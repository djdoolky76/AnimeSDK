#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INMMPMDELKE;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }
namespace System { class Action; }

#define LKGIMGKIFFI___C__DISPLAYCLASS72_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB7446F0)
#define LKGIMGKIFFI___C__DISPLAYCLASS72_0___FOREACHSTACKFOLLOWCAMERA_B__0_OFFSET UNITYSDK_OFFSET(0xB7478A0)

	class LKGIMGKIFFI___c__DisplayClass72_0 : public ::System::Object
	{
	public:
		::System::Action* action; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI___C__DISPLAYCLASS72_0_CTOR_OFFSET))(this);
		}

		::System::Void __ForEachStackFollowCamera_b__0(::INMMPMDELKE* a1, ::Cinemachine::CinemachineVirtualCamera* a2, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a3)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI___C__DISPLAYCLASS72_0___FOREACHSTACKFOLLOWCAMERA_B__0_OFFSET))(this, a1, a2, a3);
		}

	};
