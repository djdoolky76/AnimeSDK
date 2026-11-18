#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPOKAJKNFDC.h"

namespace DG::Tweening { class Tweener; }
namespace UnityEngine { class CanvasGroup; }

#define IFIGHOJCEDJ_BJGKNPEODIH_OFFSET UNITYSDK_OFFSET(0x1013B7D0)
#define IFIGHOJCEDJ_GDNAMBNANDE_OFFSET UNITYSDK_OFFSET(0x1013B730)
#define IFIGHOJCEDJ_HONDPMGLADB_OFFSET UNITYSDK_OFFSET(0x1013B530)
#define IFIGHOJCEDJ_LBJNLOIAAFO_OFFSET UNITYSDK_OFFSET(0x1013B580)
#define IFIGHOJCEDJ_MNKAEJGAPAE_OFFSET UNITYSDK_OFFSET(0x1013B150)
#define IFIGHOJCEDJ_PCEPOEIOFBN_OFFSET UNITYSDK_OFFSET(0x1013B100)
#define IFIGHOJCEDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1013B720)

inline static constexpr unsigned int IFIGHOJCEDJ_TypeDefinitionIndex = 63664;

class IFIGHOJCEDJ : public ::CPOKAJKNFDC
{
public:
	// static const ::System::Single IGFFPLFKPHG; // 0x0
	// static const ::System::Single GPDOHGGGOID; // 0x0
	::DG::Tweening::Tweener* DKGGACLALBA; // 0x28
	::UnityEngine::CanvasGroup* HAEHJMCNKJB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIGHOJCEDJ__CTOR_OFFSET))(this);
	}

	::System::Void PCEPOEIOFBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIGHOJCEDJ_PCEPOEIOFBN_OFFSET))(this);
	}

	::System::Void HONDPMGLADB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIGHOJCEDJ_HONDPMGLADB_OFFSET))(this);
	}

	::System::Void GDNAMBNANDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIGHOJCEDJ_GDNAMBNANDE_OFFSET))(this);
	}

	::System::Void BJGKNPEODIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIGHOJCEDJ_BJGKNPEODIH_OFFSET))(this);
	}

	::System::Void MNKAEJGAPAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIGHOJCEDJ_MNKAEJGAPAE_OFFSET))(this);
	}

	::System::Void LBJNLOIAAFO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIGHOJCEDJ_LBJNLOIAAFO_OFFSET))(this);
	}
};
