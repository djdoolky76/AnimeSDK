#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GHICACFMBNP;
namespace UnityEngine { class Camera; }

#define KEKBLMAMIME_FMCNPGJEJJH_IEGIPPEICFB_OFFSET UNITYSDK_OFFSET(0x17644E10)
#define KEKBLMAMIME_FMCNPGJEJJH__CTOR_OFFSET UNITYSDK_OFFSET(0x17644E00)

inline static constexpr unsigned int KEKBLMAMIME_FMCNPGJEJJH_TypeDefinitionIndex = 70179;

class KEKBLMAMIME_FMCNPGJEJJH : public ::System::Object
{
public:
	::GHICACFMBNP* MMPGJNECJGP; // 0x10
	::UnityEngine::Camera* LLFDABJAHII; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEKBLMAMIME_FMCNPGJEJJH__CTOR_OFFSET))(this);
	}

	::System::Void IEGIPPEICFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEKBLMAMIME_FMCNPGJEJJH_IEGIPPEICFB_OFFSET))(this);
	}
};
