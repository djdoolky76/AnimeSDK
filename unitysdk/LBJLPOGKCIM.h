#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define LBJLPOGKCIM_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x177388C0)
#define LBJLPOGKCIM_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x17738830)
#define LBJLPOGKCIM_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x17738700)
#define LBJLPOGKCIM_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x17738790)
#define LBJLPOGKCIM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x177385F0)
#define LBJLPOGKCIM__CCTOR_OFFSET UNITYSDK_OFFSET(0x17738680)
#define LBJLPOGKCIM__CTOR_OFFSET UNITYSDK_OFFSET(0x177386F0)

inline static constexpr unsigned int LBJLPOGKCIM_TypeDefinitionIndex = 52870;

class LBJLPOGKCIM : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x66; // 0x0
	::System::String* HEPGIHIMCDP; // 0x20
	::System::Boolean NFJIDKBNIKP; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBJLPOGKCIM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLPOGKCIM__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLPOGKCIM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLPOGKCIM_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLPOGKCIM_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJLPOGKCIM_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean DOFCLPCLHOJ, ::System::String* GIGEHAGHNNP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + LBJLPOGKCIM_CNHBDOMKKDE_OFFSET))(this, DOFCLPCLHOJ, GIGEHAGHNNP);
	}
};
