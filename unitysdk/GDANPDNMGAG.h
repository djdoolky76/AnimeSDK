#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define GDANPDNMGAG_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x11C9F1C0)
#define GDANPDNMGAG_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x11C9F130)
#define GDANPDNMGAG_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x11C9F0A0)
#define GDANPDNMGAG_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x11C9F260)
#define GDANPDNMGAG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x11C9EF90)
#define GDANPDNMGAG__CCTOR_OFFSET UNITYSDK_OFFSET(0x11C9F020)
#define GDANPDNMGAG__CTOR_OFFSET UNITYSDK_OFFSET(0x11C9F090)

inline static constexpr unsigned int GDANPDNMGAG_TypeDefinitionIndex = 48510;

class GDANPDNMGAG : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xC; // 0x0
	::System::String* AOLGDHDOCLP; // 0x20
	::System::String* ABIMEMOMCJD; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDANPDNMGAG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDANPDNMGAG__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDANPDNMGAG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDANPDNMGAG_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDANPDNMGAG_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 DKBGLBIECBN, ::System::String* CFGKBJGBNDP, ::System::String* KKJEJNMLIFP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + GDANPDNMGAG_CNHBDOMKKDE_OFFSET))(this, DKBGLBIECBN, CFGKBJGBNDP, KKJEJNMLIFP);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDANPDNMGAG_OHFHFOHMBJH_OFFSET))(this);
	}
};
