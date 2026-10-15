#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHENLCDDMGN;
class INMMPMDELKE;

#define CHENLCDDMGN___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCC94410)
#define CHENLCDDMGN___C__DISPLAYCLASS11_0___REGISTERONCLOSEINDOORCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xCC94D90)

inline static constexpr unsigned int CHENLCDDMGN___c__DisplayClass11_0_TypeDefinitionIndex = 76816;

	class CHENLCDDMGN___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::INMMPMDELKE* doorEntity; // 0x10
		::CHENLCDDMGN* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHENLCDDMGN___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Void __RegisterOnCloseInDoorCallback_b__0(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + CHENLCDDMGN___C__DISPLAYCLASS11_0___REGISTERONCLOSEINDOORCALLBACK_B__0_OFFSET))(this, a1);
		}

	};
