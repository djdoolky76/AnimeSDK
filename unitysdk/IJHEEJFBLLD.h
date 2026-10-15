#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLLFJFJBIBC;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSessionStageResultBase; }

#define IJHEEJFBLLD_CTOR_OFFSET UNITYSDK_OFFSET(0x16467F80)
#define IJHEEJFBLLD_GET_LINEUP_OFFSET UNITYSDK_OFFSET(0x16467F60)
#define IJHEEJFBLLD_GET_RESULT_OFFSET UNITYSDK_OFFSET(0x16467F40)
#define IJHEEJFBLLD_SET_LINEUP_OFFSET UNITYSDK_OFFSET(0x16467F70)
#define IJHEEJFBLLD_SET_RESULT_OFFSET UNITYSDK_OFFSET(0x16467F50)

inline static constexpr unsigned int IJHEEJFBLLD_TypeDefinitionIndex = 81482;

	class IJHEEJFBLLD : public ::System::Object
	{
	public:
		::GLLFJFJBIBC* _Lineup_k__BackingField; // 0x10
		::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* _Result_k__BackingField; // 0x18
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
