#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarNumColor.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define CHLFHGDLDAF_CBOJKGGGMBL_OFFSET UNITYSDK_OFFSET(0xCF595E0)
#define CHLFHGDLDAF_CTOR_OFFSET UNITYSDK_OFFSET(0xCF59680)

inline static constexpr unsigned int CHLFHGDLDAF_TypeDefinitionIndex = 81045;

	class CHLFHGDLDAF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHLFHGDLDAF_CTOR_OFFSET))(this);
		}

		::System::String* CBOJKGGGMBL(::RPG::GameCore::MonsterEnergyBarNumColor a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::MonsterEnergyBarNumColor))((::PBYTE)hIl2Cpp + CHLFHGDLDAF_CBOJKGGGMBL_OFFSET))(this, a1);
		}

	};
