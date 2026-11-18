#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class HFMKKILPJJN;

#define HFMKKILPJJN_EBFGINKCLEM_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x19E0CE80)
#define HFMKKILPJJN_EBFGINKCLEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19E0CE70)

inline static constexpr unsigned int HFMKKILPJJN_EBFGINKCLEM_TypeDefinitionIndex = 87650;

class HFMKKILPJJN_EBFGINKCLEM : public ::System::Object
{
public:
	::HFMKKILPJJN* KLHPEBKNIFB; // 0x10
	::HOCDHMEPPEG NBIGCBPDHAL; // 0x18
	::System::Int32 CPCAAOKJHNG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMKKILPJJN_EBFGINKCLEM__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::MoleMole::EntityHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + HFMKKILPJJN_EBFGINKCLEM_LIDNPLMPHAL_OFFSET))(this, PHHDHIBOCKA);
	}
};
