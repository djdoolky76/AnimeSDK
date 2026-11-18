#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class VNoiseSettings; }
namespace System { template <typename T> class Action_1; }

#define PKOEPBCCMAB_FHIPDAGJHKA_MGLNLEFJFJB_OFFSET UNITYSDK_OFFSET(0x1D9CF420)
#define PKOEPBCCMAB_FHIPDAGJHKA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CF410)

inline static constexpr unsigned int PKOEPBCCMAB_FHIPDAGJHKA_TypeDefinitionIndex = 88357;

class PKOEPBCCMAB_FHIPDAGJHKA : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Cameras::VNoiseSettings*>* IBNICCGMILF; // 0x10
	::Foundation::AssetPath OIIHCACKLHD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKOEPBCCMAB_FHIPDAGJHKA__CTOR_OFFSET))(this);
	}

	::System::Void MGLNLEFJFJB(::MoleMole::Cameras::VNoiseSettings* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::VNoiseSettings*))((::PBYTE)hIl2Cpp + PKOEPBCCMAB_FHIPDAGJHKA_MGLNLEFJFJB_OFFSET))(this, DFMKILICPFB);
	}
};
