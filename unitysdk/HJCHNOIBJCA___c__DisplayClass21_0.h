#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }

#define HJCHNOIBJCA___C__DISPLAYCLASS21_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15CF8AC0)
#define HJCHNOIBJCA___C__DISPLAYCLASS21_0__REQUESTRELICDATAREFRESH_B__0_OFFSET UNITYSDK_OFFSET(0x15CFA9B0)
#define HJCHNOIBJCA___C__DISPLAYCLASS21_0__REQUESTRELICDATAREFRESH_B__1_OFFSET UNITYSDK_OFFSET(0x15CFA9D0)
#define HJCHNOIBJCA___C__DISPLAYCLASS21_0__REQUESTRELICDATAREFRESH_B__2_OFFSET UNITYSDK_OFFSET(0x15CFA9F0)

inline static constexpr unsigned int HJCHNOIBJCA___c__DisplayClass21_0_TypeDefinitionIndex = 66726;

	class HJCHNOIBJCA___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* getRecommendDataPromise; // 0x10
		::RPG::Client::Promises::Promise* getRecommendBigDataPromise; // 0x18
		::RPG::Client::Promises::Promise* promise; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCHNOIBJCA___C__DISPLAYCLASS21_0_CTOR_OFFSET))(this);
		}

		::System::Void _RequestRelicDataRefresh_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCHNOIBJCA___C__DISPLAYCLASS21_0__REQUESTRELICDATAREFRESH_B__0_OFFSET))(this);
		}

		::System::Void _RequestRelicDataRefresh_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCHNOIBJCA___C__DISPLAYCLASS21_0__REQUESTRELICDATAREFRESH_B__1_OFFSET))(this);
		}

		::System::Void _RequestRelicDataRefresh_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCHNOIBJCA___C__DISPLAYCLASS21_0__REQUESTRELICDATAREFRESH_B__2_OFFSET))(this);
		}

	};
