#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/ContentSizeFitter.h"
#include "unitysdk/UnityEngine/UI/ContentSizeFitter_FitMode.h"

#define MOLEMOLE_SCALEDCONTENTSIZEFITTER_GETSIZEALONGAXIS_OFFSET UNITYSDK_OFFSET(0x1BDE3710)
#define MOLEMOLE_SCALEDCONTENTSIZEFITTER_GMCKIMPPAIE_OFFSET UNITYSDK_OFFSET(0x1BDE3830)
#define MOLEMOLE_SCALEDCONTENTSIZEFITTER_SETSCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1BDE3770)
#define MOLEMOLE_SCALEDCONTENTSIZEFITTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDE37D0)

namespace MoleMole
{
	inline static constexpr unsigned int ScaledContentSizeFitter_TypeDefinitionIndex = 40699;

	class ScaledContentSizeFitter : public ::UnityEngine::UI::ContentSizeFitter
	{
	public:
		::System::Single ScaleFactor; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCALEDCONTENTSIZEFITTER__CTOR_OFFSET))(this);
		}

		::System::Single GetSizeAlongAxis(::System::Int32 BHFAGMPDIGJ, ::UnityEngine::UI::ContentSizeFitter_FitMode BKHKOPMILKH)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::ContentSizeFitter_FitMode))((::PBYTE)hIl2Cpp + MOLEMOLE_SCALEDCONTENTSIZEFITTER_GETSIZEALONGAXIS_OFFSET))(this, BHFAGMPDIGJ, BKHKOPMILKH);
		}

		::System::Void SetScaleFactor(::System::Single CLMNLPKFBFA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SCALEDCONTENTSIZEFITTER_SETSCALEFACTOR_OFFSET))(this, CLMNLPKFBFA);
		}

		::System::Single GMCKIMPPAIE(::System::Int32 MIALFKCCCPI, ::UnityEngine::UI::ContentSizeFitter_FitMode KMGKAIDEIBA)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::ContentSizeFitter_FitMode))((::PBYTE)hIl2Cpp + MOLEMOLE_SCALEDCONTENTSIZEFITTER_GMCKIMPPAIE_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}
	};
}
