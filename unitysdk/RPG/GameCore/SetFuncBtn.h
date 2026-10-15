#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetFuncBtn; }
namespace System { class String; }

#define RPG_GAMECORE_SETFUNCBTN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA86E30)
#define RPG_GAMECORE_SETFUNCBTN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA86E40)
#define RPG_GAMECORE_SETFUNCBTN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA86E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFuncBtn_TypeDefinitionIndex = 21620;

	class SetFuncBtn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* CustomString; // 0x18
		::System::String* IconPath; // 0x20
		::System::Boolean ShowBtnEffect; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFUNCBTN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetFuncBtn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetFuncBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFUNCBTN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetFuncBtn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetFuncBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFUNCBTN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
