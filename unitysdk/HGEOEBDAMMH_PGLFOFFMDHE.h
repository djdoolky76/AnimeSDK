#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsEntity; }

#define HGEOEBDAMMH_PGLFOFFMDHE_AIAPHOPHNNN_OFFSET UNITYSDK_OFFSET(0x14D276D0)
#define HGEOEBDAMMH_PGLFOFFMDHE_AJDJNGHFHMB_OFFSET UNITYSDK_OFFSET(0x14D276C0)
#define HGEOEBDAMMH_PGLFOFFMDHE_CLPDJMFFPPD_OFFSET UNITYSDK_OFFSET(0x14D276B0)
#define HGEOEBDAMMH_PGLFOFFMDHE_DCDJPPFOCNH_OFFSET UNITYSDK_OFFSET(0x14D276A0)
#define HGEOEBDAMMH_PGLFOFFMDHE_DNKCJCDDICJ_OFFSET UNITYSDK_OFFSET(0x14D276E0)
#define HGEOEBDAMMH_PGLFOFFMDHE__CTOR_OFFSET UNITYSDK_OFFSET(0x14D27690)

inline static constexpr unsigned int HGEOEBDAMMH_PGLFOFFMDHE_TypeDefinitionIndex = 92369;

class HGEOEBDAMMH_PGLFOFFMDHE : public ::System::Object
{
public:
	::Nap::NapECS::EcsEntity* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEOEBDAMMH_PGLFOFFMDHE__CTOR_OFFSET))(this);
	}

	::System::Void DCDJPPFOCNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEOEBDAMMH_PGLFOFFMDHE_DCDJPPFOCNH_OFFSET))(this);
	}

	::System::Void CLPDJMFFPPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEOEBDAMMH_PGLFOFFMDHE_CLPDJMFFPPD_OFFSET))(this);
	}

	::System::Void AJDJNGHFHMB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEOEBDAMMH_PGLFOFFMDHE_AJDJNGHFHMB_OFFSET))(this);
	}

	::System::Void AIAPHOPHNNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEOEBDAMMH_PGLFOFFMDHE_AIAPHOPHNNN_OFFSET))(this);
	}

	::System::Void DNKCJCDDICJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEOEBDAMMH_PGLFOFFMDHE_DNKCJCDDICJ_OFFSET))(this);
	}
};
