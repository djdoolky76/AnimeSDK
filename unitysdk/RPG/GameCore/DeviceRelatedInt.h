#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceRelatedConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeviceRelatedInt; }

#define RPG_GAMECORE_DEVICERELATEDINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1E812950)
#define RPG_GAMECORE_DEVICERELATEDINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E812960)
#define RPG_GAMECORE_DEVICERELATEDINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E812E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceRelatedInt_TypeDefinitionIndex = 16633;

	class DeviceRelatedInt : public ::RPG::GameCore::DeviceRelatedConfigBase
	{
	public:
		::System::Int32 Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeviceRelatedInt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeviceRelatedInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeviceRelatedInt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeviceRelatedInt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
