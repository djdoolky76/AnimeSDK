#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define FOKGJKABPPB_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x14115BF0)
#define FOKGJKABPPB_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x14115AC0)
#define FOKGJKABPPB_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x14115A30)
#define FOKGJKABPPB_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x14115B50)
#define FOKGJKABPPB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14115920)
#define FOKGJKABPPB__CCTOR_OFFSET UNITYSDK_OFFSET(0x141159B0)
#define FOKGJKABPPB__CTOR_OFFSET UNITYSDK_OFFSET(0x14115A20)

inline static constexpr unsigned int FOKGJKABPPB_TypeDefinitionIndex = 89510;

class FOKGJKABPPB : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xDE; // 0x0
	::System::String* KOGOFKBAGNO; // 0x20
	::System::String* OGHBCAAHKFH; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOKGJKABPPB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOKGJKABPPB__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOKGJKABPPB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOKGJKABPPB_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOKGJKABPPB_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOKGJKABPPB_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::String* DKFLICMMOAO, ::System::String* FOOGBBIPNDI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOKGJKABPPB_BBOMJDBNHIC_OFFSET))(this, DKFLICMMOAO, FOOGBBIPNDI);
	}
};
