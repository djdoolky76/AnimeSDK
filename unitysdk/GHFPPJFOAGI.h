#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GHFPPJFOAGI;
namespace RPG::GameCore { class DynamicString; }

#define GHFPPJFOAGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE184D0)
#define GHFPPJFOAGI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE184E0)
#define GHFPPJFOAGI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE184A0)

inline static constexpr unsigned int GHFPPJFOAGI_TypeDefinitionIndex = 22157;

	class GHFPPJFOAGI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicString*>* HNFMNLPOMNK; // 0x18
		::RPG::GameCore::DynamicString* BFLIFKBEOPJ; // 0x20
		::RPG::GameCore::DynamicString* PKBDBFBPLEN; // 0x28
		::RPG::GameCore::DynamicString* LKDLEDLIANP; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHFPPJFOAGI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GHFPPJFOAGI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GHFPPJFOAGI*))((::PBYTE)hIl2Cpp + GHFPPJFOAGI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GHFPPJFOAGI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GHFPPJFOAGI*))((::PBYTE)hIl2Cpp + GHFPPJFOAGI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
