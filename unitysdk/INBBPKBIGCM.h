#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLJLODIBPDF;
namespace RPG::GameCore { class BossInfoBarCustomizedBaseClickConfig; }

#define INBBPKBIGCM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1A5E44D0)

inline static constexpr unsigned int INBBPKBIGCM_TypeDefinitionIndex = 73741;

	class INBBPKBIGCM : public ::System::Object
	{
	public:
		static ::KLJLODIBPDF* BPLPBPMEODA(::RPG::GameCore::BossInfoBarCustomizedBaseClickConfig* a1)
		{
			return ((::KLJLODIBPDF*(*)(::RPG::GameCore::BossInfoBarCustomizedBaseClickConfig*))((::PBYTE)hIl2Cpp + INBBPKBIGCM_BPLPBPMEODA_OFFSET))(a1);
		}

	};
