#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"

namespace MoleMole { class SceneObjectStateWidget; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define PDNJFBJJDGB_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x11963510)
#define PDNJFBJJDGB_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x11963390)
#define PDNJFBJJDGB__CTOR_OFFSET UNITYSDK_OFFSET(0x11963220)

inline static constexpr unsigned int PDNJFBJJDGB_TypeDefinitionIndex = 78380;

class PDNJFBJJDGB : public ::KBGGKIJMICI
{
public:
	::UnityEngine::GameObject* FFHNMDNPGMC; // 0x38
	::MoleMole::SceneObjectStateWidget* MNOMCCLBJAO; // 0x40
	::System::Int32 FHEOKJNBHCG; // 0x48
	::System::Single BDEDDEGJFKL; // 0x4C

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + PDNJFBJJDGB__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNJFBJJDGB_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNJFBJJDGB_CMFOMGGDPPA_OFFSET))(this);
	}
};
