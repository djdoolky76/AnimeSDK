#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B0F983304F2229E5.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define F6CFAD4095C536C1_A0807FDC1CF4AF94_OFFSET UNITYSDK_OFFSET(0x2A0D740)
#define F6CFAD4095C536C1_BF004A6296D18877_OFFSET UNITYSDK_OFFSET(0x2A0D5C0)
#define F6CFAD4095C536C1_F7B0A23335A3DB16_OFFSET UNITYSDK_OFFSET(0x2A0D8B0)
#define F6CFAD4095C536C1__CTOR_OFFSET UNITYSDK_OFFSET(0x29E9A80)

inline static constexpr unsigned int F6CFAD4095C536C1_TypeDefinitionIndex = 15863;

class F6CFAD4095C536C1 : public ::B0F983304F2229E5
{
public:
	static ::F6CFAD4095C536C1** StaticGet_E0E7A5F93551109B()
	{
		return (::F6CFAD4095C536C1**)Il2CppClass::FromTypeDefinitionIndex(F6CFAD4095C536C1_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::F6CFAD4095C536C1* F7B0A23335A3DB16()
	{
		return ((::F6CFAD4095C536C1*(*)())((::PBYTE)hIl2Cpp + F6CFAD4095C536C1_F7B0A23335A3DB16_OFFSET))();
	}

	::UnityEngine::InputSystem::Controls::ButtonControl* A0807FDC1CF4AF94(::System::Int32 A59E604D1E9B8ED2)
	{
		return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + F6CFAD4095C536C1_A0807FDC1CF4AF94_OFFSET))(this, A59E604D1E9B8ED2);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6CFAD4095C536C1__CTOR_OFFSET))(this);
	}

	::System::Boolean BF004A6296D18877(::System::Int32 A59E604D1E9B8ED2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + F6CFAD4095C536C1_BF004A6296D18877_OFFSET))(this, A59E604D1E9B8ED2);
	}
};
