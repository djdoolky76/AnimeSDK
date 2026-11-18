#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define PNGMINLMGAN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1CB57050)
#define PNGMINLMGAN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1CB56E90)
#define PNGMINLMGAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB57040)

inline static constexpr unsigned int PNGMINLMGAN_TypeDefinitionIndex = 43574;

class PNGMINLMGAN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* NGHDOKEOMNI; // 0x18
	::MoleMole::MonoGamepadModule* ABKNKLPEDAG; // 0x20
	::UnityEngine::RectTransform* OANJIEFOEOF; // 0x28
	::UnityEngine::RectTransform* FDOGGANACAP; // 0x30
	::UnityEngine::RectTransform* KHGAOBFLHHN; // 0x38
	::UnityEngine::RectTransform* IIJMDMONHPJ; // 0x40
	::UnityEngine::RectTransform* PMCNDKMMFDG; // 0x48
	::UnityEngine::RectTransform* CNINGOOJECG; // 0x50
	::UnityEngine::Transform* OMKKKALAKHL; // 0x58
	::UnityEngine::RectTransform* BCNACFEHFCO; // 0x60
	::UnityEngine::RectTransform* NBGIAADCHII; // 0x68
	::UnityEngine::RectTransform* NEBEGGPNHBC; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGMINLMGAN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PNGMINLMGAN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PNGMINLMGAN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
