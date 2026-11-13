#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define JLHPJLGBCLD___C__DISPLAYCLASS27_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A093EC0)
#define JLHPJLGBCLD___C__DISPLAYCLASS27_0___ONCE_B__1_OFFSET UNITYSDK_OFFSET(0x1A093ED0)

inline static constexpr unsigned int JLHPJLGBCLD___c__DisplayClass27_0_TypeDefinitionIndex = 77036;

	class JLHPJLGBCLD___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Action* action; // 0x10
		::System::Boolean invoked; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHPJLGBCLD___C__DISPLAYCLASS27_0_CTOR_OFFSET))(this);
		}

		::System::Void __Once_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHPJLGBCLD___C__DISPLAYCLASS27_0___ONCE_B__1_OFFSET))(this);
		}

	};
