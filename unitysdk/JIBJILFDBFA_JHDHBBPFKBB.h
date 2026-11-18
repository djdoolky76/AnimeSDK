#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JIBJILFDBFA_EGONIGDOKMM;
class MJPLADANIGH;

#define JIBJILFDBFA_JHDHBBPFKBB_BFJELCBNEFN_OFFSET UNITYSDK_OFFSET(0x1528A870)
#define JIBJILFDBFA_JHDHBBPFKBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1528A860)

inline static constexpr unsigned int JIBJILFDBFA_JHDHBBPFKBB_TypeDefinitionIndex = 73291;

class JIBJILFDBFA_JHDHBBPFKBB : public ::System::Object
{
public:
	::MJPLADANIGH* PPIDFLBLIBN; // 0x10
	::JIBJILFDBFA_EGONIGDOKMM* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBJILFDBFA_JHDHBBPFKBB__CTOR_OFFSET))(this);
	}

	::System::Void BFJELCBNEFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIBJILFDBFA_JHDHBBPFKBB_BFJELCBNEFN_OFFSET))(this);
	}
};
