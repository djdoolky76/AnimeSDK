#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/System/Object.h"

#define LPDEAPHEMNH_PAANEAMLHMK_OFFSET UNITYSDK_OFFSET(0xB81ABA0)

inline static constexpr unsigned int LPDEAPHEMNH_TypeDefinitionIndex = 64356;

	class LPDEAPHEMNH : public ::System::Object
	{
	public:
		static ::System::UInt32 PAANEAMLHMK(::RPG::Client::LockSource a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::LockSource))((::PBYTE)hIl2Cpp + LPDEAPHEMNH_PAANEAMLHMK_OFFSET))(a1);
		}

	};
