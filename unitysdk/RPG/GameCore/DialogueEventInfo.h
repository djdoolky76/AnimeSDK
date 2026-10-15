#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DialogueEventInfo; }
namespace System { class String; }

#define RPG_GAMECORE_DIALOGUEEVENTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D600E80)
#define RPG_GAMECORE_DIALOGUEEVENTINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D600D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueEventInfo_TypeDefinitionIndex = 21126;

	class DialogueEventInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 DialogueEventID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* SuccessCustomString; // 0x18
		::System::String* FailureCustomString; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEEVENTINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DialogueEventInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DialogueEventInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIALOGUEEVENTINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
