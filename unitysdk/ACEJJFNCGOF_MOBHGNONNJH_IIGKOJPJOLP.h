#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ACEJJFNCGOF;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ACEJJFNCGOF_MOBHGNONNJH_IIGKOJPJOLP_GET_ANIM_OFFSET UNITYSDK_OFFSET(0x1433C900)
#define ACEJJFNCGOF_MOBHGNONNJH_IIGKOJPJOLP_GET_NUM_OFFSET UNITYSDK_OFFSET(0x1433C850)
#define ACEJJFNCGOF_MOBHGNONNJH_IIGKOJPJOLP_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x1433C9C0)
#define ACEJJFNCGOF_MOBHGNONNJH_IIGKOJPJOLP__CTOR_OFFSET UNITYSDK_OFFSET(0x1433CA70)

inline static constexpr unsigned int ACEJJFNCGOF_MOBHGNONNJH_IIGKOJPJOLP_TypeDefinitionIndex = 89559;

class ACEJJFNCGOF_MOBHGNONNJH_IIGKOJPJOLP : public ::System::Object
{
public:
	::ACEJJFNCGOF* ADNFJEENCAM; // 0x10

	::System::Void _ctor(::ACEJJFNCGOF* IHCOOKNHPIM)
	{
		return ((::System::Void(*)(::PVOID, ::ACEJJFNCGOF*))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_MOBHGNONNJH_IIGKOJPJOLP__CTOR_OFFSET))(this, IHCOOKNHPIM);
	}

	::UnityEngine::UI::Extension::UILocalizationText* get_Num()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_MOBHGNONNJH_IIGKOJPJOLP_GET_NUM_OFFSET))(this);
	}

	::UnityEngine::Animation* get_Anim()
	{
		return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_MOBHGNONNJH_IIGKOJPJOLP_GET_ANIM_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_Root()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEJJFNCGOF_MOBHGNONNJH_IIGKOJPJOLP_GET_ROOT_OFFSET))(this);
	}
};
