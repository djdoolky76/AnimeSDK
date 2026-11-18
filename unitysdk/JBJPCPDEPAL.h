#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCHNAAMOHPG.h"
#include "unitysdk/System/Object.h"

template <typename T> class HFLOIPDGLGA_1;

#define JBJPCPDEPAL_AJEJBMIFKLN_OFFSET UNITYSDK_OFFSET(0x15C36650)
#define JBJPCPDEPAL_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x15C36780)
#define JBJPCPDEPAL_PAKGLAOCLKB_OFFSET UNITYSDK_OFFSET(0x15C36680)
#define JBJPCPDEPAL_PBFBICMFFFN_OFFSET UNITYSDK_OFFSET(0x15C367A0)
#define JBJPCPDEPAL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15C36700)
#define JBJPCPDEPAL__CTOR_OFFSET UNITYSDK_OFFSET(0x15C365A0)

inline static constexpr unsigned int JBJPCPDEPAL_TypeDefinitionIndex = 86418;

class JBJPCPDEPAL : public ::System::Object
{
public:
	::HFLOIPDGLGA_1<::MCHNAAMOHPG>* EOKLJOBHHIC; // 0x10

	::System::Void _ctor(::System::Int32 AHFJCBLHFIJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JBJPCPDEPAL__CTOR_OFFSET))(this, AHFJCBLHFIJ);
	}

	::System::Boolean AJEJBMIFKLN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJPCPDEPAL_AJEJBMIFKLN_OFFSET))(this);
	}

	::MCHNAAMOHPG PAKGLAOCLKB()
	{
		return ((::MCHNAAMOHPG(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJPCPDEPAL_PAKGLAOCLKB_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJPCPDEPAL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBJPCPDEPAL_NGFKBKCFPLK_OFFSET))(this);
	}

	::System::Void PBFBICMFFFN(::MCHNAAMOHPG& GAOAOAEOKFP)
	{
		return ((::System::Void(*)(::PVOID, ::MCHNAAMOHPG&))((::PBYTE)hIl2Cpp + JBJPCPDEPAL_PBFBICMFFFN_OFFSET))(this, GAOAOAEOKFP);
	}
};
