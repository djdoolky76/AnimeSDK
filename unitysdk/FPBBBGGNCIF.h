#pragma once
#include "unitysdk/unitysdk.h"
class BOJOBHMEEIH;
class HEJLOAOKDGE;
class MDKJNMJFNAD;
class PGLLCPNEHDO;
namespace UnityEngine { class Camera; }

#define FPBBBGGNCIF_GET_APPLYGATEMANAGER_OFFSET UNITYSDK_OFFSET(0x7F6810)
#define FPBBBGGNCIF_GET_DEPENDENCYRESOLVER_OFFSET UNITYSDK_OFFSET(0x6C95B0)
#define FPBBBGGNCIF_GET_MESSENGER_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define FPBBBGGNCIF_GET_STAGECRAFTENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x7F5730)
#define FPBBBGGNCIF_GET_UI3DCAMERA_OFFSET UNITYSDK_OFFSET(0x6C9390)
#define FPBBBGGNCIF_SET_APPLYGATEMANAGER_OFFSET UNITYSDK_OFFSET(0x3D6A860)
#define FPBBBGGNCIF_SET_DEPENDENCYRESOLVER_OFFSET UNITYSDK_OFFSET(0xB88D90)
#define FPBBBGGNCIF_SET_MESSENGER_OFFSET UNITYSDK_OFFSET(0x6C8D40)
#define FPBBBGGNCIF_SET_STAGECRAFTENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x3D6A850)
#define FPBBBGGNCIF_SET_UI3DCAMERA_OFFSET UNITYSDK_OFFSET(0xFDBF90)

inline static constexpr unsigned int FPBBBGGNCIF_TypeDefinitionIndex = 45311;

	struct alignas(8) FPBBBGGNCIF
	{
		::BOJOBHMEEIH* _Messenger_k__BackingField; // 0x10
		::HEJLOAOKDGE* _DependencyResolver_k__BackingField; // 0x18
		::UnityEngine::Camera* _UI3DCamera_k__BackingField; // 0x20
		::PGLLCPNEHDO* _StagecraftEnvironment_k__BackingField; // 0x28
		::MDKJNMJFNAD* _ApplyGateManager_k__BackingField; // 0x30
		::BOJOBHMEEIH* get_Messenger()
		{
			return ((::BOJOBHMEEIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBBBGGNCIF_GET_MESSENGER_OFFSET))(this);
		}

		::System::Void set_Messenger(::BOJOBHMEEIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOJOBHMEEIH*))((::PBYTE)hIl2Cpp + FPBBBGGNCIF_SET_MESSENGER_OFFSET))(this, a1);
		}

		::HEJLOAOKDGE* get_DependencyResolver()
		{
			return ((::HEJLOAOKDGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBBBGGNCIF_GET_DEPENDENCYRESOLVER_OFFSET))(this);
		}

		::System::Void set_DependencyResolver(::HEJLOAOKDGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEJLOAOKDGE*))((::PBYTE)hIl2Cpp + FPBBBGGNCIF_SET_DEPENDENCYRESOLVER_OFFSET))(this, a1);
		}

		::UnityEngine::Camera* get_UI3DCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBBBGGNCIF_GET_UI3DCAMERA_OFFSET))(this);
		}

		::System::Void set_UI3DCamera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + FPBBBGGNCIF_SET_UI3DCAMERA_OFFSET))(this, a1);
		}

		::PGLLCPNEHDO* get_StagecraftEnvironment()
		{
			return ((::PGLLCPNEHDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBBBGGNCIF_GET_STAGECRAFTENVIRONMENT_OFFSET))(this);
		}

		::System::Void set_StagecraftEnvironment(::PGLLCPNEHDO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGLLCPNEHDO*))((::PBYTE)hIl2Cpp + FPBBBGGNCIF_SET_STAGECRAFTENVIRONMENT_OFFSET))(this, a1);
		}

		::MDKJNMJFNAD* get_ApplyGateManager()
		{
			return ((::MDKJNMJFNAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBBBGGNCIF_GET_APPLYGATEMANAGER_OFFSET))(this);
		}

		::System::Void set_ApplyGateManager(::MDKJNMJFNAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDKJNMJFNAD*))((::PBYTE)hIl2Cpp + FPBBBGGNCIF_SET_APPLYGATEMANAGER_OFFSET))(this, a1);
		}

	};
