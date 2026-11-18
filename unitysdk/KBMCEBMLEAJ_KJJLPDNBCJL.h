#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class KBMCEBMLEAJ;
namespace MoleMole::Config { class ConfigSlideRopeLockCamera; }

#define KBMCEBMLEAJ_KJJLPDNBCJL_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x155DAD70)
#define KBMCEBMLEAJ_KJJLPDNBCJL__CTOR_OFFSET UNITYSDK_OFFSET(0x155DAB50)

inline static constexpr unsigned int KBMCEBMLEAJ_KJJLPDNBCJL_TypeDefinitionIndex = 61152;

class KBMCEBMLEAJ_KJJLPDNBCJL : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10
	::KBMCEBMLEAJ* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMCEBMLEAJ_KJJLPDNBCJL__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigSlideRopeLockCamera* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSlideRopeLockCamera*))((::PBYTE)hIl2Cpp + KBMCEBMLEAJ_KJJLPDNBCJL_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
