#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FGCOIBFFCHB;
class NHBKOAFICNL;
namespace UnityEngine { class Material; }

#define NHKFHFDAIIH_CFPIHIJPGOI_OFFSET UNITYSDK_OFFSET(0xE19A330)
#define NHKFHFDAIIH_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0xE19A1E0)
#define NHKFHFDAIIH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE19A170)
#define NHKFHFDAIIH_FNGDMKPLNKM_OFFSET UNITYSDK_OFFSET(0xE19A270)
#define NHKFHFDAIIH_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0xE19A2D0)
#define NHKFHFDAIIH__CTOR_OFFSET UNITYSDK_OFFSET(0xE19A090)

inline static constexpr unsigned int NHKFHFDAIIH_TypeDefinitionIndex = 63545;

class NHKFHFDAIIH : public ::System::Object
{
public:
	::NHBKOAFICNL* OLHJBEJMOLA; // 0x10
	::NHBKOAFICNL* POOKDGCBHPF; // 0x18

	::System::Void _ctor(::FGCOIBFFCHB* GMKLLBIKFPF, ::FGCOIBFFCHB* KKBLOHHGLCK)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + NHKFHFDAIIH__CTOR_OFFSET))(this, GMKLLBIKFPF, KKBLOHHGLCK);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKFHFDAIIH_DISPOSE_OFFSET))(this);
	}

	static ::NHKFHFDAIIH* COKNIICCODC(::FGCOIBFFCHB* GMKLLBIKFPF, ::FGCOIBFFCHB* KKBLOHHGLCK)
	{
		return ((::NHKFHFDAIIH*(*)(::FGCOIBFFCHB*, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + NHKFHFDAIIH_COKNIICCODC_OFFSET))(GMKLLBIKFPF, KKBLOHHGLCK);
	}

	::UnityEngine::Material* FNGDMKPLNKM()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKFHFDAIIH_FNGDMKPLNKM_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKFHFDAIIH_NPOLNFDBOOD_OFFSET))(this);
	}

	::UnityEngine::Material* CFPIHIJPGOI()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKFHFDAIIH_CFPIHIJPGOI_OFFSET))(this);
	}
};
