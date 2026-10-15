#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MODELUI3DMODECONSTRAINT_AWAKE_OFFSET UNITYSDK_OFFSET(0xD7295B0)
#define RPG_CLIENT_MODELUI3DMODECONSTRAINT_CTOR_OFFSET UNITYSDK_OFFSET(0xD72A7C0)
#define RPG_CLIENT_MODELUI3DMODECONSTRAINT_INIT_OFFSET UNITYSDK_OFFSET(0xD729DC0)
#define RPG_CLIENT_MODELUI3DMODECONSTRAINT_LOGICUPDATE_OFFSET UNITYSDK_OFFSET(0xD72A1A0)
#define RPG_CLIENT_MODELUI3DMODECONSTRAINT_PLCIFBKLJIP_OFFSET UNITYSDK_OFFSET(0xD7298E0)

namespace RPG::Client
{
	class ModelUI3DModeConstraint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* RotateScopeShaderTransitionsConfig; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* KOOKKANDPEJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MODELUI3DMODECONSTRAINT_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MODELUI3DMODECONSTRAINT_AWAKE_OFFSET))(this);
		}

		::System::Void PLCIFBKLJIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MODELUI3DMODECONSTRAINT_PLCIFBKLJIP_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MODELUI3DMODECONSTRAINT_INIT_OFFSET))(this);
		}

		::System::Void LogicUpdate(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MODELUI3DMODECONSTRAINT_LOGICUPDATE_OFFSET))(this, a1, a2);
		}

	};
}
