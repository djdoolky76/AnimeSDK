#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupCategory.h"
#include "unitysdk/System/Object.h"

#define MALIFMHGNFC_AOBBAOPIHHB_OFFSET UNITYSDK_OFFSET(0xB84C650)

inline static constexpr unsigned int MALIFMHGNFC_TypeDefinitionIndex = 62195;

	class MALIFMHGNFC : public ::System::Object
	{
	public:
		static ::System::Boolean AOBBAOPIHHB(::RPG::GameCore::GroupCategory a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GroupCategory))((::PBYTE)hIl2Cpp + MALIFMHGNFC_AOBBAOPIHHB_OFFSET))(a1);
		}

	};
