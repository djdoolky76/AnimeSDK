#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiAtomConfigBase; }

#define RPG_GAMECORE_MIATOMCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D851740)
#define RPG_GAMECORE_MIATOMCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D851800)
#define RPG_GAMECORE_MIATOMCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8517A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiAtomConfigBase_TypeDefinitionIndex = 17068;

	class MiAtomConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIATOMCONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiAtomConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiAtomConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIATOMCONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiAtomConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiAtomConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIATOMCONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
