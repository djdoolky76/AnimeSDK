#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALEEGFIOCLK_PCGPDDHOJKG;
namespace System { class Action; }

#define ALEEGFIOCLK_JOJAGNPEGGL_EIFHAGIFDNC_OFFSET UNITYSDK_OFFSET(0x1D9ECFE0)
#define ALEEGFIOCLK_JOJAGNPEGGL_IHGEOOKFAHM_OFFSET UNITYSDK_OFFSET(0x1D9ECEA0)
#define ALEEGFIOCLK_JOJAGNPEGGL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9ECE90)

inline static constexpr unsigned int ALEEGFIOCLK_JOJAGNPEGGL_TypeDefinitionIndex = 93434;

class ALEEGFIOCLK_JOJAGNPEGGL : public ::System::Object
{
public:
	::ALEEGFIOCLK_PCGPDDHOJKG* FGBNBFHOKAA; // 0x10
	::System::Action* DLMJCFBENGB; // 0x18
	::System::Int32 PAEEEHKILOC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEEGFIOCLK_JOJAGNPEGGL__CTOR_OFFSET))(this);
	}

	::System::Void IHGEOOKFAHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEEGFIOCLK_JOJAGNPEGGL_IHGEOOKFAHM_OFFSET))(this);
	}

	::System::Void EIFHAGIFDNC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEEGFIOCLK_JOJAGNPEGGL_EIFHAGIFDNC_OFFSET))(this);
	}
};
