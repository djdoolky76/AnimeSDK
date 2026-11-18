#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define OLIDMOKBDIK_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1844C460)
#define OLIDMOKBDIK_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1844C3D0)
#define OLIDMOKBDIK_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1844C340)
#define OLIDMOKBDIK_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x1844C4F0)
#define OLIDMOKBDIK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1844C250)
#define OLIDMOKBDIK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1844C2C0)
#define OLIDMOKBDIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1844C330)

inline static constexpr unsigned int OLIDMOKBDIK_TypeDefinitionIndex = 49823;

class OLIDMOKBDIK : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x6C; // 0x0
	::System::String* BFCOLDHLMFI; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLIDMOKBDIK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLIDMOKBDIK__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLIDMOKBDIK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLIDMOKBDIK_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLIDMOKBDIK_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 LONODJEPPGL, ::System::String* AADJPMHPNAH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + OLIDMOKBDIK_CNHBDOMKKDE_OFFSET))(this, LONODJEPPGL, AADJPMHPNAH);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLIDMOKBDIK_OHFHFOHMBJH_OFFSET))(this);
	}
};
