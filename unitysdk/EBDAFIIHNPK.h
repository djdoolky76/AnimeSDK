#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define EBDAFIIHNPK_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1588A780)
#define EBDAFIIHNPK_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1588A6F0)
#define EBDAFIIHNPK_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1588A660)
#define EBDAFIIHNPK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1588A5E0)
#define EBDAFIIHNPK__CTOR_OFFSET UNITYSDK_OFFSET(0x1588A650)

inline static constexpr unsigned int EBDAFIIHNPK_TypeDefinitionIndex = 65279;

class EBDAFIIHNPK : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x4E; // 0x0
	::System::UInt32 JKDBIGKBKHA; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBDAFIIHNPK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBDAFIIHNPK__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBDAFIIHNPK_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBDAFIIHNPK_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 DKBGLBIECBN, ::System::UInt32 JHJKAJCFMLK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EBDAFIIHNPK_CNHBDOMKKDE_OFFSET))(this, DKBGLBIECBN, JHJKAJCFMLK);
	}
};
