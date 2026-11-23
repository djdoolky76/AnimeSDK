#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E2C43A55833C0911;
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class GameRoleModel; }
namespace System { class String; }

#define E2C43A55833C0911_B1DFA410B4EA5719_F8D9CEFA297DCF2E_OFFSET UNITYSDK_OFFSET(0x39E4DD0)
#define E2C43A55833C0911_B1DFA410B4EA5719__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E2C43A55833C0911_B1DFA410B4EA5719_TypeDefinitionIndex = 12720;

class E2C43A55833C0911_B1DFA410B4EA5719 : public ::System::Object
{
public:
	::MiHoYo::SDK::AccountModel* E0B1DDD91A901A3D; // 0x10
	::MiHoYo::SDK::GameRoleModel* B7711450C019EAAA; // 0x18
	::E2C43A55833C0911* A544919C800E2923; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2C43A55833C0911_B1DFA410B4EA5719__CTOR_OFFSET))(this);
	}

	::System::Void F8D9CEFA297DCF2E(::System::Int32 B714679C324FF96E, ::System::String* A9DC260775AB80C3, ::System::Int32 FEB1DB7035CB3236)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + E2C43A55833C0911_B1DFA410B4EA5719_F8D9CEFA297DCF2E_OFFSET))(this, B714679C324FF96E, A9DC260775AB80C3, FEB1DB7035CB3236);
	}
};
