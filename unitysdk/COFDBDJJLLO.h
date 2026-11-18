#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLIENDJOCKH.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CILEDGOLNIL.h"

class CJIEIHEDMME;
namespace MoleMole { class UIGeneralRewardBagPopWindowController; }

#define COFDBDJJLLO_IMGKKFECBLK_OFFSET UNITYSDK_OFFSET(0x1A1C3FB0)
#define COFDBDJJLLO_LPGEALPNJLB_OFFSET UNITYSDK_OFFSET(0x1A1C2A60)
#define COFDBDJJLLO_MKCENHECMPJ_OFFSET UNITYSDK_OFFSET(0x1A1C3A00)
#define COFDBDJJLLO_NMDCNHBBAEF_OFFSET UNITYSDK_OFFSET(0x1A1C3680)
#define COFDBDJJLLO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C2A50)

inline static constexpr unsigned int COFDBDJJLLO_TypeDefinitionIndex = 89709;

class COFDBDJJLLO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COFDBDJJLLO__CTOR_OFFSET))(this);
	}

	static ::System::Void LPGEALPNJLB(::CJIEIHEDMME* DPLFPODJFCJ, ::MLIENDJOCKH HJIPCACGAHO)
	{
		return ((::System::Void(*)(::CJIEIHEDMME*, ::MLIENDJOCKH))((::PBYTE)hIl2Cpp + COFDBDJJLLO_LPGEALPNJLB_OFFSET))(DPLFPODJFCJ, HJIPCACGAHO);
	}

	static ::System::Void NMDCNHBBAEF(::CJIEIHEDMME* LADPIPOMBJM, ::System::Int32 FKPHHIKNEMF)
	{
		return ((::System::Void(*)(::CJIEIHEDMME*, ::System::Int32))((::PBYTE)hIl2Cpp + COFDBDJJLLO_NMDCNHBBAEF_OFFSET))(LADPIPOMBJM, FKPHHIKNEMF);
	}

	static ::MoleMole::UIGeneralRewardBagPopWindowController* IMGKKFECBLK(::CILEDGOLNIL OKONJGCIPIN)
	{
		return ((::MoleMole::UIGeneralRewardBagPopWindowController*(*)(::CILEDGOLNIL))((::PBYTE)hIl2Cpp + COFDBDJJLLO_IMGKKFECBLK_OFFSET))(OKONJGCIPIN);
	}

	static ::System::Void MKCENHECMPJ(::CJIEIHEDMME* IHACKHOBPKG, ::System::Int32 FKPHHIKNEMF)
	{
		return ((::System::Void(*)(::CJIEIHEDMME*, ::System::Int32))((::PBYTE)hIl2Cpp + COFDBDJJLLO_MKCENHECMPJ_OFFSET))(IHACKHOBPKG, FKPHHIKNEMF);
	}
};
