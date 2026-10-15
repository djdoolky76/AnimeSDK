#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::GameCore { class GameWorld; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define GDAAHJOGIGC_CTOR_OFFSET UNITYSDK_OFFSET(0x15991180)
#define GDAAHJOGIGC_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x15990D80)
#define GDAAHJOGIGC_FDFPOIGEHGB_OFFSET UNITYSDK_OFFSET(0x159908F0)
#define GDAAHJOGIGC_IGGFPOFMNNB_OFFSET UNITYSDK_OFFSET(0x15990AF0)
#define GDAAHJOGIGC_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0x15991170)
#define GDAAHJOGIGC_KHFEEGEHNMH_OFFSET UNITYSDK_OFFSET(0x15991020)
#define GDAAHJOGIGC_KIDMJFHHLHK_OFFSET UNITYSDK_OFFSET(0x15990DF0)
#define GDAAHJOGIGC_LCGCBEJPEAJ_OFFSET UNITYSDK_OFFSET(0x15990960)
#define GDAAHJOGIGC_MDLIAHMHEDK_OFFSET UNITYSDK_OFFSET(0x15990BF0)
#define GDAAHJOGIGC_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x15990780)
#define GDAAHJOGIGC_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x159907D0)

	class GDAAHJOGIGC : public ::System::Object
	{
	public:
		::UnityEngine::Transform* IGJEFJBCMHB; // 0x10
		::Cinemachine::CinemachineBrain* CCLCJBOBOIJ; // 0x18
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x20
		::Cinemachine::CinemachineVirtualCamera* EJFOJELOONF; // 0x28
		::UnityEngine::Transform* AMCPGLHIAKA; // 0x30
		::UnityEngine::GameObject* EABLAHKBNMJ; // 0x38
		::System::Boolean FMNEEONAMNO; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDAAHJOGIGC_CTOR_OFFSET))(this);
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + GDAAHJOGIGC_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDAAHJOGIGC_ONPLUGINUNINIT_OFFSET))(this);
		}

		::System::Void LCGCBEJPEAJ(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GDAAHJOGIGC_LCGCBEJPEAJ_OFFSET))(this, a1, a2);
		}

		::System::Void MDLIAHMHEDK(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GDAAHJOGIGC_MDLIAHMHEDK_OFFSET))(this, a1, a2);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GDAAHJOGIGC_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void IGGFPOFMNNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDAAHJOGIGC_IGGFPOFMNNB_OFFSET))(this);
		}

		::System::Void KIDMJFHHLHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDAAHJOGIGC_KIDMJFHHLHK_OFFSET))(this);
		}

		::System::Void KHFEEGEHNMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDAAHJOGIGC_KHFEEGEHNMH_OFFSET))(this);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDAAHJOGIGC_JKEONEEPIHH_OFFSET))(this);
		}

		::System::Void FDFPOIGEHGB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDAAHJOGIGC_FDFPOIGEHGB_OFFSET))(this, a1);
		}

	};
