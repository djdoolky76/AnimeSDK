#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"
#include "unitysdk/System/Object.h"
class JNECDENNOOB;
class OFKKIMABHJD;

#define DMADJEDDOLM_IPGNDDNDKLI_OFFSET UNITYSDK_OFFSET(0xFEB6460)

	class DMADJEDDOLM : public ::System::Object
	{
	public:
		static ::JNECDENNOOB* IPGNDDNDKLI(::RPG::Client::FateGameStateType a1, ::OFKKIMABHJD* a2)
		{
			return ((::JNECDENNOOB*(*)(::RPG::Client::FateGameStateType, ::OFKKIMABHJD*))((::PBYTE)hIl2Cpp + DMADJEDDOLM_IPGNDDNDKLI_OFFSET))(a1, a2);
		}

	};
