#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class HIOAMIPNLIN;
class NHCIKNHHHOO;

#define NHCIKNHHHOO___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBBB80D0)
#define NHCIKNHHHOO___C__DISPLAYCLASS1_0__EVALUATE_B__0_OFFSET UNITYSDK_OFFSET(0xBBB80E0)

inline static constexpr unsigned int NHCIKNHHHOO___c__DisplayClass1_0_TypeDefinitionIndex = 54544;

	class NHCIKNHHHOO___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::NHCIKNHHHOO* __4__this; // 0x10
		::System::Nullable_1<::System::Boolean> ret; // 0x18
		::RPG::GameCore::FixPoint compareValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHCIKNHHHOO___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _Evaluate_b__0(::HIOAMIPNLIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOAMIPNLIN*))((::PBYTE)hIl2Cpp + NHCIKNHHHOO___C__DISPLAYCLASS1_0__EVALUATE_B__0_OFFSET))(this, a1);
		}

	};
