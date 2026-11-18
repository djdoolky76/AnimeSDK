#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJEIKOGLDMJ.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_TITLENMEDALTABCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x162FC4A0)

namespace MoleMole
{
	inline static constexpr unsigned int TitleNMedalTabContext_TypeDefinitionIndex = 53129;

	class TitleNMedalTabContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 OverrideMedalGroupID; // 0x28
		::MJEIKOGLDMJ tabType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TITLENMEDALTABCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
