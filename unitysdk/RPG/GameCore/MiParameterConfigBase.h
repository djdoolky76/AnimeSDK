#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiAtomConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiParameterConfigBase; }

#define RPG_GAMECORE_MIPARAMETERCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D87F440)
#define RPG_GAMECORE_MIPARAMETERCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D87F3E0)
#define RPG_GAMECORE_MIPARAMETERCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D87F380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiParameterConfigBase_TypeDefinitionIndex = 17071;

	class MiParameterConfigBase : public ::RPG::GameCore::MiAtomConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIPARAMETERCONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiParameterConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIPARAMETERCONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiParameterConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIPARAMETERCONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
