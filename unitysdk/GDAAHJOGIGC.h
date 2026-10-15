#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::GameCore { class GameWorld; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define GDAAHJOGIGC_CTOR_OFFSET UNITYSDK_OFFSET(0x159861D0)
#define GDAAHJOGIGC_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x15985DD0)
#define GDAAHJOGIGC_FDFPOIGEHGB_OFFSET UNITYSDK_OFFSET(0x15985940)
#define GDAAHJOGIGC_IGGFPOFMNNB_OFFSET UNITYSDK_OFFSET(0x15985B40)
#define GDAAHJOGIGC_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0x159861C0)
#define GDAAHJOGIGC_KHFEEGEHNMH_OFFSET UNITYSDK_OFFSET(0x15986070)
#define GDAAHJOGIGC_KIDMJFHHLHK_OFFSET UNITYSDK_OFFSET(0x15985E40)
#define GDAAHJOGIGC_LCGCBEJPEAJ_OFFSET UNITYSDK_OFFSET(0x159859B0)
#define GDAAHJOGIGC_MDLIAHMHEDK_OFFSET UNITYSDK_OFFSET(0x15985C40)
#define GDAAHJOGIGC_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x159857D0)
#define GDAAHJOGIGC_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x15985820)

inline static constexpr unsigned int GDAAHJOGIGC_TypeDefinitionIndex = 57827;

	class GDAAHJOGIGC : public ::System::Object
	{
	public:
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x10
		::Cinemachine::CinemachineBrain* CCLCJBOBOIJ; // 0x18
		::UnityEngine::Transform* IGJEFJBCMHB; // 0x20
		::UnityEngine::GameObject* EABLAHKBNMJ; // 0x28
		::UnityEngine::Transform* AMCPGLHIAKA; // 0x30
		::Cinemachine::CinemachineVirtualCamera* EJFOJELOONF; // 0x38
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
