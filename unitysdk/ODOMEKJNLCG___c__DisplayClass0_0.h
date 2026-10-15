#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define ODOMEKJNLCG___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBDF1FA0)
#define ODOMEKJNLCG___C__DISPLAYCLASS0_0__CONFIRM_B__0_OFFSET UNITYSDK_OFFSET(0xBDF2120)

inline static constexpr unsigned int ODOMEKJNLCG___c__DisplayClass0_0_TypeDefinitionIndex = 79984;

	class ODOMEKJNLCG___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::System::Boolean>* promise; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODOMEKJNLCG___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Void _Confirm_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODOMEKJNLCG___C__DISPLAYCLASS0_0__CONFIRM_B__0_OFFSET))(this);
		}

	};
