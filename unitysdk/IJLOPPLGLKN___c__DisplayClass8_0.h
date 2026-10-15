#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKJMIJBIIHO;
namespace System { class Action; }

#define IJLOPPLGLKN___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16461150)
#define IJLOPPLGLKN___C__DISPLAYCLASS8_0__SENDPIXAIRPAUSESTAGECSREQWITHCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x16461780)

inline static constexpr unsigned int IJLOPPLGLKN___c__DisplayClass8_0_TypeDefinitionIndex = 79223;

	class IJLOPPLGLKN___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLOPPLGLKN___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Void _SendPixAirPauseStageCsReqWithCallback_b__0(::EKJMIJBIIHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKJMIJBIIHO*))((::PBYTE)hIl2Cpp + IJLOPPLGLKN___C__DISPLAYCLASS8_0__SENDPIXAIRPAUSESTAGECSREQWITHCALLBACK_B__0_OFFSET))(this, a1);
		}

	};
