#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDGNPKGEKGA;
class NJMLJBNICND;
namespace System { class Action; }

#define NJMLJBNICND___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBC19B70)
#define NJMLJBNICND___C__DISPLAYCLASS9_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0xBC19D60)

inline static constexpr unsigned int NJMLJBNICND___c__DisplayClass9_0_TypeDefinitionIndex = 78230;

	class NJMLJBNICND___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Action* onComplete; // 0x10
		::NJMLJBNICND* __4__this; // 0x18
		::IDGNPKGEKGA* command; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMLJBNICND___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Void _Execute_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMLJBNICND___C__DISPLAYCLASS9_0__EXECUTE_B__0_OFFSET))(this);
		}

	};
