#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGMKENNHHHN_HEABNIODKDD;

#define AGMKENNHHHN_PGGOOOCLPJI_DMPKHFIIBFM_OFFSET UNITYSDK_OFFSET(0x135E1770)
#define AGMKENNHHHN_PGGOOOCLPJI_MLANEIEPNLA_OFFSET UNITYSDK_OFFSET(0x135E1790)
#define AGMKENNHHHN_PGGOOOCLPJI__CTOR_OFFSET UNITYSDK_OFFSET(0x135E1760)

inline static constexpr unsigned int AGMKENNHHHN_PGGOOOCLPJI_TypeDefinitionIndex = 82463;

class AGMKENNHHHN_PGGOOOCLPJI : public ::System::Object
{
public:
	::AGMKENNHHHN_HEABNIODKDD* FGBNBFHOKAA; // 0x10
	::System::Boolean ICGFOICJONF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMKENNHHHN_PGGOOOCLPJI__CTOR_OFFSET))(this);
	}

	::System::Boolean DMPKHFIIBFM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMKENNHHHN_PGGOOOCLPJI_DMPKHFIIBFM_OFFSET))(this);
	}

	::System::Void MLANEIEPNLA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGMKENNHHHN_PGGOOOCLPJI_MLANEIEPNLA_OFFSET))(this);
	}
};
