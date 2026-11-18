#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABKOPPMAKPH.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMINIUIGAME3DCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x193AD3F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniUIGame3DContext_TypeDefinitionIndex = 76849;

	class UIMiniUIGame3DContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::ABKOPPMAKPH GameType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAME3DCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
