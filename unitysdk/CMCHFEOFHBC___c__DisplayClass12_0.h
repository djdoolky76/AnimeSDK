#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CMCHFEOFHBC;
class JAODHHPIKGJ;

#define CMCHFEOFHBC___C__DISPLAYCLASS12_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDA1F940)
#define CMCHFEOFHBC___C__DISPLAYCLASS12_0___FINISHRESET_B__0_OFFSET UNITYSDK_OFFSET(0xDA1FA00)

inline static constexpr unsigned int CMCHFEOFHBC___c__DisplayClass12_0_TypeDefinitionIndex = 76801;

	class CMCHFEOFHBC___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::CMCHFEOFHBC* __4__this; // 0x10
		::JAODHHPIKGJ* moveBlackBoard; // 0x18
		::UnityEngine::Vector3 resetPosition; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCHFEOFHBC___C__DISPLAYCLASS12_0_CTOR_OFFSET))(this);
		}

		::System::Void __FinishReset_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMCHFEOFHBC___C__DISPLAYCLASS12_0___FINISHRESET_B__0_OFFSET))(this);
		}

	};
