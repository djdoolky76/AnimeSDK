#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PINBHKFHPAL.h"

namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }

#define BOFJAODPMNI_DOODNGLPOJK_OFFSET UNITYSDK_OFFSET(0x11402680)
#define BOFJAODPMNI_GKLGMCNKKPD_OFFSET UNITYSDK_OFFSET(0x114026C0)
#define BOFJAODPMNI_JAILGLBIMNK_OFFSET UNITYSDK_OFFSET(0x11402700)
#define BOFJAODPMNI__CTOR_OFFSET UNITYSDK_OFFSET(0x11402740)

inline static constexpr unsigned int BOFJAODPMNI_TypeDefinitionIndex = 75105;

class BOFJAODPMNI : public ::PINBHKFHPAL
{
public:
	::MoleMole::HollowChessboard::HollowEntity* CPLFOFKKGGO; // 0x10
	::System::String* MGEDBKBHJPM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFJAODPMNI__CTOR_OFFSET))(this);
	}

	::System::Void DOODNGLPOJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFJAODPMNI_DOODNGLPOJK_OFFSET))(this);
	}

	::System::Void GKLGMCNKKPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFJAODPMNI_GKLGMCNKKPD_OFFSET))(this);
	}

	::System::Boolean JAILGLBIMNK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFJAODPMNI_JAILGLBIMNK_OFFSET))(this);
	}
};
