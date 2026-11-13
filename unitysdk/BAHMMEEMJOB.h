#pragma once
#include "unitysdk/unitysdk.h"
class GEDMHFPPBHN;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define BAHMMEEMJOB_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x3E3FFD0)
#define BAHMMEEMJOB_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x3E40020)
#define BAHMMEEMJOB_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x3E40070)

inline static constexpr unsigned int BAHMMEEMJOB_TypeDefinitionIndex = 73290;

	struct alignas(8) BAHMMEEMJOB
	{
		::GEDMHFPPBHN* BGFPGNDIOII; // 0x10
		::RPG::GameCore::TurnBasedModifierInstance* ONAMIKEJIKI; // 0x18
		::System::Boolean OEDLHCKOKFD; // 0x20
		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHMMEEMJOB_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHMMEEMJOB_KKKIONIDKFA_OFFSET))(this);
		}

		/*
		::System::Void PAGKOAEOLKA(::BAHMMEEMJOB a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAHMMEEMJOB))((::PBYTE)hIl2Cpp + BAHMMEEMJOB_PAGKOAEOLKA_OFFSET))(this, a1);
		}
		*/

	};
