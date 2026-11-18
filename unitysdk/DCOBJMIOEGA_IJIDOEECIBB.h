#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Buff/GameplayEffectModifier.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define DCOBJMIOEGA_IJIDOEECIBB__CTOR_OFFSET UNITYSDK_OFFSET(0x14994490)

inline static constexpr unsigned int DCOBJMIOEGA_IJIDOEECIBB_TypeDefinitionIndex = 60855;

class DCOBJMIOEGA_IJIDOEECIBB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* HPKJCGLOBEL; // 0x10
	::System::Collections::Generic::List_1<::Foundation::Buff::GameplayEffectModifier>* GEINOKLFFFF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCOBJMIOEGA_IJIDOEECIBB__CTOR_OFFSET))(this);
	}
};
