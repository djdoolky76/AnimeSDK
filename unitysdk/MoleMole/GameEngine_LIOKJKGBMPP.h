#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_GAMEENGINE_LIOKJKGBMPP_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1191C9A0)
#define MOLEMOLE_GAMEENGINE_LIOKJKGBMPP_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1191C9F0)
#define MOLEMOLE_GAMEENGINE_LIOKJKGBMPP_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1191CA50)
#define MOLEMOLE_GAMEENGINE_LIOKJKGBMPP_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1191CA00)
#define MOLEMOLE_GAMEENGINE_LIOKJKGBMPP_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1191C990)
#define MOLEMOLE_GAMEENGINE_LIOKJKGBMPP__CTOR_OFFSET UNITYSDK_OFFSET(0x1191C980)

namespace MoleMole
{
	inline static constexpr unsigned int GameEngine_LIOKJKGBMPP_TypeDefinitionIndex = 81900;

	class GameEngine_LIOKJKGBMPP : public ::System::Object
	{
	public:
		::System::Object* IDBEJJEKGDI; // 0x10
		::System::Int32 MDPILDGFNHN; // 0x18

		::System::Void _ctor(::System::Int32 MDPILDGFNHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_LIOKJKGBMPP__CTOR_OFFSET))(this, MDPILDGFNHN);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_LIOKJKGBMPP_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_LIOKJKGBMPP_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_LIOKJKGBMPP_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_LIOKJKGBMPP_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_LIOKJKGBMPP_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
