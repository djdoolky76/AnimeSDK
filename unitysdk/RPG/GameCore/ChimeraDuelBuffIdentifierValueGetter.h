#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelBuffIdentifierValueGetter; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELBUFFIDENTIFIERVALUEGETTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D56E4A0)
#define RPG_GAMECORE_CHIMERADUELBUFFIDENTIFIERVALUEGETTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D56E4B0)
#define RPG_GAMECORE_CHIMERADUELBUFFIDENTIFIERVALUEGETTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D56E3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelBuffIdentifierValueGetter_TypeDefinitionIndex = 16001;

	class ChimeraDuelBuffIdentifierValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUFFIDENTIFIERVALUEGETTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelBuffIdentifierValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelBuffIdentifierValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUFFIDENTIFIERVALUEGETTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelBuffIdentifierValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelBuffIdentifierValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUFFIDENTIFIERVALUEGETTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
