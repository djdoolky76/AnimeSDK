#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/E72B7386CDDA30ED.h"

class AB642D1382756991;

#define FB560ECF92FC8321__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FB560ECF92FC8321_TypeDefinitionIndex = 6238;

class FB560ECF92FC8321 : public ::E379DE61A548837D
{
public:
	::AB642D1382756991* E927034E06260979; // 0x38
	::E68AA4EB51923C98::E72B7386CDDA30ED F81C127F1088CC15; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FB560ECF92FC8321__CTOR_OFFSET))(this);
	}
};
