#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDPCEBNFPAC;
namespace RPG::Client::Promises { class Promise; }

#define KDPCEBNFPAC___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5D0070)
#define KDPCEBNFPAC___C__DISPLAYCLASS6_0__SHOWFULLSCREENTRANSFER_B__0_OFFSET UNITYSDK_OFFSET(0x1B5D1380)

inline static constexpr unsigned int KDPCEBNFPAC___c__DisplayClass6_0_TypeDefinitionIndex = 82946;

	class KDPCEBNFPAC___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::KDPCEBNFPAC* __4__this; // 0x10
		::RPG::Client::Promises::Promise* hiddenPromise; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPCEBNFPAC___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowFullScreenTransfer_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDPCEBNFPAC___C__DISPLAYCLASS6_0__SHOWFULLSCREENTRANSFER_B__0_OFFSET))(this);
		}

	};
