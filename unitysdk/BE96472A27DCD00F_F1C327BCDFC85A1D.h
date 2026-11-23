#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/A4928C32E7EA47FB.h"

#define BE96472A27DCD00F_F1C327BCDFC85A1D_A80C23E47FE17586_OFFSET UNITYSDK_OFFSET(0x28E15D0)
#define BE96472A27DCD00F_F1C327BCDFC85A1D__CCTOR_OFFSET UNITYSDK_OFFSET(0x28E1590)

inline static constexpr unsigned int BE96472A27DCD00F_F1C327BCDFC85A1D_TypeDefinitionIndex = 16419;

class BE96472A27DCD00F_F1C327BCDFC85A1D : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_FEEB7AF5A4F42FB4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BE96472A27DCD00F_F1C327BCDFC85A1D_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::UnityEngine::A4928C32E7EA47FB A80C23E47FE17586()
	{
		return ((::UnityEngine::A4928C32E7EA47FB(*)())((::PBYTE)hIl2Cpp + BE96472A27DCD00F_F1C327BCDFC85A1D_A80C23E47FE17586_OFFSET))();
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BE96472A27DCD00F_F1C327BCDFC85A1D__CCTOR_OFFSET))();
	}
};
