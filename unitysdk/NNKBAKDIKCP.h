#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define NNKBAKDIKCP_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x115AD710)
#define NNKBAKDIKCP_DHJJOAPOPEC_OFFSET UNITYSDK_OFFSET(0x115AD800)
#define NNKBAKDIKCP_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x115AD770)
#define NNKBAKDIKCP_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x115AD680)
#define NNKBAKDIKCP_ONGAELALIHB_OFFSET UNITYSDK_OFFSET(0x115AD810)
#define NNKBAKDIKCP__CCTOR_OFFSET UNITYSDK_OFFSET(0x115AD600)
#define NNKBAKDIKCP__CTOR_OFFSET UNITYSDK_OFFSET(0x115AD670)

inline static constexpr unsigned int NNKBAKDIKCP_TypeDefinitionIndex = 81444;

class NNKBAKDIKCP : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x138; // 0x0
	::System::String* _ILAHGKNKHKH_k__BackingField; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNKBAKDIKCP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKBAKDIKCP__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKBAKDIKCP_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::String* HHLLGKFNPPD)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + NNKBAKDIKCP_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, HHLLGKFNPPD);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKBAKDIKCP_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void DHJJOAPOPEC(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NNKBAKDIKCP_DHJJOAPOPEC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* ONGAELALIHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKBAKDIKCP_ONGAELALIHB_OFFSET))(this);
	}
};
