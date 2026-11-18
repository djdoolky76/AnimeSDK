#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FGCOIBFFCHB;
namespace UnityEngine { class Material; }

#define NHBKOAFICNL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x121020C0)
#define NHBKOAFICNL_HNFEGIJMMEJ_OFFSET UNITYSDK_OFFSET(0x12102380)
#define NHBKOAFICNL_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x12102200)
#define NHBKOAFICNL_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x121023A0)
#define NHBKOAFICNL_ONEAIKECMFL_OFFSET UNITYSDK_OFFSET(0x12102390)
#define NHBKOAFICNL__CTOR_OFFSET UNITYSDK_OFFSET(0x12101E20)

inline static constexpr unsigned int NHBKOAFICNL_TypeDefinitionIndex = 81034;

class NHBKOAFICNL : public ::System::Object
{
public:
	::UnityEngine::Material* _JBAFACKNPBC_k__BackingField; // 0x10
	::FGCOIBFFCHB* HPEFMJFCIHN; // 0x18
	::UnityEngine::Material* DKANPKBIMFM; // 0x20

	::System::Void _ctor(::FGCOIBFFCHB* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + NHBKOAFICNL__CTOR_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHBKOAFICNL_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::Material* HNFEGIJMMEJ()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHBKOAFICNL_HNFEGIJMMEJ_OFFSET))(this);
	}

	static ::UnityEngine::Material* LJMIPGJJELP(::UnityEngine::Material* AEIHFBNNLBP)
	{
		return ((::UnityEngine::Material*(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + NHBKOAFICNL_LJMIPGJJELP_OFFSET))(AEIHFBNNLBP);
	}

	::System::Void ONEAIKECMFL(::UnityEngine::Material* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + NHBKOAFICNL_ONEAIKECMFL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHBKOAFICNL_NPOLNFDBOOD_OFFSET))(this);
	}
};
