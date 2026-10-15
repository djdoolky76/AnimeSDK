#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelSumValueGetter; }

#define RPG_GAMECORE_CHIMERADUELSUMVALUEGETTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AAF90)
#define RPG_GAMECORE_CHIMERADUELSUMVALUEGETTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5AAFA0)
#define RPG_GAMECORE_CHIMERADUELSUMVALUEGETTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5AAF40)

namespace RPG::GameCore
{
	class ChimeraDuelSumValueGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelValueGetter*>* ValueGetters; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSUMVALUEGETTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelSumValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelSumValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSUMVALUEGETTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelSumValueGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelSumValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSUMVALUEGETTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
