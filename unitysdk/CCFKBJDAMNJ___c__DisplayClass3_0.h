#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCFKBJDAMNJ;
class FKHNFMFIKGL;
namespace RPG::Client::Promises { class IPromise; }

#define CCFKBJDAMNJ___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCE2BFA0)
#define CCFKBJDAMNJ___C__DISPLAYCLASS3_0__RESETFIRSTSTAGE_B__0_OFFSET UNITYSDK_OFFSET(0xCE2C9B0)

inline static constexpr unsigned int CCFKBJDAMNJ___c__DisplayClass3_0_TypeDefinitionIndex = 84866;

	class CCFKBJDAMNJ___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::CCFKBJDAMNJ* __4__this; // 0x10
		::System::UInt32 challengeID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCFKBJDAMNJ___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ResetFirstStage_b__0(::FKHNFMFIKGL* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::FKHNFMFIKGL*))((::PBYTE)hIl2Cpp + CCFKBJDAMNJ___C__DISPLAYCLASS3_0__RESETFIRSTSTAGE_B__0_OFFSET))(this, a1);
		}

	};
