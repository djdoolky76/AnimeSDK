#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PCNOJLGFMPO.h"

#define MOLEMOLE_CONFIG_ZIPLINE_OPTIONALMOVEDIRECTIONTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1279FE10)

namespace MoleMole::Config::ZipLine
{
	inline static constexpr unsigned int OptionalMoveDirectionType_TypeDefinitionIndex = 71026;

	class OptionalMoveDirectionType
	{
	public:
		::System::Void _ctor(::PCNOJLGFMPO EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::PCNOJLGFMPO))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZIPLINE_OPTIONALMOVEDIRECTIONTYPE__CTOR_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
