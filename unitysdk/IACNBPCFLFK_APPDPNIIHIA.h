#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"

#define IACNBPCFLFK_APPDPNIIHIA_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x1A38DB20)
#define IACNBPCFLFK_APPDPNIIHIA_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x1A38DA80)
#define IACNBPCFLFK_APPDPNIIHIA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A38DA70)

inline static constexpr unsigned int IACNBPCFLFK_APPDPNIIHIA_TypeDefinitionIndex = 81809;

class IACNBPCFLFK_APPDPNIIHIA : public ::System::Object
{
public:
	::HOCDHMEPPEG ABMKEFPKPMD; // 0x10
	::HOCDHMEPPEG GPELAKKMLBG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IACNBPCFLFK_APPDPNIIHIA__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::Foundation::ViewObject::ViewObjectHandle DMIAICJPPDL)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + IACNBPCFLFK_APPDPNIIHIA_LIDNPLMPHAL_OFFSET))(this, DMIAICJPPDL);
	}

	::System::Void AAHMACBDCPN(::System::Int32 NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IACNBPCFLFK_APPDPNIIHIA_AAHMACBDCPN_OFFSET))(this, NFFNEFLKPDG);
	}
};
