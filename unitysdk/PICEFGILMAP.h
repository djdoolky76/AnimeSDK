#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCGPFGCEADP.h"
#include "unitysdk/MLIFCMCBGNA.h"

namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIInterKnowCoursePoint01WidgetController; }
namespace System { class Action; }
namespace UnityEngine { class RectTransform; }

#define PICEFGILMAP_AJHNIGCCFGJ_OFFSET UNITYSDK_OFFSET(0x1555C190)
#define PICEFGILMAP_AKGPKDHHAMA_OFFSET UNITYSDK_OFFSET(0x1555BB90)
#define PICEFGILMAP_BEMCFJAAMEE_OFFSET UNITYSDK_OFFSET(0x1555C070)
#define PICEFGILMAP_CKLJJCLBAAG_OFFSET UNITYSDK_OFFSET(0x1555B9A0)
#define PICEFGILMAP_CLMCIIPGGBL_OFFSET UNITYSDK_OFFSET(0x1555BF50)
#define PICEFGILMAP_HOKCGBHKCGM_OFFSET UNITYSDK_OFFSET(0x1555C100)
#define PICEFGILMAP_INCGPLAOBCA_OFFSET UNITYSDK_OFFSET(0x1555C3F0)
#define PICEFGILMAP_KFKOELBANFO_OFFSET UNITYSDK_OFFSET(0x1555B790)
#define PICEFGILMAP_LDDJMPPMIJM_OFFSET UNITYSDK_OFFSET(0x1555C220)
#define PICEFGILMAP_MNEMJJADNFN_OFFSET UNITYSDK_OFFSET(0x1555C2B0)
#define PICEFGILMAP_NNDMOOBKHPM_OFFSET UNITYSDK_OFFSET(0x1555BCB0)
#define PICEFGILMAP_OAAILOOLPMK_OFFSET UNITYSDK_OFFSET(0x1555C340)
#define PICEFGILMAP_PCLLKALDKCM_OFFSET UNITYSDK_OFFSET(0x1555BD90)
#define PICEFGILMAP_PLHMMBKCLNF_OFFSET UNITYSDK_OFFSET(0x1555BC50)
#define PICEFGILMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1555C060)

inline static constexpr unsigned int PICEFGILMAP_TypeDefinitionIndex = 89001;

class PICEFGILMAP : public ::GCGPFGCEADP
{
public:
	::MoleMole::UIInterKnowCoursePoint01WidgetController* JFKCMHNGGFO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICEFGILMAP__CTOR_OFFSET))(this);
	}

	::System::Void KFKOELBANFO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICEFGILMAP_KFKOELBANFO_OFFSET))(this);
	}

	::System::Void CKLJJCLBAAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICEFGILMAP_CKLJJCLBAAG_OFFSET))(this);
	}

	::System::Void PLHMMBKCLNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICEFGILMAP_PLHMMBKCLNF_OFFSET))(this);
	}

	::UnityEngine::RectTransform* NNDMOOBKHPM()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICEFGILMAP_NNDMOOBKHPM_OFFSET))(this);
	}

	::MoleMole::MonoGamepadModule* PCLLKALDKCM()
	{
		return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICEFGILMAP_PCLLKALDKCM_OFFSET))(this);
	}

	::System::Void AKGPKDHHAMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICEFGILMAP_AKGPKDHHAMA_OFFSET))(this);
	}

	::System::Void CLMCIIPGGBL(::MLIFCMCBGNA JNHNJKFPCEE, ::System::Action* MGAKJHJAGJI)
	{
		return ((::System::Void(*)(::PVOID, ::MLIFCMCBGNA, ::System::Action*))((::PBYTE)hIl2Cpp + PICEFGILMAP_CLMCIIPGGBL_OFFSET))(this, JNHNJKFPCEE, MGAKJHJAGJI);
	}

	::UnityEngine::RectTransform* BEMCFJAAMEE()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICEFGILMAP_BEMCFJAAMEE_OFFSET))(this);
	}

	::System::Void HOKCGBHKCGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICEFGILMAP_HOKCGBHKCGM_OFFSET))(this);
	}

	::System::Void AJHNIGCCFGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICEFGILMAP_AJHNIGCCFGJ_OFFSET))(this);
	}

	::System::Void LDDJMPPMIJM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICEFGILMAP_LDDJMPPMIJM_OFFSET))(this);
	}

	::System::Void MNEMJJADNFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICEFGILMAP_MNEMJJADNFN_OFFSET))(this);
	}

	::System::Void OAAILOOLPMK(::MLIFCMCBGNA MIALFKCCCPI, ::System::Action* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MLIFCMCBGNA, ::System::Action*))((::PBYTE)hIl2Cpp + PICEFGILMAP_OAAILOOLPMK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::MoleMole::MonoGamepadModule* INCGPLAOBCA()
	{
		return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICEFGILMAP_INCGPLAOBCA_OFFSET))(this);
	}
};
