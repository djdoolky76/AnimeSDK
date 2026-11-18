#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeBuffer; }

#define EPBCKEFEADP_LANFEMKBOMJ_GAHDKKGNBKG_OFFSET UNITYSDK_OFFSET(0x10F4CED0)
#define EPBCKEFEADP_LANFEMKBOMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x10F4CEC0)

inline static constexpr unsigned int EPBCKEFEADP_LANFEMKBOMJ_TypeDefinitionIndex = 90005;

class EPBCKEFEADP_LANFEMKBOMJ : public ::System::Object
{
public:
	::UnityEngine::ComputeBuffer* AEKNCLLFMAL; // 0x10
	::UnityEngine::ComputeBuffer* PHLBMMEANJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBCKEFEADP_LANFEMKBOMJ__CTOR_OFFSET))(this);
	}

	::System::Void GAHDKKGNBKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBCKEFEADP_LANFEMKBOMJ_GAHDKKGNBKG_OFFSET))(this);
	}
};
