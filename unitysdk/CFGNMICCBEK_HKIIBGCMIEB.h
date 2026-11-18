#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CFGNMICCBEK_HKIIBGCMIEB_NCMMPOOJIGG_OFFSET UNITYSDK_OFFSET(0x139A8B60)
#define CFGNMICCBEK_HKIIBGCMIEB__CTOR_OFFSET UNITYSDK_OFFSET(0x139A8B50)

inline static constexpr unsigned int CFGNMICCBEK_HKIIBGCMIEB_TypeDefinitionIndex = 91462;

class CFGNMICCBEK_HKIIBGCMIEB : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_HKIIBGCMIEB__CTOR_OFFSET))(this);
	}

	::System::Void NCMMPOOJIGG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGNMICCBEK_HKIIBGCMIEB_NCMMPOOJIGG_OFFSET))(this);
	}
};
