#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define EFE035569EEC2418__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EFE035569EEC2418_TypeDefinitionIndex = 388;

class EFE035569EEC2418 : public ::E379DE61A548837D
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFE035569EEC2418__CTOR_OFFSET))(this);
	}
};
