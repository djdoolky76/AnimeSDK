#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreateAirline; }
namespace System { class String; }

#define RPG_GAMECORE_CREATEAIRLINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F2920)
#define RPG_GAMECORE_CREATEAIRLINE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E7F2930)
#define RPG_GAMECORE_CREATEAIRLINE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E7F28F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateAirline_TypeDefinitionIndex = 22267;

	class CreateAirline : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* PrefabPath; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEAIRLINE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateAirline* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateAirline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEAIRLINE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateAirline* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateAirline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEAIRLINE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
