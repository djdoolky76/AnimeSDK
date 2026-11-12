#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SysMailGotoConfigRow; }

#define RPG_GAMECORE_SYSMAILGOTOCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE020E0)
#define RPG_GAMECORE_SYSMAILGOTOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE01740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SysMailGotoConfigRow_TypeDefinitionIndex = 15366;

	class SysMailGotoConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID GotoBtnName; // 0x10
		::System::UInt32 TemplateID; // 0x20
		::System::UInt32 GotoID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SysMailGotoConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SysMailGotoConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYSMAILGOTOCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
