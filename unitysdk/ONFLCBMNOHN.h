#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCGPFGCEADP.h"
#include "unitysdk/MLIFCMCBGNA.h"

namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIInterKnowCoursePointStayTunedWidgetController; }
namespace System { class Action; }
namespace UnityEngine { class RectTransform; }

#define ONFLCBMNOHN_AJHNIGCCFGJ_OFFSET UNITYSDK_OFFSET(0xE164BE0)
#define ONFLCBMNOHN_BEMCFJAAMEE_OFFSET UNITYSDK_OFFSET(0xE164B50)
#define ONFLCBMNOHN_CKLJJCLBAAG_OFFSET UNITYSDK_OFFSET(0xE164520)
#define ONFLCBMNOHN_CLMCIIPGGBL_OFFSET UNITYSDK_OFFSET(0xE164900)
#define ONFLCBMNOHN_HOKCGBHKCGM_OFFSET UNITYSDK_OFFSET(0xE164C70)
#define ONFLCBMNOHN_INCGPLAOBCA_OFFSET UNITYSDK_OFFSET(0xE164A10)
#define ONFLCBMNOHN_KFKOELBANFO_OFFSET UNITYSDK_OFFSET(0xE164270)
#define ONFLCBMNOHN_LDDJMPPMIJM_OFFSET UNITYSDK_OFFSET(0xE164980)
#define ONFLCBMNOHN_NNDMOOBKHPM_OFFSET UNITYSDK_OFFSET(0xE164660)
#define ONFLCBMNOHN_OAAILOOLPMK_OFFSET UNITYSDK_OFFSET(0xE164AA0)
#define ONFLCBMNOHN_PCLLKALDKCM_OFFSET UNITYSDK_OFFSET(0xE164740)
#define ONFLCBMNOHN_PLHMMBKCLNF_OFFSET UNITYSDK_OFFSET(0xE164600)
#define ONFLCBMNOHN__CTOR_OFFSET UNITYSDK_OFFSET(0xE164970)

inline static constexpr unsigned int ONFLCBMNOHN_TypeDefinitionIndex = 57890;

class ONFLCBMNOHN : public ::GCGPFGCEADP
{
public:
	::MoleMole::UIInterKnowCoursePointStayTunedWidgetController* JFKCMHNGGFO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFLCBMNOHN__CTOR_OFFSET))(this);
	}

	::System::Void KFKOELBANFO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFLCBMNOHN_KFKOELBANFO_OFFSET))(this);
	}

	::System::Void CKLJJCLBAAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFLCBMNOHN_CKLJJCLBAAG_OFFSET))(this);
	}

	::System::Void PLHMMBKCLNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFLCBMNOHN_PLHMMBKCLNF_OFFSET))(this);
	}

	::UnityEngine::RectTransform* NNDMOOBKHPM()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFLCBMNOHN_NNDMOOBKHPM_OFFSET))(this);
	}

	::MoleMole::MonoGamepadModule* PCLLKALDKCM()
	{
		return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFLCBMNOHN_PCLLKALDKCM_OFFSET))(this);
	}

	::System::Void CLMCIIPGGBL(::MLIFCMCBGNA JNHNJKFPCEE, ::System::Action* MGAKJHJAGJI)
	{
		return ((::System::Void(*)(::PVOID, ::MLIFCMCBGNA, ::System::Action*))((::PBYTE)hIl2Cpp + ONFLCBMNOHN_CLMCIIPGGBL_OFFSET))(this, JNHNJKFPCEE, MGAKJHJAGJI);
	}

	::System::Void LDDJMPPMIJM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFLCBMNOHN_LDDJMPPMIJM_OFFSET))(this);
	}

	::MoleMole::MonoGamepadModule* INCGPLAOBCA()
	{
		return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFLCBMNOHN_INCGPLAOBCA_OFFSET))(this);
	}

	::System::Void OAAILOOLPMK(::MLIFCMCBGNA MIALFKCCCPI, ::System::Action* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::MLIFCMCBGNA, ::System::Action*))((::PBYTE)hIl2Cpp + ONFLCBMNOHN_OAAILOOLPMK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::UnityEngine::RectTransform* BEMCFJAAMEE()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFLCBMNOHN_BEMCFJAAMEE_OFFSET))(this);
	}

	::System::Void AJHNIGCCFGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFLCBMNOHN_AJHNIGCCFGJ_OFFSET))(this);
	}

	::System::Void HOKCGBHKCGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFLCBMNOHN_HOKCGBHKCGM_OFFSET))(this);
	}
};
