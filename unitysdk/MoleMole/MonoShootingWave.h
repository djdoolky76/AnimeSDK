#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class TextItalicAdobeStyle; }

#define MOLEMOLE_MONOSHOOTINGWAVE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18104B80)
#define MOLEMOLE_MONOSHOOTINGWAVE_KBAHBJIKMBL_OFFSET UNITYSDK_OFFSET(0x18104F50)
#define MOLEMOLE_MONOSHOOTINGWAVE_ONHNAKIJHNP_OFFSET UNITYSDK_OFFSET(0x18104E70)
#define MOLEMOLE_MONOSHOOTINGWAVE_SETTOTALWAVE_OFFSET UNITYSDK_OFFSET(0x18104BF0)
#define MOLEMOLE_MONOSHOOTINGWAVE_STARTNEXTWAVE_OFFSET UNITYSDK_OFFSET(0x18104CC0)
#define MOLEMOLE_MONOSHOOTINGWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x18104F00)

namespace MoleMole
{
	inline static constexpr unsigned int MonoShootingWave_TypeDefinitionIndex = 41143;

	class MonoShootingWave : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* progressBar; // 0x18
		::UnityEngine::UI::TextItalicAdobeStyle* current; // 0x20
		::UnityEngine::UI::TextItalicAdobeStyle* total; // 0x28
		::System::Int32 KIIOJMCLIAC; // 0x30
		::System::Byte _padding0[0x4];
		::UnityEngine::Coroutine* ECBJKOPOPLH; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOOTINGWAVE__CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOOTINGWAVE_INITIALIZE_OFFSET))(this);
		}

		::System::Void SetTotalWave(::System::Int32 APGPDBEEKMP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOOTINGWAVE_SETTOTALWAVE_OFFSET))(this, APGPDBEEKMP);
		}

		::System::Void StartNextWave(::System::Single FNIOPKPHDEH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOOTINGWAVE_STARTNEXTWAVE_OFFSET))(this, FNIOPKPHDEH);
		}

		::System::Collections::IEnumerator* ONHNAKIJHNP(::System::Single FNIOPKPHDEH)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOOTINGWAVE_ONHNAKIJHNP_OFFSET))(this, FNIOPKPHDEH);
		}

		::System::Void KBAHBJIKMBL(::System::Single PMGFIHJAJHL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOOTINGWAVE_KBAHBJIKMBL_OFFSET))(this, PMGFIHJAJHL);
		}
	};
}
