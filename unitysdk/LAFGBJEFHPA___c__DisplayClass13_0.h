#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }

#define LAFGBJEFHPA___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB5D8AF0)
#define LAFGBJEFHPA___C__DISPLAYCLASS13_0___TRYDELAYFORREWARDDIALOG_B__1_OFFSET UNITYSDK_OFFSET(0xB5D9100)

inline static constexpr unsigned int LAFGBJEFHPA___c__DisplayClass13_0_TypeDefinitionIndex = 67827;

	class LAFGBJEFHPA___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::System::UInt32 blockUID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFGBJEFHPA___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Void __TryDelayForRewardDialog_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFGBJEFHPA___C__DISPLAYCLASS13_0___TRYDELAYFORREWARDDIALOG_B__1_OFFSET))(this);
		}

	};
