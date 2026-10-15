#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define LKGIMGKIFFI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB7400C0)
#define LKGIMGKIFFI___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB740100)
#define LKGIMGKIFFI___C___DEMOTEALLSTACKCAMERAPRIORITIES_B__4_0_OFFSET UNITYSDK_OFFSET(0xB740110)

inline static constexpr unsigned int LKGIMGKIFFI___c_TypeDefinitionIndex = 76760;

	class LKGIMGKIFFI___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::Cinemachine::CinemachineVirtualCameraBase*>** StaticGet___9__4_0()
		{
			return (::System::Action_2<::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::Cinemachine::CinemachineVirtualCameraBase*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x691D0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x691D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKGIMGKIFFI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKGIMGKIFFI___C_CTOR_OFFSET))(this);
		}

		::System::Void __DemoteAllStackCameraPriorities_b__4_0(::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a1, ::Cinemachine::CinemachineVirtualCameraBase* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + LKGIMGKIFFI___C___DEMOTEALLSTACKCAMERAPRIORITIES_B__4_0_OFFSET))(this, a1, a2);
		}

	};
