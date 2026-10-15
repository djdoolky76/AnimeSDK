#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AttachEntityDeparted; }
namespace System { class String; }

#define RPG_GAMECORE_ATTACHENTITYDEPARTED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4018A0)
#define RPG_GAMECORE_ATTACHENTITYDEPARTED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4018B0)
#define RPG_GAMECORE_ATTACHENTITYDEPARTED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D401870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttachEntityDeparted_TypeDefinitionIndex = 23610;

	class AttachEntityDeparted : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* ConfigGroupName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHENTITYDEPARTED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AttachEntityDeparted* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AttachEntityDeparted*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHENTITYDEPARTED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AttachEntityDeparted* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AttachEntityDeparted*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHENTITYDEPARTED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
