#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterIDType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOSPAWNMONSTERCONFIG_EMPTY_OFFSET UNITYSDK_OFFSET(0x1469CD40)
#define MOLEMOLE_MONOSPAWNMONSTERCONFIG_GETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x1469CE50)
#define MOLEMOLE_MONOSPAWNMONSTERCONFIG_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1469D090)
#define MOLEMOLE_MONOSPAWNMONSTERCONFIG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1469CF80)
#define MOLEMOLE_MONOSPAWNMONSTERCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1469D270)
#define MOLEMOLE_MONOSPAWNMONSTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1469D210)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSpawnMonsterConfig_TypeDefinitionIndex = 65914;

	class MonoSpawnMonsterConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoSpawnMonsterConfig*>** StaticGet_MBNFHLPNEJH()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoSpawnMonsterConfig*>**)Il2CppClass::FromTypeDefinitionIndex(MonoSpawnMonsterConfig_TypeDefinitionIndex)->GetStaticField(0x4C190);
		}
		::MoleMole::FlowCanvas::Nodes::MonsterIDType idType; // 0x18
		::System::Int32 monsterId; // 0x1C
		::MoleMole::Config::CampType camp; // 0x20
		::System::Int32 aiId; // 0x24
		::System::String* monsterName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPAWNMONSTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPAWNMONSTERCONFIG__CCTOR_OFFSET))();
		}

		static ::System::Void Empty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPAWNMONSTERCONFIG_EMPTY_OFFSET))();
		}

		static ::MoleMole::MonoSpawnMonsterConfig* GetComponentSafely(::System::Int32 HLJEFIIDMFA)
		{
			return ((::MoleMole::MonoSpawnMonsterConfig*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPAWNMONSTERCONFIG_GETCOMPONENTSAFELY_OFFSET))(HLJEFIIDMFA);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPAWNMONSTERCONFIG_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPAWNMONSTERCONFIG_ONDISABLE_OFFSET))(this);
		}
	};
}
