#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelNode; }
namespace RPG::GameCore { class ChimeraDuelNodeSequence; }

#define RPG_GAMECORE_CHIMERADUELNODESEQUENCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A5C70)
#define RPG_GAMECORE_CHIMERADUELNODESEQUENCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A5B80)

namespace RPG::GameCore
{
	class ChimeraDuelNodeSequence : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelNode*>* NodeList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNODESEQUENCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelNodeSequence* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelNodeSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNODESEQUENCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
