#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Vector2.h"

class CNJCDKHAAPH;

#define MOLEMOLE_REPELPREPPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1249C690)

namespace MoleMole
{
	inline static constexpr unsigned int RepelPrepPageContext_TypeDefinitionIndex = 50314;

	class RepelPrepPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CNJCDKHAAPH* data; // 0x28
		::UnityEngine::Vector2 focusDir; // 0x30
		::System::Boolean disableAutoOpenLevelInfo; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_REPELPREPPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
