#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDPCEBNFPAC;
namespace RPG::Client::Promises { class Promise; }

#define KDPCEBNFPAC___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB36CE30)
#define KDPCEBNFPAC___C__DISPLAYCLASS6_0__SHOWFULLSCREENTRANSFER_B__0_OFFSET UNITYSDK_OFFSET(0xB36E150)

	class KDPCEBNFPAC___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* hiddenPromise; // 0x10
		::KDPCEBNFPAC* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPCEBNFPAC___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowFullScreenTransfer_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPCEBNFPAC___C__DISPLAYCLASS6_0__SHOWFULLSCREENTRANSFER_B__0_OFFSET))(this);
		}

	};
