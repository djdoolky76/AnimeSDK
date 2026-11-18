#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ENGKPGFGGLM;
class FAMLNPCANNH;
class JHNEKILCCAA;
class MNKAABDAOKL;
class PLCEHIEOIBA;
class POHOEABNNII;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MOVINGWALLSUBSYSTEM_GETBUILDER_OFFSET UNITYSDK_OFFSET(0x14B0F4E0)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_GET_PLATFORMBOUNDS_OFFSET UNITYSDK_OFFSET(0x14B0F4C0)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x14B0F7E0)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14B0F570)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0x14B0FEE0)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x14B0FE20)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_ONRESET_OFFSET UNITYSDK_OFFSET(0x14B0F780)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14B10220)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x14B0FB90)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_TRYGETNEXTCONTEXT_OFFSET UNITYSDK_OFFSET(0x14B11020)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_UPDATEMOVINGWALLCONTEXT_OFFSET UNITYSDK_OFFSET(0x14B10170)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_UPDATEMOVINGWALLS_OFFSET UNITYSDK_OFFSET(0x14B10DA0)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_UPDATEWALLBUILDERS_OFFSET UNITYSDK_OFFSET(0x14B10270)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x14B11380)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14B113A0)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x14B11430)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14B114C0)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x14B11550)

namespace MoleMole
{
	inline static constexpr unsigned int MovingWallSubsystem_TypeDefinitionIndex = 40930;

	class MovingWallSubsystem
	{
	public:
		::System::Collections::Generic::List_1<::JHNEKILCCAA*>* _contents; // 0x10
		::System::Collections::Generic::List_1<::FAMLNPCANNH*>* _movingWalls; // 0x18
		::System::Collections::Generic::List_1<::POHOEABNNII*>* _wallBuilders; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _entityIDToBuildIndex; // 0x28
		::System::Int32 _buildIndex; // 0x30
		::MoleMole::Vector2Int _baseSlotCount; // 0x34
		::UnityEngine::Vector2 _basePrecision; // 0x3C
		::UnityEngine::Bounds _platformBounds; // 0x44
		::System::Int32 _baseMaxHeightIndex; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::UnityEngine::Bounds get_PlatformBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_GET_PLATFORMBOUNDS_OFFSET))(this);
		}

		::POHOEABNNII* GetBuilder(::System::Int32 index)
		{
			return ((::POHOEABNNII*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_GETBUILDER_OFFSET))(this, index);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_ONRESET_OFFSET))(this);
		}

		::System::Void Initialize(::PLCEHIEOIBA* notify)
		{
			return ((::System::Void(*)(::PVOID, ::PLCEHIEOIBA*))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_INITIALIZE_OFFSET))(this, notify);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::ENGKPGFGGLM* evt)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnEntityReady(::MNKAABDAOKL* evt)
		{
			return ((::System::Void(*)(::PVOID, ::MNKAABDAOKL*))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_ONENTITYREADY_OFFSET))(this, evt);
		}

		static ::Cysharp::Threading::Tasks::UniTask UpdateMovingWallContext(::System::UInt32 entityID, ::JHNEKILCCAA* ctx)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::UInt32, ::JHNEKILCCAA*))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_UPDATEMOVINGWALLCONTEXT_OFFSET))(entityID, ctx);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void UpdateMovingWalls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_UPDATEMOVINGWALLS_OFFSET))(this);
		}

		::System::Void UpdateWallBuilders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_UPDATEWALLBUILDERS_OFFSET))(this);
		}

		::System::Boolean TryGetNextContext(::UnityEngine::Vector3 position, ::JHNEKILCCAA*& context, ::System::Single& distance)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::JHNEKILCCAA*&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_TRYGETNEXTCONTEXT_OFFSET))(this, position, context, distance);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::ENGKPGFGGLM* P0)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
