#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKGIMGKIFFI;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }

#define LKGIMGKIFFI___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB747850)
#define LKGIMGKIFFI___C__DISPLAYCLASS6_0___PRESETSTACKORTHOGRAPHICSIZEFORSTARTCURVE_B__0_OFFSET UNITYSDK_OFFSET(0xB747860)

inline static constexpr unsigned int LKGIMGKIFFI___c__DisplayClass6_0_TypeDefinitionIndex = 76766;

	class LKGIMGKIFFI___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::LKGIMGKIFFI* __4__this; // 0x10
		::System::Single startOrthographicSize; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Void __PresetStackOrthographicSizeForStartCurve_b__0(::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a1, ::Cinemachine::CinemachineVirtualCameraBase* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI___C__DISPLAYCLASS6_0___PRESETSTACKORTHOGRAPHICSIZEFORSTARTCURVE_B__0_OFFSET))(this, a1, a2);
		}

	};
