#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOAPJDMMEDC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xFA7A030)
#define MOAPJDMMEDC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xFA79ED0)
#define MOAPJDMMEDC__CTOR_OFFSET UNITYSDK_OFFSET(0xFA7A020)

inline static constexpr unsigned int MOAPJDMMEDC_TypeDefinitionIndex = 55690;

class MOAPJDMMEDC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x18
	::UnityEngine::UI::Text* PCHCJJGKKKA; // 0x20
	::UnityEngine::UI::Extension::UIButtonEx* KHOJKFHFKIJ; // 0x28
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x30
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x38
	::UnityEngine::GameObject* LKCPFCFFILO; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x48
	::UnityEngine::GameObject* GMABNNKNIIF; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOAPJDMMEDC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MOAPJDMMEDC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MOAPJDMMEDC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
