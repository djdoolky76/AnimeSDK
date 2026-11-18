#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define GPPMPHICDEA_CAEPKBJBKED_BJIJOCOKJGL_OFFSET UNITYSDK_OFFSET(0x17ADF350)
#define GPPMPHICDEA_CAEPKBJBKED_HPDFBPGLCAD_OFFSET UNITYSDK_OFFSET(0x17ADF340)
#define GPPMPHICDEA_CAEPKBJBKED__CTOR_OFFSET UNITYSDK_OFFSET(0x17ADF330)

inline static constexpr unsigned int GPPMPHICDEA_CAEPKBJBKED_TypeDefinitionIndex = 42643;

class GPPMPHICDEA_CAEPKBJBKED : public ::System::Object
{
public:
	::System::Action* HFGEDPLPMDI; // 0x10
	::System::Action* MAEGMLBDJDO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_CAEPKBJBKED__CTOR_OFFSET))(this);
	}

	::System::Void HPDFBPGLCAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_CAEPKBJBKED_HPDFBPGLCAD_OFFSET))(this);
	}

	::System::Void BJIJOCOKJGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_CAEPKBJBKED_BJIJOCOKJGL_OFFSET))(this);
	}
};
