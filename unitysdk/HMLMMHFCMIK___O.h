#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class NotifyHandler; }

inline static constexpr unsigned int HMLMMHFCMIK___O_TypeDefinitionIndex = 61910;

	class HMLMMHFCMIK___O : public ::System::Object
	{
	public:
		static ::RPG::Client::NotifyHandler** StaticGet__0____OnOwnerGroupEntitiesCreated()
		{
			return (::RPG::Client::NotifyHandler**)UnitySDK::FromName("", "<>O")->GetStaticField(0x1B480);
		}

	};
