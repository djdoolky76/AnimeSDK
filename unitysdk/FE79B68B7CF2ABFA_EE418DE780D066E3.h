#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FE79B68B7CF2ABFA;
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class GameRoleModel; }
namespace System { class String; }

#define FE79B68B7CF2ABFA_EE418DE780D066E3_F8D9CEFA297DCF2E_OFFSET UNITYSDK_OFFSET(0x3AB1E50)
#define FE79B68B7CF2ABFA_EE418DE780D066E3__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FE79B68B7CF2ABFA_EE418DE780D066E3_TypeDefinitionIndex = 12075;

class FE79B68B7CF2ABFA_EE418DE780D066E3 : public ::System::Object
{
public:
	::MiHoYo::SDK::AccountModel* E0B1DDD91A901A3D; // 0x10
	::MiHoYo::SDK::GameRoleModel* B7711450C019EAAA; // 0x18
	::FE79B68B7CF2ABFA* A544919C800E2923; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE79B68B7CF2ABFA_EE418DE780D066E3__CTOR_OFFSET))(this);
	}

	::System::Void F8D9CEFA297DCF2E(::System::Int32 B714679C324FF96E, ::System::String* A9DC260775AB80C3, ::System::Int32 FEB1DB7035CB3236)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + FE79B68B7CF2ABFA_EE418DE780D066E3_F8D9CEFA297DCF2E_OFFSET))(this, B714679C324FF96E, A9DC260775AB80C3, FEB1DB7035CB3236);
	}
};
