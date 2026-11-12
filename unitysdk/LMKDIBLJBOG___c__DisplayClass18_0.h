#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }

#define LMKDIBLJBOG___C__DISPLAYCLASS18_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC02A0F0)
#define LMKDIBLJBOG___C__DISPLAYCLASS18_0___WAITFADEIN_B__0_OFFSET UNITYSDK_OFFSET(0xC02A750)

inline static constexpr unsigned int LMKDIBLJBOG___c__DisplayClass18_0_TypeDefinitionIndex = 78773;

	class LMKDIBLJBOG___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKDIBLJBOG___C__DISPLAYCLASS18_0_CTOR_OFFSET))(this);
		}

		::System::Void __WaitFadeIn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKDIBLJBOG___C__DISPLAYCLASS18_0___WAITFADEIN_B__0_OFFSET))(this);
		}

	};
