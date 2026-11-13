#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPBCNIIEOB.h"
namespace RPG::Client { class BattleSilverWolf999CustomUIData; }

#define KFLPLDEPENJ_CTOR_OFFSET UNITYSDK_OFFSET(0x17708140)
#define KFLPLDEPENJ__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x17707F80)
#define KFLPLDEPENJ__ONBIND_OFFSET UNITYSDK_OFFSET(0x17708090)

inline static constexpr unsigned int KFLPLDEPENJ_TypeDefinitionIndex = 73272;

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
