#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define MJINGHCGAEO_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x11A0FE90)
#define MJINGHCGAEO_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x11A0FD60)
#define MJINGHCGAEO_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x11A0FDF0)
#define MJINGHCGAEO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x11A0FC60)
#define MJINGHCGAEO__CCTOR_OFFSET UNITYSDK_OFFSET(0x11A0FCE0)
#define MJINGHCGAEO__CTOR_OFFSET UNITYSDK_OFFSET(0x11A0FD50)

inline static constexpr unsigned int MJINGHCGAEO_TypeDefinitionIndex = 47787;

class MJINGHCGAEO : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x68; // 0x0
	::System::Boolean CNNNAJDJMEC; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJINGHCGAEO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJINGHCGAEO__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJINGHCGAEO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJINGHCGAEO_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJINGHCGAEO_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJINGHCGAEO_FIGPAOKNJLN_OFFSET))(this);
	}
};
