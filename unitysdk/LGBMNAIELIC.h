#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JPCONPIKIEK.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
namespace System { class String; }

#define LGBMNAIELIC_KEBIHOIOKKB_OFFSET UNITYSDK_OFFSET(0x1D0EBC80)

	class LGBMNAIELIC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>* KEBIHOIOKKB(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::JPCONPIKIEK> a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::JPCONPIKIEK>))((::PBYTE)hIl2Cpp + LGBMNAIELIC_KEBIHOIOKKB_OFFSET))(a1);
		}

	};
