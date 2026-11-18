#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define DLBOKACBENI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1834A140)
#define DLBOKACBENI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18349F80)
#define DLBOKACBENI__CTOR_OFFSET UNITYSDK_OFFSET(0x1834A130)

inline static constexpr unsigned int DLBOKACBENI_TypeDefinitionIndex = 80017;

class DLBOKACBENI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* MGEJBEMACOK; // 0x18
	::UnityEngine::RectTransform* PNDMAPODBPJ; // 0x20
	::UnityEngine::GameObject* OLLEHOJAOGN; // 0x28
	::UnityEngine::Transform* AEGAPMOGAIO; // 0x30
	::UnityEngine::GameObject* BCICLODOJIM; // 0x38
	::UnityEngine::GameObject* NKNJMNBFFJC; // 0x40
	::UnityEngine::Transform* ENOBIPDGINN; // 0x48
	::UnityEngine::GameObject* FIOPMNMJBCG; // 0x50
	::UnityEngine::UI::Text* PAAGDDDGPAA; // 0x58
	::UnityEngine::UI::Text* KAGMIOALCFO; // 0x60
	::UnityEngine::RectTransform* KEKAEMFHKOA; // 0x68
	::UnityEngine::RectTransform* OOENDNEIFDO; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBOKACBENI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DLBOKACBENI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DLBOKACBENI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
