#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNPDLOAJCHO.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_CLEARACTIVEREGISTRATION_OFFSET UNITYSDK_OFFSET(0x19085950)
#define MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_CLEARBATTLEPHOTOTARGETGROUP_OFFSET UNITYSDK_OFFSET(0x190859E0)
#define MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x19085740)
#define MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x190857B0)
#define MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_REGISTER_OFFSET UNITYSDK_OFFSET(0x19085AA0)
#define MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_UNREGISTER_1_OFFSET UNITYSDK_OFFSET(0x19085F20)
#define MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x19085D60)
#define MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x190860E0)
#define MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x19086140)
#define MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x190861D0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneBattlePhotoSubsystem_TypeDefinitionIndex = 64075;

	class BigSceneBattlePhotoSubsystem
	{
	public:
		::System::UInt32 _activeIdentifier; // 0x10
		::PNPDLOAJCHO _activeHandle; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::PNPDLOAJCHO Register(::System::UInt32 identifier, ::System::Collections::Generic::List_1<::System::Int32>* targetGroupID)
		{
			return ((::PNPDLOAJCHO(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_REGISTER_OFFSET))(this, identifier, targetGroupID);
		}

		::System::Void Unregister(::PNPDLOAJCHO handle)
		{
			return ((::System::Void(*)(::PVOID, ::PNPDLOAJCHO))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_UNREGISTER_OFFSET))(this, handle);
		}

		::System::Void Unregister_1(::System::UInt32 identifier)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_UNREGISTER_1_OFFSET))(this, identifier);
		}

		::System::Void ClearActiveRegistration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_CLEARACTIVEREGISTRATION_OFFSET))(this);
		}

		static ::System::Void ClearBattlePhotoTargetGroup()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM_CLEARBATTLEPHOTOTARGETGROUP_OFFSET))();
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBATTLEPHOTOSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
