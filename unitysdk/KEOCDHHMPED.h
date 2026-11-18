#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class PerformConfig; }

#define KEOCDHHMPED__CTOR_OFFSET UNITYSDK_OFFSET(0x163392E0)

inline static constexpr unsigned int KEOCDHHMPED_TypeDefinitionIndex = 60460;

class KEOCDHHMPED : public ::System::Object
{
public:
	::MoleMole::PerformConfig* LICEBFGBOMO; // 0x10
	::MoleMole::PerformConfig* AHMFPFACACD; // 0x18
	::MoleMole::PerformConfig* EAGNFCCBHFN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEOCDHHMPED__CTOR_OFFSET))(this);
	}
};
