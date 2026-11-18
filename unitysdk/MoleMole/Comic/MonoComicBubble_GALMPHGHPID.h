#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace MoleMole::Comic { class MonoComicBubble; }

#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_GALMPHGHPID_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xFFC42A0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_GALMPHGHPID_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFFC4AE0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_GALMPHGHPID_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xFFC4B40)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_GALMPHGHPID_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xFFC4AF0)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_GALMPHGHPID_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFFC4290)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_GALMPHGHPID__CTOR_OFFSET UNITYSDK_OFFSET(0xFFC4280)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int MonoComicBubble_GALMPHGHPID_TypeDefinitionIndex = 70228;

	class MonoComicBubble_GALMPHGHPID : public ::System::Object
	{
	public:
		::MoleMole::Comic::MonoComicBubble* KLHPEBKNIFB; // 0x10
		::UnityEngine::Rect BAACKDOGNFK; // 0x18
		::System::Int32 MDPILDGFNHN; // 0x28
		::System::Single IDBEJJEKGDI; // 0x2C

		::System::Void _ctor(::System::Int32 MDPILDGFNHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_GALMPHGHPID__CTOR_OFFSET))(this, MDPILDGFNHN);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_GALMPHGHPID_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_GALMPHGHPID_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_GALMPHGHPID_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_GALMPHGHPID_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_GALMPHGHPID_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
