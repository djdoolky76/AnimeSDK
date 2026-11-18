#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JNAHOHABAIC;
class KMFEHCAOKFN;
namespace MoleMole { class UIInterKnowCoursePanelWidgetController; }
namespace UnityEngine { class RectTransform; }

#define PFLAMNJJMMC_DNPPNBIKAKF_OFFSET UNITYSDK_OFFSET(0x136FA450)
#define PFLAMNJJMMC__CTOR_OFFSET UNITYSDK_OFFSET(0x136FA440)

inline static constexpr unsigned int PFLAMNJJMMC_TypeDefinitionIndex = 40260;

class PFLAMNJJMMC : public ::System::Object
{
public:
	::KMFEHCAOKFN* BONMJCECLAH; // 0x10
	::UnityEngine::RectTransform* BFKIBGALPAN; // 0x18
	::UnityEngine::RectTransform* NPKMJMKEOLA; // 0x20
	::MoleMole::UIInterKnowCoursePanelWidgetController* NBAIHDFCBBF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFLAMNJJMMC__CTOR_OFFSET))(this);
	}

	::System::Void DNPPNBIKAKF(::JNAHOHABAIC* JPAECKGGPHI)
	{
		return ((::System::Void(*)(::PVOID, ::JNAHOHABAIC*))((::PBYTE)hIl2Cpp + PFLAMNJJMMC_DNPPNBIKAKF_OFFSET))(this, JPAECKGGPHI);
	}
};
