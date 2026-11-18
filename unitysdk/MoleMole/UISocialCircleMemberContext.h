#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class IDGDIFDMIDP;

#define MOLEMOLE_UISOCIALCIRCLEMEMBERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18262BF0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleMemberContext_TypeDefinitionIndex = 44643;

	class UISocialCircleMemberContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::IDGDIFDMIDP* CircleData; // 0x28
		::System::Int32 TabIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMEMBERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
