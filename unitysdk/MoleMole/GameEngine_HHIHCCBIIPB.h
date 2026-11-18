#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class GameEngine; }

#define MOLEMOLE_GAMEENGINE_HHIHCCBIIPB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x12B46790)
#define MOLEMOLE_GAMEENGINE_HHIHCCBIIPB_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12B46BC0)
#define MOLEMOLE_GAMEENGINE_HHIHCCBIIPB_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12B46C20)
#define MOLEMOLE_GAMEENGINE_HHIHCCBIIPB_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x12B46BD0)
#define MOLEMOLE_GAMEENGINE_HHIHCCBIIPB_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12B46780)
#define MOLEMOLE_GAMEENGINE_HHIHCCBIIPB__CTOR_OFFSET UNITYSDK_OFFSET(0x12B46770)

namespace MoleMole
{
	inline static constexpr unsigned int GameEngine_HHIHCCBIIPB_TypeDefinitionIndex = 81902;

	class GameEngine_HHIHCCBIIPB : public ::System::Object
	{
	public:
		::System::Object* IDBEJJEKGDI; // 0x10
		::MoleMole::GameEngine* KLHPEBKNIFB; // 0x18
		::System::Int32 MDPILDGFNHN; // 0x20

		::System::Void _ctor(::System::Int32 MDPILDGFNHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_HHIHCCBIIPB__CTOR_OFFSET))(this, MDPILDGFNHN);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_HHIHCCBIIPB_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_HHIHCCBIIPB_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_HHIHCCBIIPB_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_HHIHCCBIIPB_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_HHIHCCBIIPB_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
