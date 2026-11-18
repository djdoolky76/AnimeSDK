#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define BFEBBOOHHAG_ECKFMJPCMHF__CTOR_OFFSET UNITYSDK_OFFSET(0x10DD5780)

inline static constexpr unsigned int BFEBBOOHHAG_ECKFMJPCMHF_TypeDefinitionIndex = 59260;

class BFEBBOOHHAG_ECKFMJPCMHF : public ::System::Object
{
public:
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x10
	::UnityEngine::UI::Extension::UIToggleButton* HJDAMCBKNEI; // 0x18
	::UnityEngine::GameObject* OCJOCLEDABL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFEBBOOHHAG_ECKFMJPCMHF__CTOR_OFFSET))(this);
	}
};
