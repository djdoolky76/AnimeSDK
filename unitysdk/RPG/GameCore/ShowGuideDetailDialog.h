#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class ShowGuideDetailDialog; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWGUIDEDETAILDIALOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DADE170)
#define RPG_GAMECORE_SHOWGUIDEDETAILDIALOG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DADE180)
#define RPG_GAMECORE_SHOWGUIDEDETAILDIALOG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DADE140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowGuideDetailDialog_TypeDefinitionIndex = 24348;

	class ShowGuideDetailDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* GuideID; // 0x18
		::System::Int32 Type; // 0x20
		::System::Boolean WaitForExit; // 0x24
		::System::Byte _padding0[0x3];
		::System::String* OverrideBtnTextmap; // 0x28
		::System::Boolean SkipIfAlreadySeen; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEDETAILDIALOG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowGuideDetailDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowGuideDetailDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEDETAILDIALOG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowGuideDetailDialog* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowGuideDetailDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEDETAILDIALOG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
