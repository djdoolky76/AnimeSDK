#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNGPLDGOEAI.h"
namespace RPG::Client { class MonoExUICamera; }

#define COIEHCGMKEH_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB0FA0)
#define COIEHCGMKEH_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xDCB0FB0)

inline static constexpr unsigned int COIEHCGMKEH_TypeDefinitionIndex = 72965;

	class COIEHCGMKEH : public ::GNGPLDGOEAI
	{
	public:
		::System::Void _ctor(::RPG::Client::MonoExUICamera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoExUICamera*))((::PBYTE)hIl2Cpp + COIEHCGMKEH_CTOR_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COIEHCGMKEH_PAGKOAEOLKA_OFFSET))(this);
		}

	};
