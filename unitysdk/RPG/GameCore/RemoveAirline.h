#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveAirline; }
namespace System { class String; }

#define RPG_GAMECORE_REMOVEAIRLINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D956270)
#define RPG_GAMECORE_REMOVEAIRLINE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D956280)
#define RPG_GAMECORE_REMOVEAIRLINE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D956240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveAirline_TypeDefinitionIndex = 21877;

	class RemoveAirline : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* PrefabPath; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEAIRLINE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveAirline* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveAirline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEAIRLINE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveAirline* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveAirline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEAIRLINE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
