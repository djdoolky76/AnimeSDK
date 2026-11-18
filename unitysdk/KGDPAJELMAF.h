#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJFGDPFPPOD.h"
#include "unitysdk/FLMJPFJKBGG.h"

class OIDJCHDHPOG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KGDPAJELMAF_AFCMCJLGJDL_OFFSET UNITYSDK_OFFSET(0x1520C770)
#define KGDPAJELMAF_BMGMBKGNMDI_OFFSET UNITYSDK_OFFSET(0x1520C760)
#define KGDPAJELMAF_EPEGKMMLHLJ_OFFSET UNITYSDK_OFFSET(0x1520C970)
#define KGDPAJELMAF_GBCMGGNEKAO_OFFSET UNITYSDK_OFFSET(0x1520CA20)
#define KGDPAJELMAF_IGCOOFCKFCD_OFFSET UNITYSDK_OFFSET(0x1520CA00)
#define KGDPAJELMAF_ODOJPADCCMJ_OFFSET UNITYSDK_OFFSET(0x1520CA10)
#define KGDPAJELMAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1520C8F0)

inline static constexpr unsigned int KGDPAJELMAF_TypeDefinitionIndex = 44871;

class KGDPAJELMAF : public ::FLMJPFJKBGG
{
public:
	::System::Collections::Generic::List_1<::OIDJCHDHPOG*>* _PAAIDPHKPOP_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDPAJELMAF__CTOR_OFFSET))(this);
	}

	::DJFGDPFPPOD BMGMBKGNMDI()
	{
		return ((::DJFGDPFPPOD(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDPAJELMAF_BMGMBKGNMDI_OFFSET))(this);
	}

	::System::Boolean AFCMCJLGJDL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDPAJELMAF_AFCMCJLGJDL_OFFSET))(this);
	}

	::System::Boolean EPEGKMMLHLJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDPAJELMAF_EPEGKMMLHLJ_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::OIDJCHDHPOG*>* IGCOOFCKFCD()
	{
		return ((::System::Collections::Generic::List_1<::OIDJCHDHPOG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDPAJELMAF_IGCOOFCKFCD_OFFSET))(this);
	}

	::System::Void ODOJPADCCMJ(::System::Collections::Generic::List_1<::OIDJCHDHPOG*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::OIDJCHDHPOG*>*))((::PBYTE)hIl2Cpp + KGDPAJELMAF_ODOJPADCCMJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GBCMGGNEKAO(::OIDJCHDHPOG* OPMPKFEHOBM)
	{
		return ((::System::Void(*)(::PVOID, ::OIDJCHDHPOG*))((::PBYTE)hIl2Cpp + KGDPAJELMAF_GBCMGGNEKAO_OFFSET))(this, OPMPKFEHOBM);
	}
};
