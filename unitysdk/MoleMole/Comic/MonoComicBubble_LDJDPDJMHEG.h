#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Comic { class MonoComicBubble; }
namespace UnityEngine::Timeline { class BubbleEvent; }

#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_LDJDPDJMHEG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19224D80)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_LDJDPDJMHEG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19225020)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_LDJDPDJMHEG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19225080)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_LDJDPDJMHEG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19225030)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_LDJDPDJMHEG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19224D70)
#define MOLEMOLE_COMIC_MONOCOMICBUBBLE_LDJDPDJMHEG__CTOR_OFFSET UNITYSDK_OFFSET(0x19224D60)

namespace MoleMole::Comic
{
	inline static constexpr unsigned int MonoComicBubble_LDJDPDJMHEG_TypeDefinitionIndex = 70226;

	class MonoComicBubble_LDJDPDJMHEG : public ::System::Object
	{
	public:
		::UnityEngine::Timeline::BubbleEvent* JMFDEBNELJA; // 0x10
		::MoleMole::Comic::MonoComicBubble* KLHPEBKNIFB; // 0x18
		::System::Int32 MDPILDGFNHN; // 0x20
		::System::Single IDBEJJEKGDI; // 0x24

		::System::Void _ctor(::System::Int32 MDPILDGFNHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_LDJDPDJMHEG__CTOR_OFFSET))(this, MDPILDGFNHN);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_LDJDPDJMHEG_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_LDJDPDJMHEG_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_LDJDPDJMHEG_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_LDJDPDJMHEG_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMIC_MONOCOMICBUBBLE_LDJDPDJMHEG_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
