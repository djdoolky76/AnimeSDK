#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoDynamicObjectVoxel; }
namespace MoleMole { class MonoTerrainZoneVoxel; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_MONODYNAMICOBJECTVOXEL_AODFJAPIOMC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x180F9DE0)
#define MOLEMOLE_MONODYNAMICOBJECTVOXEL_AODFJAPIOMC_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x180FA000)
#define MOLEMOLE_MONODYNAMICOBJECTVOXEL_AODFJAPIOMC_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x180FA060)
#define MOLEMOLE_MONODYNAMICOBJECTVOXEL_AODFJAPIOMC_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x180FA010)
#define MOLEMOLE_MONODYNAMICOBJECTVOXEL_AODFJAPIOMC_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x180F9DD0)
#define MOLEMOLE_MONODYNAMICOBJECTVOXEL_AODFJAPIOMC__CTOR_OFFSET UNITYSDK_OFFSET(0x180F9DC0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDynamicObjectVoxel_AODFJAPIOMC_TypeDefinitionIndex = 78975;

	class MonoDynamicObjectVoxel_AODFJAPIOMC : public ::System::Object
	{
	public:
		::MoleMole::MonoDynamicObjectVoxel* KLHPEBKNIFB; // 0x10
		::System::Action_1<::MoleMole::MonoTerrainZoneVoxel*>* EJGDHCIBCJH; // 0x18
		::System::Object* IDBEJJEKGDI; // 0x20
		::System::Int32 MDPILDGFNHN; // 0x28

		::System::Void _ctor(::System::Int32 MDPILDGFNHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODYNAMICOBJECTVOXEL_AODFJAPIOMC__CTOR_OFFSET))(this, MDPILDGFNHN);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODYNAMICOBJECTVOXEL_AODFJAPIOMC_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODYNAMICOBJECTVOXEL_AODFJAPIOMC_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODYNAMICOBJECTVOXEL_AODFJAPIOMC_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODYNAMICOBJECTVOXEL_AODFJAPIOMC_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODYNAMICOBJECTVOXEL_AODFJAPIOMC_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
