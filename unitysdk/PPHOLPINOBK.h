#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"

#define PPHOLPINOBK_CTOR_OFFSET UNITYSDK_OFFSET(0xC3873C0)
#define PPHOLPINOBK_JCEBBIMJCMK_OFFSET UNITYSDK_OFFSET(0xC387300)

inline static constexpr unsigned int PPHOLPINOBK_TypeDefinitionIndex = 62655;

	class PPHOLPINOBK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHOLPINOBK_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::GenderType JCEBBIMJCMK()
		{
			return ((::RPG::GameCore::GenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + PPHOLPINOBK_JCEBBIMJCMK_OFFSET))(this);
		}

	};
