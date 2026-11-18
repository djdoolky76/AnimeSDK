#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJGIBMLAOEG.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_RABBATTLE3DCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10D589A0)

namespace MoleMole
{
	inline static constexpr unsigned int RABBattle3DContext_TypeDefinitionIndex = 57988;

	class RABBattle3DContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::IJGIBMLAOEG PageType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RABBATTLE3DCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
