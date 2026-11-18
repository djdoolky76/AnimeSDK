#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define DOIBHDCMDEK_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0xFDCBAA0)
#define DOIBHDCMDEK_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0xFDCBA10)
#define DOIBHDCMDEK_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0xFDCBB30)
#define DOIBHDCMDEK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0xFDCB910)
#define DOIBHDCMDEK__CCTOR_OFFSET UNITYSDK_OFFSET(0xFDCB990)
#define DOIBHDCMDEK__CTOR_OFFSET UNITYSDK_OFFSET(0xFDCBA00)

inline static constexpr unsigned int DOIBHDCMDEK_TypeDefinitionIndex = 85490;

class DOIBHDCMDEK : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x1F; // 0x0
	::System::Boolean BCCABNFGGDP; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOIBHDCMDEK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIBHDCMDEK__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIBHDCMDEK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIBHDCMDEK_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIBHDCMDEK_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIBHDCMDEK_OHFHFOHMBJH_OFFSET))(this);
	}
};
