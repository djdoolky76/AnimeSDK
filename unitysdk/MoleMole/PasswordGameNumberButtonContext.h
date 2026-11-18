#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class EMJFNIIAPEA;

#define MOLEMOLE_PASSWORDGAMENUMBERBUTTONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A712EC0)

namespace MoleMole
{
	inline static constexpr unsigned int PasswordGameNumberButtonContext_TypeDefinitionIndex = 85399;

	class PasswordGameNumberButtonContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Foundation::AssetPath NumImageKey; // 0x28
		::Foundation::AssetPath NumTextImageKey; // 0x38
		::EMJFNIIAPEA* UIModel; // 0x48
		::System::Boolean IsLocked; // 0x50
		::System::Byte _padding0[0x1];
		::System::Char Input; // 0x52

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PASSWORDGAMENUMBERBUTTONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
