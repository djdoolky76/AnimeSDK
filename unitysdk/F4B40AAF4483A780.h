#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A769E3105BB55487/A58165939FD3DD49.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputSettings_FEDC7C8DE3E434D2.h"

namespace UnityEngine::InputSystem { class InputDevice; }

#define F4B40AAF4483A780_A6CAC478201ABF7F_OFFSET UNITYSDK_OFFSET(0x3FF4CA0)
#define F4B40AAF4483A780_AC45B7A98957CD21_OFFSET UNITYSDK_OFFSET(0x3FF5090)
#define F4B40AAF4483A780_B94ADE63B87EF11B_OFFSET UNITYSDK_OFFSET(0x3FF52D0)
#define F4B40AAF4483A780_BCA611733BAC07E9_OFFSET UNITYSDK_OFFSET(0x3FF4B50)
#define F4B40AAF4483A780_E70146F224453D79_OFFSET UNITYSDK_OFFSET(0x3FF4E50)
#define F4B40AAF4483A780_EE905385E434B192_OFFSET UNITYSDK_OFFSET(0x3FF4DD0)

inline static constexpr unsigned int F4B40AAF4483A780_TypeDefinitionIndex = 14534;

class F4B40AAF4483A780 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_A617C7E45B166E16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(F4B40AAF4483A780_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::UnityEngine::InputSystem::InputSettings_FEDC7C8DE3E434D2* StaticGet_B8047958E2852035()
	{
		return (::UnityEngine::InputSystem::InputSettings_FEDC7C8DE3E434D2*)Il2CppClass::FromTypeDefinitionIndex(F4B40AAF4483A780_TypeDefinitionIndex)->GetStaticField(0x4);
	}

	static ::System::Void EE905385E434B192()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F4B40AAF4483A780_EE905385E434B192_OFFSET))();
	}

	static ::System::Void E70146F224453D79()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F4B40AAF4483A780_E70146F224453D79_OFFSET))();
	}

	static ::System::Boolean B94ADE63B87EF11B()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + F4B40AAF4483A780_B94ADE63B87EF11B_OFFSET))();
	}

	static ::System::Void AC45B7A98957CD21()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F4B40AAF4483A780_AC45B7A98957CD21_OFFSET))();
	}

	static ::System::Void A6CAC478201ABF7F(::UnityEngine::InputSystem::InputDevice* B9AD68262157E9E0, ::A769E3105BB55487::A58165939FD3DD49 E2006EAAE2D113CA)
	{
		return ((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::A769E3105BB55487::A58165939FD3DD49))((::PBYTE)hIl2Cpp + F4B40AAF4483A780_A6CAC478201ABF7F_OFFSET))(B9AD68262157E9E0, E2006EAAE2D113CA);
	}

	static ::System::Void BCA611733BAC07E9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F4B40AAF4483A780_BCA611733BAC07E9_OFFSET))();
	}
};
