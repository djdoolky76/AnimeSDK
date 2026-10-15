#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateParamGetMapValueConfig; }
namespace RPG::GameCore { class MiParameterConfigBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FATEPARAMGETMAPVALUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69C180)
#define RPG_GAMECORE_FATEPARAMGETMAPVALUECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69C190)
#define RPG_GAMECORE_FATEPARAMGETMAPVALUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69C130)

namespace RPG::GameCore
{
	class FateParamGetMapValueConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::RPG::GameCore::MiParameterConfigBase* Key; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* ConfigMap; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMGETMAPVALUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamGetMapValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamGetMapValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMGETMAPVALUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateParamGetMapValueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateParamGetMapValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMGETMAPVALUECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
