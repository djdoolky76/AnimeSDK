#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class DONGCBIGJJL_ILEMPJLMFNO;
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define DONGCBIGJJL_IOPCOAAIHIC_CEIGKGMPFAO_OFFSET UNITYSDK_OFFSET(0x106100E0)
#define DONGCBIGJJL_IOPCOAAIHIC_GNDMHPGPFMJ_OFFSET UNITYSDK_OFFSET(0x106102C0)
#define DONGCBIGJJL_IOPCOAAIHIC_PHBGOHCKDDD_OFFSET UNITYSDK_OFFSET(0x10610090)
#define DONGCBIGJJL_IOPCOAAIHIC__CTOR_OFFSET UNITYSDK_OFFSET(0x10610080)

inline static constexpr unsigned int DONGCBIGJJL_IOPCOAAIHIC_TypeDefinitionIndex = 70489;

class DONGCBIGJJL_IOPCOAAIHIC : public ::System::Object
{
public:
	::UnityEngine::UI::Extension::UITabButton* LMHNJIBCLJF; // 0x10
	::DONGCBIGJJL_ILEMPJLMFNO* FGBNBFHOKAA; // 0x18
	::UnityEngine::RectTransform* FIIGIIEMHLL; // 0x20
	::UnityEngine::Camera* LLFDABJAHII; // 0x28
	::System::Int32 FBKGFLADIDE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_IOPCOAAIHIC__CTOR_OFFSET))(this);
	}

	::System::Void PHBGOHCKDDD(::System::Int32 LAEAPNOOHIF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DONGCBIGJJL_IOPCOAAIHIC_PHBGOHCKDDD_OFFSET))(this, LAEAPNOOHIF);
	}

	::System::Boolean CEIGKGMPFAO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DONGCBIGJJL_IOPCOAAIHIC_CEIGKGMPFAO_OFFSET))(this);
	}

	::System::Void GNDMHPGPFMJ(::UnityEngine::Vector2 MKHLBMMKCJL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + DONGCBIGJJL_IOPCOAAIHIC_GNDMHPGPFMJ_OFFSET))(this, MKHLBMMKCJL);
	}
};
