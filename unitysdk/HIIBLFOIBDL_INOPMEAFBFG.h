#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangkovItemInfoWidgetController_Context; }
namespace UnityEngine { class Transform; }

#define HIIBLFOIBDL_INOPMEAFBFG__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF3FD0)

inline static constexpr unsigned int HIIBLFOIBDL_INOPMEAFBFG_TypeDefinitionIndex = 71533;

class HIIBLFOIBDL_INOPMEAFBFG : public ::System::Object
{
public:
	::MoleMole::UIBangkovItemInfoWidgetController_Context* HBMGHPEPBNC; // 0x10
	::UnityEngine::Transform* JNLBPMKIFNK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIBLFOIBDL_INOPMEAFBFG__CTOR_OFFSET))(this);
	}
};
