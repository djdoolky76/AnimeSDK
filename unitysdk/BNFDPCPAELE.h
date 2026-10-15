#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BNFDPCPAELE;
class FCOEMCEDLNL;
namespace System { class String; }

#define BNFDPCPAELE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9BB970)
#define BNFDPCPAELE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9BB980)
#define BNFDPCPAELE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9BB940)

inline static constexpr unsigned int BNFDPCPAELE_TypeDefinitionIndex = 22253;

	class BNFDPCPAELE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* GEKKHNPKLIB; // 0x18
		::Il2CppArray<::System::String*>* EBBDLBHHPGB; // 0x20
		::System::Boolean GHPBDLBCLFE; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFDPCPAELE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BNFDPCPAELE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BNFDPCPAELE*))((::PBYTE)hIl2Cpp + BNFDPCPAELE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BNFDPCPAELE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BNFDPCPAELE*))((::PBYTE)hIl2Cpp + BNFDPCPAELE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
