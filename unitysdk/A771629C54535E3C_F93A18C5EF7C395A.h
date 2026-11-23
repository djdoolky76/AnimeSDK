#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A771629C54535E3C;
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class GameRoleModel; }
namespace System { class String; }

#define A771629C54535E3C_F93A18C5EF7C395A_F96B349612AFDE61_OFFSET UNITYSDK_OFFSET(0x38F45A0)
#define A771629C54535E3C_F93A18C5EF7C395A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A771629C54535E3C_F93A18C5EF7C395A_TypeDefinitionIndex = 11802;

class A771629C54535E3C_F93A18C5EF7C395A : public ::System::Object
{
public:
	::MiHoYo::SDK::AccountModel* E0B1DDD91A901A3D; // 0x10
	::MiHoYo::SDK::GameRoleModel* B7711450C019EAAA; // 0x18
	::A771629C54535E3C* A544919C800E2923; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A771629C54535E3C_F93A18C5EF7C395A__CTOR_OFFSET))(this);
	}

	::System::Void F96B349612AFDE61(::System::Int32 B714679C324FF96E, ::System::String* A9DC260775AB80C3, ::System::Int32 FEB1DB7035CB3236)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + A771629C54535E3C_F93A18C5EF7C395A_F96B349612AFDE61_OFFSET))(this, B714679C324FF96E, A9DC260775AB80C3, FEB1DB7035CB3236);
	}
};
