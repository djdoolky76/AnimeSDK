#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCGPFGCEADP.h"
#include "unitysdk/MLIFCMCBGNA.h"

namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIInterKnowCoursePointEndWidgetController; }
namespace System { class Action; }
namespace UnityEngine { class RectTransform; }

#define IMHGBLHOIFC_AJHNIGCCFGJ_OFFSET UNITYSDK_OFFSET(0x197DFD20)
#define IMHGBLHOIFC_BEMCFJAAMEE_OFFSET UNITYSDK_OFFSET(0x197DFF80)
#define IMHGBLHOIFC_CKLJJCLBAAG_OFFSET UNITYSDK_OFFSET(0x197DF7A0)
#define IMHGBLHOIFC_CLMCIIPGGBL_OFFSET UNITYSDK_OFFSET(0x197DFC10)
#define IMHGBLHOIFC_HOKCGBHKCGM_OFFSET UNITYSDK_OFFSET(0x197DFC90)
#define IMHGBLHOIFC_INCGPLAOBCA_OFFSET UNITYSDK_OFFSET(0x197DFDB0)
#define IMHGBLHOIFC_KFKOELBANFO_OFFSET UNITYSDK_OFFSET(0x197DF590)
#define IMHGBLHOIFC_LDDJMPPMIJM_OFFSET UNITYSDK_OFFSET(0x197DFE40)
#define IMHGBLHOIFC_NNDMOOBKHPM_OFFSET UNITYSDK_OFFSET(0x197DF970)
#define IMHGBLHOIFC_OAAILOOLPMK_OFFSET UNITYSDK_OFFSET(0x197DFED0)
#define IMHGBLHOIFC_PCLLKALDKCM_OFFSET UNITYSDK_OFFSET(0x197DFA50)
#define IMHGBLHOIFC_PLHMMBKCLNF_OFFSET UNITYSDK_OFFSET(0x197DF910)
#define IMHGBLHOIFC__CTOR_OFFSET UNITYSDK_OFFSET(0x197DFC80)

inline static constexpr unsigned int IMHGBLHOIFC_TypeDefinitionIndex = 77402;

class IMHGBLHOIFC : public ::GCGPFGCEADP
{
public:
	::MoleMole::UIInterKnowCoursePointEndWidgetController* JFKCMHNGGFO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHGBLHOIFC__CTOR_OFFSET))(this);
	}

	::System::Void KFKOELBANFO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHGBLHOIFC_KFKOELBANFO_OFFSET))(this);
	}

	::System::Void CKLJJCLBAAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHGBLHOIFC_CKLJJCLBAAG_OFFSET))(this);
	}

	::System::Void PLHMMBKCLNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHGBLHOIFC_PLHMMBKCLNF_OFFSET))(this);
	}

	::UnityEngine::RectTransform* NNDMOOBKHPM()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHGBLHOIFC_NNDMOOBKHPM_OFFSET))(this);
	}

	::MoleMole::MonoGamepadModule* PCLLKALDKCM()
	{
		return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHGBLHOIFC_PCLLKALDKCM_OFFSET))(this);
	}

	::System::Void CLMCIIPGGBL(::MLIFCMCBGNA JNHNJKFPCEE, ::System::Action* MGAKJHJAGJI)
	{
		return ((::System::Void(*)(::PVOID, ::MLIFCMCBGNA, ::System::Action*))((::PBYTE)hIl2Cpp + IMHGBLHOIFC_CLMCIIPGGBL_OFFSET))(this, JNHNJKFPCEE, MGAKJHJAGJI);
	}

	::System::Void HOKCGBHKCGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHGBLHOIFC_HOKCGBHKCGM_OFFSET))(this);
	}

	::System::Void AJHNIGCCFGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHGBLHOIFC_AJHNIGCCFGJ_OFFSET))(this);
	}

	::MoleMole::MonoGamepadModule* INCGPLAOBCA()
	{
		return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHGBLHOIFC_INCGPLAOBCA_OFFSET))(this);
	}

	::System::Void LDDJMPPMIJM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHGBLHOIFC_LDDJMPPMIJM_OFFSET))(this);
	}

	::System::Void OAAILOOLPMK(::MLIFCMCBGNA MIALFKCCCPI, ::System::Action* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MLIFCMCBGNA, ::System::Action*))((::PBYTE)hIl2Cpp + IMHGBLHOIFC_OAAILOOLPMK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::UnityEngine::RectTransform* BEMCFJAAMEE()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHGBLHOIFC_BEMCFJAAMEE_OFFSET))(this);
	}
};
