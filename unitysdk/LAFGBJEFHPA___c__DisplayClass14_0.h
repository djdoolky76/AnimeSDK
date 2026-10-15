#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }

#define LAFGBJEFHPA___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB5D8D60)
#define LAFGBJEFHPA___C__DISPLAYCLASS14_0___TRYSHOWFIRSTREWARDDIALOG_B__1_OFFSET UNITYSDK_OFFSET(0xB5D91B0)

inline static constexpr unsigned int LAFGBJEFHPA___c__DisplayClass14_0_TypeDefinitionIndex = 67828;

	class LAFGBJEFHPA___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFGBJEFHPA___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::System::Void __TryShowFirstRewardDialog_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFGBJEFHPA___C__DISPLAYCLASS14_0___TRYSHOWFIRSTREWARDDIALOG_B__1_OFFSET))(this);
		}

	};
