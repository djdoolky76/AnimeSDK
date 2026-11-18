#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/KGAKFDIEBPN.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"

namespace System { class String; }

#define KBHIOLGBAGL_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x17637D10)
#define KBHIOLGBAGL_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x17637BE0)
#define KBHIOLGBAGL_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x17637C70)
#define KBHIOLGBAGL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17637AD0)
#define KBHIOLGBAGL__CCTOR_OFFSET UNITYSDK_OFFSET(0x17637B60)
#define KBHIOLGBAGL__CTOR_OFFSET UNITYSDK_OFFSET(0x17637BD0)

inline static constexpr unsigned int KBHIOLGBAGL_TypeDefinitionIndex = 53045;

class KBHIOLGBAGL : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xA4; // 0x0
	::System::String* NNPNKOBOPCG; // 0x20
	::KGAKFDIEBPN CFFCKJIDPDC; // 0x28
	::MoleMole::Config::PropertyModifyFunction PAHMLNODLHA; // 0x2C
	::System::Single OICIDHAGAKN; // 0x30
	::System::Single MFMMNDAHFAD; // 0x34

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBHIOLGBAGL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBHIOLGBAGL__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBHIOLGBAGL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBHIOLGBAGL_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBHIOLGBAGL_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBHIOLGBAGL_FIGPAOKNJLN_OFFSET))(this);
	}
};
