#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define OCAIMDEIIKG_DLLLCCEOOND_KKFJKPLOCNG_OFFSET UNITYSDK_OFFSET(0xFB4EB50)
#define OCAIMDEIIKG_DLLLCCEOOND__CTOR_OFFSET UNITYSDK_OFFSET(0xFB4EB40)

inline static constexpr unsigned int OCAIMDEIIKG_DLLLCCEOOND_TypeDefinitionIndex = 44910;

class OCAIMDEIIKG_DLLLCCEOOND : public ::System::Object
{
public:
	::System::Action* LPFMDKKFMBA; // 0x10
	::System::Int32 JCHEMFNBMKC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAIMDEIIKG_DLLLCCEOOND__CTOR_OFFSET))(this);
	}

	::System::Void KKFJKPLOCNG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCAIMDEIIKG_DLLLCCEOOND_KKFJKPLOCNG_OFFSET))(this);
	}
};
