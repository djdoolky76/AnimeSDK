#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABKOPPMAKPH.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMINIUIGAMESIMPLECONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1904C5E0)
#define MOLEMOLE_UIMINIUIGAMESIMPLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1904C590)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniUIGameSimpleContext_TypeDefinitionIndex = 85940;

	class UIMiniUIGameSimpleContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::ABKOPPMAKPH GameType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMESIMPLECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMESIMPLECONTEXT__CTOR_1_OFFSET))(this, groupID);
		}
	};
}
