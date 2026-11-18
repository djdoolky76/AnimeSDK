#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OHMBEKNHOGM_PJDNEPLBBGC.h"

class OHMBEKNHOGM;
namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }

#define OHMBEKNHOGM_ALHPJFKNECM_BHHFACFMDEJ_OFFSET UNITYSDK_OFFSET(0x10072C60)
#define OHMBEKNHOGM_ALHPJFKNECM_CJPGBDMDBEF_OFFSET UNITYSDK_OFFSET(0x10072CA0)
#define OHMBEKNHOGM_ALHPJFKNECM_LFNIPGIDMJA_OFFSET UNITYSDK_OFFSET(0x10072CD0)
#define OHMBEKNHOGM_ALHPJFKNECM__CTOR_OFFSET UNITYSDK_OFFSET(0x10072C50)

inline static constexpr unsigned int OHMBEKNHOGM_ALHPJFKNECM_TypeDefinitionIndex = 53862;

class OHMBEKNHOGM_ALHPJFKNECM : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtualPipelineCamera* NNBIPFKGNMG; // 0x10
	::OHMBEKNHOGM* KLHPEBKNIFB; // 0x18
	::PipelineCamera::CameraCommandUnSpawnSubModules* MJJIOHKLAKK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMBEKNHOGM_ALHPJFKNECM__CTOR_OFFSET))(this);
	}

	::System::Void BHHFACFMDEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMBEKNHOGM_ALHPJFKNECM_BHHFACFMDEJ_OFFSET))(this);
	}

	::System::Void CJPGBDMDBEF(::OHMBEKNHOGM_PJDNEPLBBGC PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OHMBEKNHOGM_PJDNEPLBBGC))((::PBYTE)hIl2Cpp + OHMBEKNHOGM_ALHPJFKNECM_CJPGBDMDBEF_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void LFNIPGIDMJA(::OHMBEKNHOGM_PJDNEPLBBGC OIFAGALBPHC)
	{
		return ((::System::Void(*)(::PVOID, ::OHMBEKNHOGM_PJDNEPLBBGC))((::PBYTE)hIl2Cpp + OHMBEKNHOGM_ALHPJFKNECM_LFNIPGIDMJA_OFFSET))(this, OIFAGALBPHC);
	}
};
