#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class GDBADFKOFFG_LIIEKAEHIEN;

#define GDBADFKOFFG_IODCDJHHPOH_DEOFHIEEIHN_OFFSET UNITYSDK_OFFSET(0x179D3060)
#define GDBADFKOFFG_IODCDJHHPOH__CTOR_OFFSET UNITYSDK_OFFSET(0x179D3050)

inline static constexpr unsigned int GDBADFKOFFG_IODCDJHHPOH_TypeDefinitionIndex = 74130;

class GDBADFKOFFG_IODCDJHHPOH : public ::System::Object
{
public:
	::GDBADFKOFFG_LIIEKAEHIEN* FGBNBFHOKAA; // 0x10
	::MoleMole::EntityHandle KECKGDFIALJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_IODCDJHHPOH__CTOR_OFFSET))(this);
	}

	::System::Void DEOFHIEEIHN(::System::Single JKEFCEJCLCL, ::System::Int32 ELMCCMIDEMF, ::System::Single OKDOJEPALHK, ::System::Int32 HDKDKDLJPBF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + GDBADFKOFFG_IODCDJHHPOH_DEOFHIEEIHN_OFFSET))(this, JKEFCEJCLCL, ELMCCMIDEMF, OKDOJEPALHK, HDKDKDLJPBF);
	}
};
