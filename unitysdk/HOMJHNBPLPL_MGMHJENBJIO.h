#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define HOMJHNBPLPL_MGMHJENBJIO_HCDMMJLJLAL_OFFSET UNITYSDK_OFFSET(0x1819B5F0)
#define HOMJHNBPLPL_MGMHJENBJIO_KBAFCIJONFJ_OFFSET UNITYSDK_OFFSET(0x1819B600)
#define HOMJHNBPLPL_MGMHJENBJIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1819B5E0)

inline static constexpr unsigned int HOMJHNBPLPL_MGMHJENBJIO_TypeDefinitionIndex = 50526;

class HOMJHNBPLPL_MGMHJENBJIO : public ::System::Object
{
public:
	::System::Action* KCNFHMFDOHI; // 0x10
	::System::Action* POCANNAFFOA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMJHNBPLPL_MGMHJENBJIO__CTOR_OFFSET))(this);
	}

	::System::Void HCDMMJLJLAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMJHNBPLPL_MGMHJENBJIO_HCDMMJLJLAL_OFFSET))(this);
	}

	::System::Void KBAFCIJONFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMJHNBPLPL_MGMHJENBJIO_KBAFCIJONFJ_OFFSET))(this);
	}
};
