#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleOnField; }

#define RPG_GAMECORE_MARBLEONFIELD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D815180)
#define RPG_GAMECORE_MARBLEONFIELD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D815190)
#define RPG_GAMECORE_MARBLEONFIELD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D815130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleOnField_TypeDefinitionIndex = 16851;

	class MarbleOnField : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEONFIELD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleOnField* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleOnField*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEONFIELD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleOnField* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleOnField*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEONFIELD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
