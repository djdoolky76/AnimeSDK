#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/ChatSetAvatarVisible.h"
#include "unitysdk/System/Object.h"

#define DAKDOMLMDGC_JGFMIOANGLP_OFFSET UNITYSDK_OFFSET(0x14986830)
#define DAKDOMLMDGC__CTOR_OFFSET UNITYSDK_OFFSET(0x14986820)

inline static constexpr unsigned int DAKDOMLMDGC_TypeDefinitionIndex = 69659;

class DAKDOMLMDGC : public ::System::Object
{
public:
	::MoleMole::GalGame::ChatSetAvatarVisible GJCIDEEAOJM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKDOMLMDGC__CTOR_OFFSET))(this);
	}

	::System::Void JGFMIOANGLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAKDOMLMDGC_JGFMIOANGLP_OFFSET))(this);
	}
};
