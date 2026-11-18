#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define FICFJNHPEBP_OHGFFLBILJO_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x116B3C60)
#define FICFJNHPEBP_OHGFFLBILJO_HOFIFAEOLBM_OFFSET UNITYSDK_OFFSET(0x116B3BD0)
#define FICFJNHPEBP_OHGFFLBILJO_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x116B39D0)
#define FICFJNHPEBP_OHGFFLBILJO__CTOR_OFFSET UNITYSDK_OFFSET(0x116B39C0)

inline static constexpr unsigned int FICFJNHPEBP_OHGFFLBILJO_TypeDefinitionIndex = 88889;

class FICFJNHPEBP_OHGFFLBILJO : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* MIBFFDOHHLG; // 0x10
	::Foundation::ViewObject::ViewObjectHandle MDFCIHDPJJK; // 0x18
	::System::Int32 COMDNFILAIC; // 0x28
	::System::Boolean LLCDMKLMHFK; // 0x2C
	::System::Boolean OLCIELHADAF; // 0x2D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICFJNHPEBP_OHGFFLBILJO__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::System::Boolean DOFCLPCLHOJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FICFJNHPEBP_OHGFFLBILJO_LIDNPLMPHAL_OFFSET))(this, DOFCLPCLHOJ);
	}

	::System::Void HOFIFAEOLBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICFJNHPEBP_OHGFFLBILJO_HOFIFAEOLBM_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICFJNHPEBP_OHGFFLBILJO_AAHMACBDCPN_OFFSET))(this);
	}
};
