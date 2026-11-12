#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEGNLMENMJK;
namespace RPG::Client::ChenLingBattle { class IEntity; }

#define EJABHKKFFCK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16416090)

inline static constexpr unsigned int EJABHKKFFCK_TypeDefinitionIndex = 78699;

	class EJABHKKFFCK : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingBattle::IEntity* BPLPBPMEODA(::LEGNLMENMJK* a1)
		{
			return ((::RPG::Client::ChenLingBattle::IEntity*(*)(::LEGNLMENMJK*))((::PBYTE)hIl2Cpp + EJABHKKFFCK_BPLPBPMEODA_OFFSET))(a1);
		}

	};
