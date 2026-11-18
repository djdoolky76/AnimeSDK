#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System { class Action; }
namespace UnityEngine { class Animation; }

#define KLDOKADHDPJ_BCMBLHMKGMA_OFFSET UNITYSDK_OFFSET(0x1521F4C0)
#define KLDOKADHDPJ_OMMICIJCCKB_OFFSET UNITYSDK_OFFSET(0x1521F320)
#define KLDOKADHDPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1521F2B0)

inline static constexpr unsigned int KLDOKADHDPJ_TypeDefinitionIndex = 44233;

class KLDOKADHDPJ : public ::System::Object
{
public:
	::UnityEngine::Animation* EEFOCCNFJCO; // 0x10
	::System::Action* LKAEABEHNEL; // 0x18
	::Foundation::Coroutine::CoroutineHandle HDIEABKPPNF; // 0x20

	::System::Void _ctor(::UnityEngine::Animation* AOKJEGNBALI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + KLDOKADHDPJ__CTOR_OFFSET))(this, AOKJEGNBALI);
	}

	::System::Void OMMICIJCCKB(::MoleMole::UIBaseController* JNLBPMKIFNK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + KLDOKADHDPJ_OMMICIJCCKB_OFFSET))(this, JNLBPMKIFNK);
	}

	::System::Void BCMBLHMKGMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDOKADHDPJ_BCMBLHMKGMA_OFFSET))(this);
	}
};
