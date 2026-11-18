#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFJIMHBAHBI.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class JJOKKBDDGNN;
namespace UnityEngine { class Canvas; }

#define MOLEMOLE_UIRABHUDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15D3CAF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABHudContext_TypeDefinitionIndex = 58724;

	class UIRABHudContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::BFJIMHBAHBI hudData; // 0x28
		::JJOKKBDDGNN* slot; // 0x48
		::UnityEngine::Canvas* root; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABHUDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
