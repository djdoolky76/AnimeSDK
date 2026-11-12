#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPBCNIIEOB.h"
namespace RPG::Client { class BattleSilverWolf999CustomUIData; }

#define KFLPLDEPENJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBC55A70)
#define KFLPLDEPENJ__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xBC558B0)
#define KFLPLDEPENJ__ONBIND_OFFSET UNITYSDK_OFFSET(0xBC559C0)

inline static constexpr unsigned int KFLPLDEPENJ_TypeDefinitionIndex = 73273;

	class KFLPLDEPENJ : public ::GJPBCNIIEOB
	{
	public:
		::RPG::Client::BattleSilverWolf999CustomUIData* JNEALEEMIIF; // 0x168
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLPLDEPENJ_CTOR_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLPLDEPENJ__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFLPLDEPENJ__ONBIND_OFFSET))(this);
		}

	};
