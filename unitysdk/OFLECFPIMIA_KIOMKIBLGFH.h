#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define OFLECFPIMIA_KIOMKIBLGFH_FDLNIEGEOLI_OFFSET UNITYSDK_OFFSET(0xFB858B0)
#define OFLECFPIMIA_KIOMKIBLGFH_KDBDLOFDILP_OFFSET UNITYSDK_OFFSET(0xFB85810)
#define OFLECFPIMIA_KIOMKIBLGFH_KLBOKANIGLA_OFFSET UNITYSDK_OFFSET(0xFB85820)
#define OFLECFPIMIA_KIOMKIBLGFH__CTOR_OFFSET UNITYSDK_OFFSET(0xFB85800)

inline static constexpr unsigned int OFLECFPIMIA_KIOMKIBLGFH_TypeDefinitionIndex = 88017;

class OFLECFPIMIA_KIOMKIBLGFH : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLECFPIMIA_KIOMKIBLGFH__CTOR_OFFSET))(this);
	}

	::System::Void KDBDLOFDILP(::System::Int32 IIFMJFJOOCK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OFLECFPIMIA_KIOMKIBLGFH_KDBDLOFDILP_OFFSET))(this, IIFMJFJOOCK);
	}

	::System::Void KLBOKANIGLA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLECFPIMIA_KIOMKIBLGFH_KLBOKANIGLA_OFFSET))(this);
	}

	::System::Void FDLNIEGEOLI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLECFPIMIA_KIOMKIBLGFH_FDLNIEGEOLI_OFFSET))(this);
	}
};
