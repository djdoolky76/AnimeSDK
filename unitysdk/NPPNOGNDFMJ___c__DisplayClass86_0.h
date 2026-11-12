#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPJBOGJEJEF;
class NPPNOGNDFMJ;
namespace RPG::GameCore { class LittleGameSandboxPostProcessConfig; }
namespace System { class IDisposable; }

#define NPPNOGNDFMJ___C__DISPLAYCLASS86_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC612210)
#define NPPNOGNDFMJ___C__DISPLAYCLASS86_0___APPLYRENDERING_B__0_OFFSET UNITYSDK_OFFSET(0xC612220)
#define NPPNOGNDFMJ___C__DISPLAYCLASS86_0___APPLYRENDERING_B__1_OFFSET UNITYSDK_OFFSET(0xC612350)
#define NPPNOGNDFMJ___C__DISPLAYCLASS86_0___APPLYRENDERING_B__2_OFFSET UNITYSDK_OFFSET(0xC612370)

inline static constexpr unsigned int NPPNOGNDFMJ___c__DisplayClass86_0_TypeDefinitionIndex = 61890;

	class NPPNOGNDFMJ___c__DisplayClass86_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::LittleGameSandboxPostProcessConfig* postProcess; // 0x10
		::NPPNOGNDFMJ* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS86_0_CTOR_OFFSET))(this);
		}

		::System::IDisposable* __ApplyRendering_b__0(::DPJBOGJEJEF* a1)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::DPJBOGJEJEF*))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS86_0___APPLYRENDERING_B__0_OFFSET))(this, a1);
		}

		::System::Int32 __ApplyRendering_b__1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS86_0___APPLYRENDERING_B__1_OFFSET))(this);
		}

		::System::Void __ApplyRendering_b__2(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS86_0___APPLYRENDERING_B__2_OFFSET))(this, a1);
		}

	};
