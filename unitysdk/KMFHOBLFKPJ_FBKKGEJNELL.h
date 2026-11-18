#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KMFHOBLFKPJ;
namespace Nap::NapECS { class EcsEntity; }

#define KMFHOBLFKPJ_FBKKGEJNELL_CHLDJEHPCHG_OFFSET UNITYSDK_OFFSET(0x17726870)
#define KMFHOBLFKPJ_FBKKGEJNELL_GCFAHNBCDNC_OFFSET UNITYSDK_OFFSET(0x177268F0)
#define KMFHOBLFKPJ_FBKKGEJNELL__CTOR_OFFSET UNITYSDK_OFFSET(0x17726860)

inline static constexpr unsigned int KMFHOBLFKPJ_FBKKGEJNELL_TypeDefinitionIndex = 77870;

class KMFHOBLFKPJ_FBKKGEJNELL : public ::System::Object
{
public:
	::Nap::NapECS::EcsEntity* KECKGDFIALJ; // 0x10
	::KMFHOBLFKPJ* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFHOBLFKPJ_FBKKGEJNELL__CTOR_OFFSET))(this);
	}

	::System::Void CHLDJEHPCHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFHOBLFKPJ_FBKKGEJNELL_CHLDJEHPCHG_OFFSET))(this);
	}

	::System::Void GCFAHNBCDNC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFHOBLFKPJ_FBKKGEJNELL_GCFAHNBCDNC_OFFSET))(this);
	}
};
