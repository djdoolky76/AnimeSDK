#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicStringContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicStringBase; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICSTRINGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA724F0)
#define RPG_GAMECORE_SETDYNAMICSTRINGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA72630)
#define RPG_GAMECORE_SETDYNAMICSTRINGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA72500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicStringBase_TypeDefinitionIndex = 23817;

	class SetDynamicStringBase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicStringContextScope ContextScope; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* DynamicKey; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICSTRINGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicStringBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicStringBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICSTRINGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicStringBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicStringBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICSTRINGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
