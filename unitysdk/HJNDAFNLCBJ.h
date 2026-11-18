#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PIJMOAJLFGE.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class PerceptionSenseConfig; }

#define HJNDAFNLCBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18195230)

inline static constexpr unsigned int HJNDAFNLCBJ_TypeDefinitionIndex = 76990;

class HJNDAFNLCBJ : public ::System::Object
{
public:
	::MoleMole::Config::PerceptionSenseConfig* AHMFPFACACD; // 0x10
	::PIJMOAJLFGE HDLFOCFHLBJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNDAFNLCBJ__CTOR_OFFSET))(this);
	}
};
