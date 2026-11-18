#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OIBIIIAFJMF_IBBLCAOMCKF_OFFSET UNITYSDK_OFFSET(0x12933090)
#define OIBIIIAFJMF_LCKALIGMIBB_OFFSET UNITYSDK_OFFSET(0x129330E0)
#define OIBIIIAFJMF_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x12933080)
#define OIBIIIAFJMF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x12933150)
#define OIBIIIAFJMF__CTOR_OFFSET UNITYSDK_OFFSET(0x12933070)

inline static constexpr unsigned int OIBIIIAFJMF_TypeDefinitionIndex = 92539;

class OIBIIIAFJMF : public ::System::Object
{
public:
	::System::Int32 HPPOKOLGBJG; // 0x10
	::System::Int32 OGFPEPEEHLP; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBIIIAFJMF__CTOR_OFFSET))(this);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBIIIAFJMF_NGFKBKCFPLK_OFFSET))(this);
	}

	::System::Void IBBLCAOMCKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBIIIAFJMF_IBBLCAOMCKF_OFFSET))(this);
	}

	::System::Void LCKALIGMIBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBIIIAFJMF_LCKALIGMIBB_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIBIIIAFJMF_PHOADBJGFBE_OFFSET))(this);
	}
};
