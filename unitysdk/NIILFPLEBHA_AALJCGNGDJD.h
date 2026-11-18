#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBulletTracingData; }
namespace System { class Action; }

#define NIILFPLEBHA_AALJCGNGDJD_IIJINMINHHL_OFFSET UNITYSDK_OFFSET(0x16B80980)
#define NIILFPLEBHA_AALJCGNGDJD__CTOR_OFFSET UNITYSDK_OFFSET(0x16B80970)

inline static constexpr unsigned int NIILFPLEBHA_AALJCGNGDJD_TypeDefinitionIndex = 79069;

class NIILFPLEBHA_AALJCGNGDJD : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIILFPLEBHA_AALJCGNGDJD__CTOR_OFFSET))(this);
	}

	::System::Void IIJINMINHHL(::MoleMole::ConfigBulletTracingData* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigBulletTracingData*))((::PBYTE)hIl2Cpp + NIILFPLEBHA_AALJCGNGDJD_IIJINMINHHL_OFFSET))(this, DFMKILICPFB);
	}
};
