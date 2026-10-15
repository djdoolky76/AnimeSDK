#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimEntityRotateAxis.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEntityRotateConfig; }

#define RPG_GAMECORE_FIVEDIMENTITYROTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BBB30)
#define RPG_GAMECORE_FIVEDIMENTITYROTATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BB960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEntityRotateConfig_TypeDefinitionIndex = 18752;

	class FiveDimEntityRotateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsRotateEntityRoot; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single Duration; // 0x14
		::System::Single RotateSpeed; // 0x18
		::RPG::GameCore::FiveDimEntityRotateAxis RotateAxis; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYROTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEntityRotateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEntityRotateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMENTITYROTATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
