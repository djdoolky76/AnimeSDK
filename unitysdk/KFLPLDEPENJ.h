#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPBCNIIEOB.h"
namespace RPG::Client { class BattleSilverWolf999CustomUIData; }

#define KFLPLDEPENJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB3C5DF0)
#define KFLPLDEPENJ_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB3C5C20)
#define KFLPLDEPENJ__ONBIND_OFFSET UNITYSDK_OFFSET(0xB3C5D40)

	class KFLPLDEPENJ : public ::GJPBCNIIEOB
	{
	public:
		::RPG::Client::BattleSilverWolf999CustomUIData* JNEALEEMIIF; // 0x168
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLPLDEPENJ_CTOR_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLPLDEPENJ_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLPLDEPENJ__ONBIND_OFFSET))(this);
		}

	};
