#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DEPCKFHMMHD.h"
namespace RPG::GameCore { class IAvatarSkillCommonRowWrap; }

#define DIOEHMBGLFA_KMAKLLEGBHI_OFFSET UNITYSDK_OFFSET(0xF225490)

	class DIOEHMBGLFA : public ::System::Object
	{
	public:
		static ::RPG::GameCore::IAvatarSkillCommonRowWrap* KMAKLLEGBHI(::DEPCKFHMMHD a1)
		{
			return ((::RPG::GameCore::IAvatarSkillCommonRowWrap*(*)(::DEPCKFHMMHD))((::PBYTE)hIl2Cpp + DIOEHMBGLFA_KMAKLLEGBHI_OFFSET))(a1);
		}

	};
