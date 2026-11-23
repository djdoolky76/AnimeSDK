#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FDABAFD25755B356;
namespace System { class String; }

#define FDABAFD25755B356_EAAEC49CE5F00EAE_B97A4F2B05291B66_OFFSET UNITYSDK_OFFSET(0x190BBA0)
#define FDABAFD25755B356_EAAEC49CE5F00EAE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FDABAFD25755B356_EAAEC49CE5F00EAE_TypeDefinitionIndex = 1489;

class FDABAFD25755B356_EAAEC49CE5F00EAE : public ::System::Object
{
public:
	::FDABAFD25755B356* A544919C800E2923; // 0x10
	::System::String* FAC8C5700D484A40; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDABAFD25755B356_EAAEC49CE5F00EAE__CTOR_OFFSET))(this);
	}

	::System::Void B97A4F2B05291B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDABAFD25755B356_EAAEC49CE5F00EAE_B97A4F2B05291B66_OFFSET))(this);
	}
};
