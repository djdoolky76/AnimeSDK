#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLHPJLGBCLD;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }

#define JLHPJLGBCLD___C__DISPLAYCLASS15_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBA74F40)
#define JLHPJLGBCLD___C__DISPLAYCLASS15_0__EXITSANDBOX_B__0_OFFSET UNITYSDK_OFFSET(0xBA765B0)
#define JLHPJLGBCLD___C__DISPLAYCLASS15_0__EXITSANDBOX_B__1_OFFSET UNITYSDK_OFFSET(0xBA765E0)
#define JLHPJLGBCLD___C__DISPLAYCLASS15_0__EXITSANDBOX_B__2_OFFSET UNITYSDK_OFFSET(0xBA76610)

inline static constexpr unsigned int JLHPJLGBCLD___c__DisplayClass15_0_TypeDefinitionIndex = 77031;

	class JLHPJLGBCLD___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::JLHPJLGBCLD* __4__this; // 0x10
		::RPG::Client::Promises::Promise* exitingPromise; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHPJLGBCLD___C__DISPLAYCLASS15_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ExitSandbox_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHPJLGBCLD___C__DISPLAYCLASS15_0__EXITSANDBOX_B__0_OFFSET))(this);
		}

		::System::Void _ExitSandbox_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHPJLGBCLD___C__DISPLAYCLASS15_0__EXITSANDBOX_B__1_OFFSET))(this);
		}

		::System::Void _ExitSandbox_b__2(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + JLHPJLGBCLD___C__DISPLAYCLASS15_0__EXITSANDBOX_B__2_OFFSET))(this, a1);
		}

	};
