#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCNGDMKEFIB.h"

namespace MoleMole { class NotificationBadgeEx; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FFHNOPCNEAH_BBAOGHKCCAI__CTOR_OFFSET UNITYSDK_OFFSET(0x116AD6B0)

inline static constexpr unsigned int FFHNOPCNEAH_BBAOGHKCCAI_TypeDefinitionIndex = 67062;

class FFHNOPCNEAH_BBAOGHKCCAI : public ::DCNGDMKEFIB
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x18
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHNOPCNEAH_BBAOGHKCCAI__CTOR_OFFSET))(this);
	}
};
