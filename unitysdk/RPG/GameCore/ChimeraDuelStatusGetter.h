#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelStatusType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelStatusGetter; }

#define RPG_GAMECORE_CHIMERADUELSTATUSGETTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AACA0)
#define RPG_GAMECORE_CHIMERADUELSTATUSGETTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5AACB0)
#define RPG_GAMECORE_CHIMERADUELSTATUSGETTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5AAC50)

namespace RPG::GameCore
{
	class ChimeraDuelStatusGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraDuelStatusType>* Status; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSTATUSGETTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelStatusGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelStatusGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSTATUSGETTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelStatusGetter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelStatusGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSTATUSGETTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
