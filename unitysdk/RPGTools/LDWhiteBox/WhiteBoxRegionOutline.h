#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPGTools::LDWhiteBox { class WhiteBoxRegion; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGIONOUTLINE_CTOR_OFFSET UNITYSDK_OFFSET(0xF372940)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGIONOUTLINE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xF3726E0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGIONOUTLINE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xF3728E0)

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int WhiteBoxRegionOutline_TypeDefinitionIndex = 50020;

	class WhiteBoxRegionOutline : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Mesh* IANLCOHGLKP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGIONOUTLINE_CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::RPGTools::LDWhiteBox::WhiteBoxRegion* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxRegion*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGIONOUTLINE_INITIALIZE_OFFSET))(this, a1, a2);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGIONOUTLINE_ONDESTROY_OFFSET))(this);
		}

	};
}
