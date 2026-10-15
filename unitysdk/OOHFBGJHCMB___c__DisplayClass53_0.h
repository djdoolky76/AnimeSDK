#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define OOHFBGJHCMB___C__DISPLAYCLASS53_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBF83B30)
#define OOHFBGJHCMB___C__DISPLAYCLASS53_0___SHOWCONFIRMFORCECHALLENGENORMALDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0xBF84350)

inline static constexpr unsigned int OOHFBGJHCMB___c__DisplayClass53_0_TypeDefinitionIndex = 63165;

	class OOHFBGJHCMB___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::System::Boolean>* result; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB___C__DISPLAYCLASS53_0_CTOR_OFFSET))(this);
		}

		::System::Void __ShowConfirmForceChallengeNormalDialog_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OOHFBGJHCMB___C__DISPLAYCLASS53_0___SHOWCONFIRMFORCECHALLENGENORMALDIALOG_B__0_OFFSET))(this, a1);
		}

	};
