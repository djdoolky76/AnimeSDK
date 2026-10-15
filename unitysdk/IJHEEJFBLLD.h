#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLLFJFJBIBC;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSessionStageResultBase; }

#define IJHEEJFBLLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1645A8F0)
#define IJHEEJFBLLD_GET_LINEUP_OFFSET UNITYSDK_OFFSET(0x1645A8D0)
#define IJHEEJFBLLD_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x1645A8B0)
#define IJHEEJFBLLD_SET_LINEUP_OFFSET UNITYSDK_OFFSET(0x1645A8E0)
#define IJHEEJFBLLD_SET_RESULT_OFFSET UNITYSDK_OFFSET(0x1645A8C0)

inline static constexpr unsigned int IJHEEJFBLLD_TypeDefinitionIndex = 81481;

	class IJHEEJFBLLD : public ::System::Object
	{
	public:
		::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* _Result_k__BackingField; // 0x10
		::GLLFJFJBIBC* _Lineup_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHEEJFBLLD_CTOR_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* get_Result()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHEEJFBLLD_GET_RESULT_OFFSET))(this);
		}

		::System::Void set_Result(::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*))((::PBYTE)hIl2Cpp + IJHEEJFBLLD_SET_RESULT_OFFSET))(this, a1);
		}

		::GLLFJFJBIBC* get_Lineup()
		{
			return ((::GLLFJFJBIBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHEEJFBLLD_GET_LINEUP_OFFSET))(this);
		}

		::System::Void set_Lineup(::GLLFJFJBIBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLLFJFJBIBC*))((::PBYTE)hIl2Cpp + IJHEEJFBLLD_SET_LINEUP_OFFSET))(this, a1);
		}

	};
