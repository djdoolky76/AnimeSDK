#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOKFPNKJOON_HKGBJCAJJMK;
class PJHKDJEGJOG;

#define AOKFPNKJOON_JGIKMMLNJKM_JMEAGLINJFA_OFFSET UNITYSDK_OFFSET(0x1437A0C0)
#define AOKFPNKJOON_JGIKMMLNJKM__CTOR_OFFSET UNITYSDK_OFFSET(0x1437A0B0)

inline static constexpr unsigned int AOKFPNKJOON_JGIKMMLNJKM_TypeDefinitionIndex = 51464;

class AOKFPNKJOON_JGIKMMLNJKM : public ::System::Object
{
public:
	::AOKFPNKJOON_HKGBJCAJJMK* FGBNBFHOKAA; // 0x10
	::PJHKDJEGJOG* FOGCPFLGGBL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_JGIKMMLNJKM__CTOR_OFFSET))(this);
	}

	::System::Void JMEAGLINJFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_JGIKMMLNJKM_JMEAGLINJFA_OFFSET))(this);
	}
};
