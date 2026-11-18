#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LFFAEGKECCH;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KBGJIFJAAMN_GFJCNOEFBBD_GET_ANIM_OFFSET UNITYSDK_OFFSET(0x176EA5A0)
#define KBGJIFJAAMN_GFJCNOEFBBD_GET_NUM_OFFSET UNITYSDK_OFFSET(0x176EA580)
#define KBGJIFJAAMN_GFJCNOEFBBD_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x176EA5B0)
#define KBGJIFJAAMN_GFJCNOEFBBD__CTOR_OFFSET UNITYSDK_OFFSET(0x176EA5D0)

inline static constexpr unsigned int KBGJIFJAAMN_GFJCNOEFBBD_TypeDefinitionIndex = 77107;

class KBGJIFJAAMN_GFJCNOEFBBD : public ::System::Object
{
public:
	::LFFAEGKECCH* KMMKMGDHCOI; // 0x10

	::System::Void _ctor(::LFFAEGKECCH* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::LFFAEGKECCH*))((::PBYTE)hIl2Cpp + KBGJIFJAAMN_GFJCNOEFBBD__CTOR_OFFSET))(this, AEJAMJDBHAM);
	}

	::UnityEngine::UI::Extension::UILocalizationText* get_Num()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGJIFJAAMN_GFJCNOEFBBD_GET_NUM_OFFSET))(this);
	}

	::UnityEngine::Animation* get_Anim()
	{
		return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGJIFJAAMN_GFJCNOEFBBD_GET_ANIM_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_Root()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGJIFJAAMN_GFJCNOEFBBD_GET_ROOT_OFFSET))(this);
	}
};
