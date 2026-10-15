#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Recommend { class RelicRecommendBigData; }

#define BFBKEIJIFEL___C__DISPLAYCLASS17_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB15DC70)
#define BFBKEIJIFEL___C__DISPLAYCLASS17_0__REQUESTRELICRECOMMENDBIGDATA_B__0_OFFSET UNITYSDK_OFFSET(0xB15DDD0)

inline static constexpr unsigned int BFBKEIJIFEL___c__DisplayClass17_0_TypeDefinitionIndex = 66712;

	class BFBKEIJIFEL___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBKEIJIFEL___C__DISPLAYCLASS17_0_CTOR_OFFSET))(this);
		}

		::System::Void _RequestRelicRecommendBigData_b__0(::RPG::Client::Recommend::RelicRecommendBigData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Recommend::RelicRecommendBigData*))((::PBYTE)hIl2Cpp + BFBKEIJIFEL___C__DISPLAYCLASS17_0__REQUESTRELICRECOMMENDBIGDATA_B__0_OFFSET))(this, a1);
		}

	};
