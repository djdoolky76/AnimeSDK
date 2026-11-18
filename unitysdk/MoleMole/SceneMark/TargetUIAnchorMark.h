#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_SCENEMARK_TARGETUIANCHORMARK__CTOR_OFFSET UNITYSDK_OFFSET(0x1249DA10)

namespace MoleMole::SceneMark
{
	inline static constexpr unsigned int TargetUIAnchorMark_TypeDefinitionIndex = 47330;

	class TargetUIAnchorMark
	{
	public:
		::System::String* StyleName; // 0x18
		::System::Single Radius; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMARK_TARGETUIANCHORMARK__CTOR_OFFSET))(this);
		}
	};
}
