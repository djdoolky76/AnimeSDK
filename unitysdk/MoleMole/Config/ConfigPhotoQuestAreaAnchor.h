#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFLMPIHFBGP.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/JPOLPIJCJIJ.h"

#define MOLEMOLE_CONFIG_CONFIGPHOTOQUESTAREAANCHOR_ECMHFDKJPOI_OFFSET UNITYSDK_OFFSET(0x7D9570)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPhotoQuestAreaAnchor_TypeDefinitionIndex = 90807;

	struct alignas(4) ConfigPhotoQuestAreaAnchor
	{
		::NFLMPIHFBGP Type; // 0x10
		::System::Byte _padding0[0x4];
		::System::UInt64 MainCityNpcID; // 0x18
		::System::UInt32 GroupID; // 0x20
		::System::UInt32 MemberID; // 0x24

		::JPOLPIJCJIJ ECMHFDKJPOI()
		{
			return ((::JPOLPIJCJIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPHOTOQUESTAREAANCHOR_ECMHFDKJPOI_OFFSET))(this);
		}
	};
}
