#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ISINSCENETAGS_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A90AAC0)
#define MOLEMOLE_ISINSCENETAGS_ONRESET_OFFSET UNITYSDK_OFFSET(0x1A90ACB0)
#define MOLEMOLE_ISINSCENETAGS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A90AC10)
#define MOLEMOLE_ISINSCENETAGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A90ACF0)
#define MOLEMOLE_ISINSCENETAGS___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A90AD80)
#define MOLEMOLE_ISINSCENETAGS___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1A90AE10)
#define MOLEMOLE_ISINSCENETAGS___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A90AEA0)

namespace MoleMole
{
	inline static constexpr unsigned int IsInSceneTags_TypeDefinitionIndex = 55478;

	class IsInSceneTags : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::MoleMole::Battle::Entity* _ownerEntity; // 0x50
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* Tags; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ISINSCENETAGS__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ISINSCENETAGS_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ISINSCENETAGS_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ISINSCENETAGS_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ISINSCENETAGS___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ISINSCENETAGS___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ISINSCENETAGS___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
