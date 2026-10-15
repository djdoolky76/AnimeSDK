#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MODELUI3DMODECONSTRAINT_AWAKE_OFFSET UNITYSDK_OFFSET(0xD71FD70)
#define RPG_CLIENT_MODELUI3DMODECONSTRAINT_CTOR_OFFSET UNITYSDK_OFFSET(0xD720F80)
#define RPG_CLIENT_MODELUI3DMODECONSTRAINT_INIT_OFFSET UNITYSDK_OFFSET(0xD720580)
#define RPG_CLIENT_MODELUI3DMODECONSTRAINT_LOGICUPDATE_OFFSET UNITYSDK_OFFSET(0xD720960)
#define RPG_CLIENT_MODELUI3DMODECONSTRAINT_PLCIFBKLJIP_OFFSET UNITYSDK_OFFSET(0xD7200A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ModelUI3DModeConstraint_TypeDefinitionIndex = 68510;

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
