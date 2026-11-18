#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoHintArrow_CDNDPKANLLG.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class MonoRenderHandler; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_MONOHINTARROW_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A91C310)
#define MOLEMOLE_MONOHINTARROW_BEACODPMAPH_OFFSET UNITYSDK_OFFSET(0x1A91C1A0)
#define MOLEMOLE_MONOHINTARROW_FADCCCAOMKN_OFFSET UNITYSDK_OFFSET(0x1A91C650)
#define MOLEMOLE_MONOHINTARROW_GET_MASKED_OFFSET UNITYSDK_OFFSET(0x1A91C300)
#define MOLEMOLE_MONOHINTARROW_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1A91C130)
#define MOLEMOLE_MONOHINTARROW_IINPBNFMMLO_OFFSET UNITYSDK_OFFSET(0x1A91C5C0)
#define MOLEMOLE_MONOHINTARROW_INCKLHFPANH_OFFSET UNITYSDK_OFFSET(0x1A91C6F0)
#define MOLEMOLE_MONOHINTARROW_SET_MASKED_OFFSET UNITYSDK_OFFSET(0x1A91C140)
#define MOLEMOLE_MONOHINTARROW_START_OFFSET UNITYSDK_OFFSET(0x1A91C4E0)
#define MOLEMOLE_MONOHINTARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A91C530)

namespace MoleMole
{
	inline static constexpr unsigned int MonoHintArrow_TypeDefinitionIndex = 38615;

	class MonoHintArrow : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Renderer*>* MIBMIBAMHDE; // 0x18
		::UnityEngine::Animation* EEFOCCNFJCO; // 0x20
		::System::String* fadeInAnimName; // 0x28
		::System::String* fadeOutAnimName; // 0x30
		::UnityEngine::Coroutine* GHBIGKKBCKE; // 0x38
		::MoleMole::MonoRenderHandler* PLJJFDBNAIN; // 0x40
		::MoleMole::MonoHintArrow_CDNDPKANLLG BOHBDHAPLDN; // 0x48
		::System::Boolean BIFAOBHKCMH; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW__CTOR_OFFSET))(this);
		}

		::MoleMole::MonoHintArrow_CDNDPKANLLG get_state()
		{
			return ((::MoleMole::MonoHintArrow_CDNDPKANLLG(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_GET_STATE_OFFSET))(this);
		}

		::System::Void set_masked(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_SET_MASKED_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Boolean get_masked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_GET_MASKED_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_START_OFFSET))(this);
		}

		::System::Collections::IEnumerator* IINPBNFMMLO(::System::Boolean MBJDMKCGOCK)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_IINPBNFMMLO_OFFSET))(this, MBJDMKCGOCK);
		}

		::System::Void BEACODPMAPH(::System::Boolean PADJNMGMGHO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_BEACODPMAPH_OFFSET))(this, PADJNMGMGHO);
		}

		::System::Void FADCCCAOMKN(::System::Boolean FBILHHBPEHD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_FADCCCAOMKN_OFFSET))(this, FBILHHBPEHD);
		}

		::System::Void INCKLHFPANH(::System::Boolean MBJDMKCGOCK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHINTARROW_INCKLHFPANH_OFFSET))(this, MBJDMKCGOCK);
		}
	};
}
