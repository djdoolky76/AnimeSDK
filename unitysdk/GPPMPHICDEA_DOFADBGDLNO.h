#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class APCPDBPNJCK;
namespace System { class Action; }

#define GPPMPHICDEA_DOFADBGDLNO_GPFCMOJMIFD_OFFSET UNITYSDK_OFFSET(0x19DE9FE0)
#define GPPMPHICDEA_DOFADBGDLNO__CTOR_OFFSET UNITYSDK_OFFSET(0x19DE9FD0)

inline static constexpr unsigned int GPPMPHICDEA_DOFADBGDLNO_TypeDefinitionIndex = 42650;

class GPPMPHICDEA_DOFADBGDLNO : public ::System::Object
{
public:
	::System::Action* NFININKGKEL; // 0x10
	::APCPDBPNJCK* HMMMOCJAEOA; // 0x18
	::System::Action* HPKLNHIIKND; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_DOFADBGDLNO__CTOR_OFFSET))(this);
	}

	::System::Void GPFCMOJMIFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_DOFADBGDLNO_GPFCMOJMIFD_OFFSET))(this);
	}
};
