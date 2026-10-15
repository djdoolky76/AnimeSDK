#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHGHIALKMFM;
class JEPGAKKOHLE;

#define BILJOFMFHAJ___C__DISPLAYCLASS20_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C544AF0)
#define BILJOFMFHAJ___C__DISPLAYCLASS20_0___PLACECHIP_B__0_OFFSET UNITYSDK_OFFSET(0x1C545A30)

	class BILJOFMFHAJ___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::JEPGAKKOHLE* placement; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILJOFMFHAJ___C__DISPLAYCLASS20_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __PlaceChip_b__0(::CHGHIALKMFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + BILJOFMFHAJ___C__DISPLAYCLASS20_0___PLACECHIP_B__0_OFFSET))(this, a1);
		}

	};
