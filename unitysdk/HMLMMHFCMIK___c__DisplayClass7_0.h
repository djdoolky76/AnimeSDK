#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMLMMHFCMIK_NKHICOENJKH;
namespace RPG::GameCore { class LittleGameSandboxGroupIsolationConfig; }

#define HMLMMHFCMIK___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16D25D70)
#define HMLMMHFCMIK___C__DISPLAYCLASS7_0__ACQUIRE_B__0_OFFSET UNITYSDK_OFFSET(0x16D27C30)
#define HMLMMHFCMIK___C__DISPLAYCLASS7_0__ACQUIRE_B__1_OFFSET UNITYSDK_OFFSET(0x16D27E70)

inline static constexpr unsigned int HMLMMHFCMIK___c__DisplayClass7_0_TypeDefinitionIndex = 61912;

	class HMLMMHFCMIK___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::HMLMMHFCMIK_NKHICOENJKH* policy; // 0x10
		::RPG::GameCore::LittleGameSandboxGroupIsolationConfig* config; // 0x18
		::System::Boolean added; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 ownerGroupID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLMMHFCMIK___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void _Acquire_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLMMHFCMIK___C__DISPLAYCLASS7_0__ACQUIRE_B__0_OFFSET))(this);
		}

		::System::Void _Acquire_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLMMHFCMIK___C__DISPLAYCLASS7_0__ACQUIRE_B__1_OFFSET))(this);
		}

	};
