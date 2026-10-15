#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AADOCJDBAGC___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB0C2280)
#define AADOCJDBAGC___C__DISPLAYCLASS6_0___DESTROYENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xB0C23B0)

inline static constexpr unsigned int AADOCJDBAGC___c__DisplayClass6_0_TypeDefinitionIndex = 77604;

	class AADOCJDBAGC___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Int32 dyingEntityID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AADOCJDBAGC___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __DestroyEntity_b__0(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AADOCJDBAGC___C__DISPLAYCLASS6_0___DESTROYENTITY_B__0_OFFSET))(this, a1);
		}

	};
