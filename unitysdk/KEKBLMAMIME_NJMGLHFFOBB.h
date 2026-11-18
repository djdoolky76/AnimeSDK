#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GHICACFMBNP;
namespace UnityEngine { class RectTransform; }

#define KEKBLMAMIME_NJMGLHFFOBB_BHBEKMKMFHK_OFFSET UNITYSDK_OFFSET(0x157E5D50)
#define KEKBLMAMIME_NJMGLHFFOBB__CTOR_OFFSET UNITYSDK_OFFSET(0x157E5300)

inline static constexpr unsigned int KEKBLMAMIME_NJMGLHFFOBB_TypeDefinitionIndex = 70180;

class KEKBLMAMIME_NJMGLHFFOBB : public ::System::Object
{
public:
	::UnityEngine::RectTransform* ICOKJCNMMGO; // 0x10
	::GHICACFMBNP* MMPGJNECJGP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEKBLMAMIME_NJMGLHFFOBB__CTOR_OFFSET))(this);
	}

	::System::Void BHBEKMKMFHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEKBLMAMIME_NJMGLHFFOBB_BHBEKMKMFHK_OFFSET))(this);
	}
};
