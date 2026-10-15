#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PPFilterStackEffectUpdate; }
namespace System { class String; }

#define RPG_GAMECORE_PPFILTERSTACKEFFECTUPDATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BCC70)
#define RPG_GAMECORE_PPFILTERSTACKEFFECTUPDATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8BCC90)
#define RPG_GAMECORE_PPFILTERSTACKEFFECTUPDATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8BCC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PPFilterStackEffectUpdate_TypeDefinitionIndex = 20264;

	class PPFilterStackEffectUpdate : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean HiendOnly; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* AssetPath; // 0x20
		::RPG::GameCore::PPEffectFilterPriorityGroup PriorityGroup; // 0x28
		::System::Single StartRate; // 0x2C
		::System::Single TargetRate; // 0x30
		::System::Single Duration; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PPFILTERSTACKEFFECTUPDATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PPFilterStackEffectUpdate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PPFilterStackEffectUpdate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PPFILTERSTACKEFFECTUPDATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PPFilterStackEffectUpdate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PPFilterStackEffectUpdate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PPFILTERSTACKEFFECTUPDATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
