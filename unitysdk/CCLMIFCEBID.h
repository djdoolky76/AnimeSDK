#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CCLMIFCEBID;
class FCOEMCEDLNL;

#define CCLMIFCEBID_CTOR_OFFSET UNITYSDK_OFFSET(0x11569020)
#define CCLMIFCEBID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x11569030)
#define CCLMIFCEBID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x11568FF0)

inline static constexpr unsigned int CCLMIFCEBID_TypeDefinitionIndex = 21895;

	class CCLMIFCEBID : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 NPHAJEKCBKF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLMIFCEBID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CCLMIFCEBID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CCLMIFCEBID*))((::PBYTE)hIl2Cpp + CCLMIFCEBID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CCLMIFCEBID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CCLMIFCEBID*))((::PBYTE)hIl2Cpp + CCLMIFCEBID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
