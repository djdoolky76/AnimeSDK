#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RelicRecommendData; }
namespace RPG::Client::Promises { class Promise; }

#define BFBKEIJIFEL___C__DISPLAYCLASS16_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB15F440)
#define BFBKEIJIFEL___C__DISPLAYCLASS16_0__REQUESTRELICRECOMMENDDATA_B__0_OFFSET UNITYSDK_OFFSET(0xB15F770)

	class BFBKEIJIFEL___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBKEIJIFEL___C__DISPLAYCLASS16_0_CTOR_OFFSET))(this);
		}

		::System::Void _RequestRelicRecommendData_b__0(::RPG::Client::RelicRecommendData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicRecommendData*))((::PBYTE)hIl2Cpp + BFBKEIJIFEL___C__DISPLAYCLASS16_0__REQUESTRELICRECOMMENDDATA_B__0_OFFSET))(this, a1);
		}

	};
