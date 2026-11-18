#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJCAJJEAJPC.h"

class PGGNMDENAJI;
namespace Nap::NapECS { class EcsWorld; }

#define IIOBJGJHKOM_BLNBICPOEOA_OFFSET UNITYSDK_OFFSET(0xEBDF390)
#define IIOBJGJHKOM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xEBDF190)
#define IIOBJGJHKOM_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0xEBDF400)
#define IIOBJGJHKOM__CTOR_OFFSET UNITYSDK_OFFSET(0xEBDF320)

inline static constexpr unsigned int IIOBJGJHKOM_TypeDefinitionIndex = 50304;

class IIOBJGJHKOM : public ::FJCAJJEAJPC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIOBJGJHKOM__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + IIOBJGJHKOM_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	static ::System::Boolean BLNBICPOEOA(::PGGNMDENAJI* AHJGDLDEFHL, ::PGGNMDENAJI* OJMDHDPEPFL)
	{
		return ((::System::Boolean(*)(::PGGNMDENAJI*, ::PGGNMDENAJI*))((::PBYTE)hIl2Cpp + IIOBJGJHKOM_BLNBICPOEOA_OFFSET))(AHJGDLDEFHL, OJMDHDPEPFL);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + IIOBJGJHKOM_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}
};
