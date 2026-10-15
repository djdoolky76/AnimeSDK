#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class JFIGEFGFEDP;
class MBBBCMLOCFI;

#define CINNKNDDBDM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCF8FD60)
#define CINNKNDDBDM_CTOR_OFFSET UNITYSDK_OFFSET(0xCF8FFA0)
#define CINNKNDDBDM_OEJDHFKEDJB_OFFSET UNITYSDK_OFFSET(0xCF8FF40)

inline static constexpr unsigned int CINNKNDDBDM_TypeDefinitionIndex = 62632;

	class CINNKNDDBDM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINNKNDDBDM_CTOR_OFFSET))(this);
		}

		::MBBBCMLOCFI* BPLPBPMEODA(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::MBBBCMLOCFI*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CINNKNDDBDM_BPLPBPMEODA_OFFSET))(this, a1);
		}

		::JFIGEFGFEDP* OEJDHFKEDJB(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::JFIGEFGFEDP*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CINNKNDDBDM_OEJDHFKEDJB_OFFSET))(this, a1);
		}

	};
