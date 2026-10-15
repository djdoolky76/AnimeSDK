#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CharacterOutfitPartConfig; }
namespace System { class String; }

#define NJDDOGKCCMC_CTOR_OFFSET UNITYSDK_OFFSET(0xBC0AFA0)
#define NJDDOGKCCMC_KJPFJGHMMBJ_OFFSET UNITYSDK_OFFSET(0xBC0AEA0)

inline static constexpr unsigned int NJDDOGKCCMC_TypeDefinitionIndex = 80175;

	class NJDDOGKCCMC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJDDOGKCCMC_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::CharacterOutfitPartConfig* KJPFJGHMMBJ(::System::String* a1)
		{
			return ((::RPG::GameCore::CharacterOutfitPartConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NJDDOGKCCMC_KJPFJGHMMBJ_OFFSET))(this, a1);
		}

	};
