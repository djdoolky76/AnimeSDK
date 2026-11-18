#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class KBMCEBMLEAJ;
namespace MoleMole::Config { class ConfigSlideRopeLockCamera; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define KBMCEBMLEAJ_MLFFDAOPBHF_FGDJOAANEHC_OFFSET UNITYSDK_OFFSET(0x152BE400)
#define KBMCEBMLEAJ_MLFFDAOPBHF__CTOR_OFFSET UNITYSDK_OFFSET(0x152BE3F0)

inline static constexpr unsigned int KBMCEBMLEAJ_MLFFDAOPBHF_TypeDefinitionIndex = 61151;

class KBMCEBMLEAJ_MLFFDAOPBHF : public ::System::Object
{
public:
	::Il2CppArray<::Foundation::AssetPath>* JPOGGACGEPO; // 0x10
	::KBMCEBMLEAJ* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMCEBMLEAJ_MLFFDAOPBHF__CTOR_OFFSET))(this);
	}

	::System::Void FGDJOAANEHC(::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigSlideRopeLockCamera*>* INBACCBOBDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Config::ConfigSlideRopeLockCamera*>*))((::PBYTE)hIl2Cpp + KBMCEBMLEAJ_MLFFDAOPBHF_FGDJOAANEHC_OFFSET))(this, INBACCBOBDN);
	}
};
