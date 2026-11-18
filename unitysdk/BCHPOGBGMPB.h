#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define BCHPOGBGMPB_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x11BE8D00)
#define BCHPOGBGMPB_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x11BE8E00)
#define BCHPOGBGMPB_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x11BE8E40)
#define BCHPOGBGMPB_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x11BE8C70)
#define BCHPOGBGMPB_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x11BE8D60)
#define BCHPOGBGMPB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x11BE8AF0)
#define BCHPOGBGMPB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11BE8B70)
#define BCHPOGBGMPB__CCTOR_OFFSET UNITYSDK_OFFSET(0x11BE8BF0)
#define BCHPOGBGMPB__CTOR_OFFSET UNITYSDK_OFFSET(0x11BE8C60)

inline static constexpr unsigned int BCHPOGBGMPB_TypeDefinitionIndex = 92355;

class BCHPOGBGMPB : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x101; // 0x0
	::System::Int32 HPPLBDHBFIF; // 0x20
	::System::Int32 KAJMECIEPFL; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCHPOGBGMPB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCHPOGBGMPB__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCHPOGBGMPB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCHPOGBGMPB_TOSTRING_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCHPOGBGMPB_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Int32 AFAINIEPCLG, ::System::Int32 BKLPAILFJEN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BCHPOGBGMPB_CNHBDOMKKDE_OFFSET))(this, AFAINIEPCLG, BKLPAILFJEN);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCHPOGBGMPB_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCHPOGBGMPB_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCHPOGBGMPB_FIGPAOKNJLN_OFFSET))(this);
	}
};
