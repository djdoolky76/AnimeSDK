#pragma once
#include "unitysdk/unitysdk.h"
class GGJFAFONDHN;
namespace UnityEngine { class Gradient; }

#define ENVIROMENTSYSTEMV2SPACE_LAYOUTGRADIENTPROPERTYDATA_BLBAJHCAMNE_OFFSET UNITYSDK_OFFSET(0x15649AC0)
#define ENVIROMENTSYSTEMV2SPACE_LAYOUTGRADIENTPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x15649C30)
#define ENVIROMENTSYSTEMV2SPACE_LAYOUTGRADIENTPROPERTYDATA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x15649B70)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int LayoutGradientPropertyData_TypeDefinitionIndex = 49378;

	class LayoutGradientPropertyData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTGRADIENTPROPERTYDATA_CTOR_OFFSET))(this);
		}

		::UnityEngine::Gradient* BLBAJHCAMNE(::UnityEngine::Gradient* a1)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTGRADIENTPROPERTYDATA_BLBAJHCAMNE_OFFSET))(this, a1);
		}

		::GGJFAFONDHN* FCMDLFKMBMH()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_LAYOUTGRADIENTPROPERTYDATA_FCMDLFKMBMH_OFFSET))(this);
		}

	};
}
