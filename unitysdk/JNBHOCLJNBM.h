#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMHHBMNIJJB;
class LPHINGPIEAJ;
namespace RPG::GameCore { class GameEntity; }

#define JNBHOCLJNBM_AOCEEDGPKFL_OFFSET UNITYSDK_OFFSET(0x1A0C01C0)
#define JNBHOCLJNBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1A0BFC30)
#define JNBHOCLJNBM_MOHNCIKDDIK_OFFSET UNITYSDK_OFFSET(0x1A0BFFC0)
#define JNBHOCLJNBM_PBJFMDGEOFG_OFFSET UNITYSDK_OFFSET(0x1A0BFC40)
#define JNBHOCLJNBM_PCDOLGADOBF_OFFSET UNITYSDK_OFFSET(0x1A0BFDA0)

inline static constexpr unsigned int JNBHOCLJNBM_TypeDefinitionIndex = 79952;

	class JNBHOCLJNBM : public ::System::Object
	{
	public:
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x10
		::System::Void _ctor(::JMHHBMNIJJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMHHBMNIJJB*))((::PBYTE)hIl2Cpp + JNBHOCLJNBM_CTOR_OFFSET))(this, a1);
		}

		::LPHINGPIEAJ* PBJFMDGEOFG(::System::Int32 a1)
		{
			return ((::LPHINGPIEAJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JNBHOCLJNBM_PBJFMDGEOFG_OFFSET))(this, a1);
		}

		::LPHINGPIEAJ* PCDOLGADOBF(::System::Int32 a1)
		{
			return ((::LPHINGPIEAJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JNBHOCLJNBM_PCDOLGADOBF_OFFSET))(this, a1);
		}

		::LPHINGPIEAJ* MOHNCIKDDIK(::System::Int32 a1)
		{
			return ((::LPHINGPIEAJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JNBHOCLJNBM_MOHNCIKDDIK_OFFSET))(this, a1);
		}

		::System::Int32 AOCEEDGPKFL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JNBHOCLJNBM_AOCEEDGPKFL_OFFSET))(this, a1);
		}

	};
