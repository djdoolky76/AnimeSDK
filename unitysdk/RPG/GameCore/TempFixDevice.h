#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CPUGPUInfo; }
namespace RPG::GameCore { class TempFixDevice; }

#define RPG_GAMECORE_TEMPFIXDEVICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7FC70)
#define RPG_GAMECORE_TEMPFIXDEVICE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB7FBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TempFixDevice_TypeDefinitionIndex = 18274;

	class TempFixDevice : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CPUGPUInfo*>* TempFixDeviceModelList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEMPFIXDEVICE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TempFixDevice* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TempFixDevice*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEMPFIXDEVICE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
