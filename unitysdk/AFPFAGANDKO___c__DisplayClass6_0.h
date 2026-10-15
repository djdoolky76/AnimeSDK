#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define AFPFAGANDKO___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCF21100)
#define AFPFAGANDKO___C__DISPLAYCLASS6_0__ADDSPHERETRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0xCF22F60)

inline static constexpr unsigned int AFPFAGANDKO___c__DisplayClass6_0_TypeDefinitionIndex = 73961;

	class AFPFAGANDKO___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action* onEnter; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPFAGANDKO___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Void _AddSphereTrigger_b__0(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AFPFAGANDKO___C__DISPLAYCLASS6_0__ADDSPHERETRIGGER_B__0_OFFSET))(this, a1);
		}

	};
