#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class HPIILKMDMFO;
namespace MoleMole::Battle { class Entity; }

#define AHDMABNOOJF_JPPAPAPFPFP_1_OFFSET UNITYSDK_OFFSET(0x16FEBAE0)
#define AHDMABNOOJF_JPPAPAPFPFP_OFFSET UNITYSDK_OFFSET(0x16FEB8A0)
#define AHDMABNOOJF_PNOFNBPPMBJ_OFFSET UNITYSDK_OFFSET(0x16FEBA10)

inline static constexpr unsigned int AHDMABNOOJF_TypeDefinitionIndex = 89818;

class AHDMABNOOJF : public ::System::Object
{
public:
	static ::HPIILKMDMFO* JPPAPAPFPFP(::MoleMole::EntityHandle KECKGDFIALJ)
	{
		return ((::HPIILKMDMFO*(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + AHDMABNOOJF_JPPAPAPFPFP_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean PNOFNBPPMBJ(::Foundation::ViewObject::ViewObjectHandle EOJOGGEFMFC)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + AHDMABNOOJF_PNOFNBPPMBJ_OFFSET))(EOJOGGEFMFC);
	}

	static ::HPIILKMDMFO* JPPAPAPFPFP_1(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::HPIILKMDMFO*(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + AHDMABNOOJF_JPPAPAPFPFP_1_OFFSET))(KECKGDFIALJ);
	}
};
