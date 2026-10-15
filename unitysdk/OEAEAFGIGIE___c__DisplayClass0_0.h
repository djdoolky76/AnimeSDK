#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKJMIJBIIHO;
namespace System { class Action; }

#define OEAEAFGIGIE___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBDF27B0)
#define OEAEAFGIGIE___C__DISPLAYCLASS0_0__SENDPIXAIRPAUSESTAGECSREQWITHCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xBDF27D0)

inline static constexpr unsigned int OEAEAFGIGIE___c__DisplayClass0_0_TypeDefinitionIndex = 79368;

	class OEAEAFGIGIE___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAEAFGIGIE___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Void _SendPixAirPauseStageCsReqWithCallback_b__0(::EKJMIJBIIHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKJMIJBIIHO*))((::PBYTE)hIl2Cpp + OEAEAFGIGIE___C__DISPLAYCLASS0_0__SENDPIXAIRPAUSESTAGECSREQWITHCALLBACK_B__0_OFFSET))(this, a1);
		}

	};
