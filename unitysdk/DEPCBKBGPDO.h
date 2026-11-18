#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Exception; }

#define DEPCBKBGPDO_IOOBMPMCAMK_OFFSET UNITYSDK_OFFSET(0x1206A3C0)
#define DEPCBKBGPDO_OECGBJMPNLO_OFFSET UNITYSDK_OFFSET(0x1206A3D0)
#define DEPCBKBGPDO__CTOR_OFFSET UNITYSDK_OFFSET(0x1206A360)

inline static constexpr unsigned int DEPCBKBGPDO_TypeDefinitionIndex = 75407;

class DEPCBKBGPDO : public ::System::EventArgs
{
public:
	::System::Exception* _FAAIIJLGBHP_k__BackingField; // 0x10

	::System::Void _ctor(::System::Exception* BENPBLMOAKD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + DEPCBKBGPDO__CTOR_OFFSET))(this, BENPBLMOAKD);
	}

	::System::Void IOOBMPMCAMK(::System::Exception* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + DEPCBKBGPDO_IOOBMPMCAMK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Exception* OECGBJMPNLO()
	{
		return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEPCBKBGPDO_OECGBJMPNLO_OFFSET))(this);
	}
};
