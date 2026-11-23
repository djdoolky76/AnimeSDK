#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ABC_QUALITYSETTINGS_CHESSGAMEOVERRIDESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2204440)

namespace ABC::QualitySettings
{
	inline static constexpr unsigned int ChessGameOverrideSettings_TypeDefinitionIndex = 9073;

	class ChessGameOverrideSettings : public ::System::Object
	{
	public:
		::System::Single pcssFilterRadius; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_QUALITYSETTINGS_CHESSGAMEOVERRIDESETTINGS__CTOR_OFFSET))(this);
		}
	};
}
