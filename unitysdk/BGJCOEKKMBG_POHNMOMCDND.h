#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EHJFBMKMCOE;
namespace System { class Action; }

#define BGJCOEKKMBG_POHNMOMCDND_PMPNGBICKHC_OFFSET UNITYSDK_OFFSET(0x18675830)
#define BGJCOEKKMBG_POHNMOMCDND__CTOR_OFFSET UNITYSDK_OFFSET(0x18675820)

inline static constexpr unsigned int BGJCOEKKMBG_POHNMOMCDND_TypeDefinitionIndex = 46538;

class BGJCOEKKMBG_POHNMOMCDND : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_POHNMOMCDND__CTOR_OFFSET))(this);
	}

	::System::Void PMPNGBICKHC(::EHJFBMKMCOE* GMECJGOHJJJ)
	{
		return ((::System::Void(*)(::PVOID, ::EHJFBMKMCOE*))((::PBYTE)hIl2Cpp + BGJCOEKKMBG_POHNMOMCDND_PMPNGBICKHC_OFFSET))(this, GMECJGOHJJJ);
	}
};
