#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/MJBABCIIKHB.h"

#define IBDHBPLIHHK_DDPPCLDJMHF_OFFSET UNITYSDK_OFFSET(0x1E23B1E0)
#define IBDHBPLIHHK_DFGOJHPONDC_OFFSET UNITYSDK_OFFSET(0x1E23B6B0)
#define IBDHBPLIHHK_LNHPIHCBGAD_OFFSET UNITYSDK_OFFSET(0x1E23B610)
#define IBDHBPLIHHK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E23B600)

inline static constexpr unsigned int IBDHBPLIHHK_TypeDefinitionIndex = 94172;

class IBDHBPLIHHK : public ::MJBABCIIKHB
{
public:
	::System::Single GEDAKABNJFH; // 0x40
	::System::Single BCDHPKAHJDP; // 0x44
	::JGLIFHIAIEH IAGIPAIGJJC; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBDHBPLIHHK__CTOR_OFFSET))(this);
	}

	::System::Void DDPPCLDJMHF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBDHBPLIHHK_DDPPCLDJMHF_OFFSET))(this);
	}

	::System::Void LNHPIHCBGAD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBDHBPLIHHK_LNHPIHCBGAD_OFFSET))(this);
	}

	::System::Void DFGOJHPONDC(::System::Single HPADFMIADPB, ::System::Single NEEGKNOOOLI, ::JGLIFHIAIEH FCNPOKNKMOD, ::JGLIFHIAIEH CPILJNMFPJL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::JGLIFHIAIEH, ::JGLIFHIAIEH))((::PBYTE)hIl2Cpp + IBDHBPLIHHK_DFGOJHPONDC_OFFSET))(this, HPADFMIADPB, NEEGKNOOOLI, FCNPOKNKMOD, CPILJNMFPJL);
	}
};
