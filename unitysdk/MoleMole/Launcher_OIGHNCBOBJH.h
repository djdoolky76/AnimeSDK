#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class Launcher; }

#define MOLEMOLE_LAUNCHER_OIGHNCBOBJH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14AEF480)
#define MOLEMOLE_LAUNCHER_OIGHNCBOBJH_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14AEF580)
#define MOLEMOLE_LAUNCHER_OIGHNCBOBJH_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14AEF5E0)
#define MOLEMOLE_LAUNCHER_OIGHNCBOBJH_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x14AEF590)
#define MOLEMOLE_LAUNCHER_OIGHNCBOBJH_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14AEF470)
#define MOLEMOLE_LAUNCHER_OIGHNCBOBJH__CTOR_OFFSET UNITYSDK_OFFSET(0x14AEF460)

namespace MoleMole
{
	inline static constexpr unsigned int Launcher_OIGHNCBOBJH_TypeDefinitionIndex = 40906;

	class Launcher_OIGHNCBOBJH : public ::System::Object
	{
	public:
		::MoleMole::Launcher* KLHPEBKNIFB; // 0x10
		::System::Int32 MDPILDGFNHN; // 0x18
		::System::Single IDBEJJEKGDI; // 0x1C

		::System::Void _ctor(::System::Int32 MDPILDGFNHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_OIGHNCBOBJH__CTOR_OFFSET))(this, MDPILDGFNHN);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_OIGHNCBOBJH_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_OIGHNCBOBJH_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_OIGHNCBOBJH_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_OIGHNCBOBJH_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_OIGHNCBOBJH_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
