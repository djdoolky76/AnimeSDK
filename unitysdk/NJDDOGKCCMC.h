#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CharacterOutfitPartConfig; }
namespace System { class String; }

#define NJDDOGKCCMC_CTOR_OFFSET UNITYSDK_OFFSET(0x148E3E60)
#define NJDDOGKCCMC_KJPFJGHMMBJ_OFFSET UNITYSDK_OFFSET(0x148E3D60)

inline static constexpr unsigned int NJDDOGKCCMC_TypeDefinitionIndex = 82951;

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
