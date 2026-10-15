#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHMEPBAGOFF;
class KLGJDILNNDH;

#define DPJMIDBEHLI___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x12644670)
#define DPJMIDBEHLI___C__DISPLAYCLASS5_0__RESTOREGAMEREPLAY_B__0_OFFSET UNITYSDK_OFFSET(0x12655080)
#define DPJMIDBEHLI___C__DISPLAYCLASS5_0__RESTOREGAMEREPLAY_B__1_OFFSET UNITYSDK_OFFSET(0x126550B0)

inline static constexpr unsigned int DPJMIDBEHLI___c__DisplayClass5_0_TypeDefinitionIndex = 76566;

	class DPJMIDBEHLI___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::BHMEPBAGOFF* match3SoloData; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPJMIDBEHLI___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _RestoreGameReplay_b__0(::KLGJDILNNDH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLGJDILNNDH*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI___C__DISPLAYCLASS5_0__RESTOREGAMEREPLAY_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _RestoreGameReplay_b__1(::KLGJDILNNDH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLGJDILNNDH*))((::PBYTE)hIl2Cpp + DPJMIDBEHLI___C__DISPLAYCLASS5_0__RESTOREGAMEREPLAY_B__1_OFFSET))(this, a1);
		}

	};
