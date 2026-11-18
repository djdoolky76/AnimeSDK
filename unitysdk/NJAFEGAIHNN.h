#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define NJAFEGAIHNN_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x11F812B0)
#define NJAFEGAIHNN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x11F81180)
#define NJAFEGAIHNN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x11F810F0)
#define NJAFEGAIHNN_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x11F81210)
#define NJAFEGAIHNN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x11F80FE0)
#define NJAFEGAIHNN__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F81070)
#define NJAFEGAIHNN__CTOR_OFFSET UNITYSDK_OFFSET(0x11F810E0)

inline static constexpr unsigned int NJAFEGAIHNN_TypeDefinitionIndex = 79164;

class NJAFEGAIHNN : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x61; // 0x0
	::System::String* HEPGIHIMCDP; // 0x20
	::System::Boolean CJGKDAIMJHL; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJAFEGAIHNN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJAFEGAIHNN__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJAFEGAIHNN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJAFEGAIHNN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJAFEGAIHNN_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJAFEGAIHNN_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean DEBGKPLOPCG, ::System::String* GIGEHAGHNNP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + NJAFEGAIHNN_CNHBDOMKKDE_OFFSET))(this, DEBGKPLOPCG, GIGEHAGHNNP);
	}
};
