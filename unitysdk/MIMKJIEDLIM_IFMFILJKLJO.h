#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZipLineMap; }
namespace System { class Action; }

#define MIMKJIEDLIM_IFMFILJKLJO_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x14DEA6A0)
#define MIMKJIEDLIM_IFMFILJKLJO__CTOR_OFFSET UNITYSDK_OFFSET(0x14DEA690)

inline static constexpr unsigned int MIMKJIEDLIM_IFMFILJKLJO_TypeDefinitionIndex = 86047;

class MIMKJIEDLIM_IFMFILJKLJO : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMKJIEDLIM_IFMFILJKLJO__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigZipLineMap* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigZipLineMap*))((::PBYTE)hIl2Cpp + MIMKJIEDLIM_IFMFILJKLJO_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
