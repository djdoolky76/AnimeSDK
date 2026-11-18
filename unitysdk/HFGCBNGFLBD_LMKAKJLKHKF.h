#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define HFGCBNGFLBD_LMKAKJLKHKF_HCDMMJLJLAL_OFFSET UNITYSDK_OFFSET(0x15DA56A0)
#define HFGCBNGFLBD_LMKAKJLKHKF_KBAFCIJONFJ_OFFSET UNITYSDK_OFFSET(0x15DA5690)
#define HFGCBNGFLBD_LMKAKJLKHKF__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA5680)

inline static constexpr unsigned int HFGCBNGFLBD_LMKAKJLKHKF_TypeDefinitionIndex = 40781;

class HFGCBNGFLBD_LMKAKJLKHKF : public ::System::Object
{
public:
	::System::Action* POCANNAFFOA; // 0x10
	::System::Action* KCNFHMFDOHI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGCBNGFLBD_LMKAKJLKHKF__CTOR_OFFSET))(this);
	}

	::System::Void KBAFCIJONFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGCBNGFLBD_LMKAKJLKHKF_KBAFCIJONFJ_OFFSET))(this);
	}

	::System::Void HCDMMJLJLAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGCBNGFLBD_LMKAKJLKHKF_HCDMMJLJLAL_OFFSET))(this);
	}
};
