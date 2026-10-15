#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJANGHIBICJ.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
class CEBMNLPNKFL;
class CFFPEAALCPH;
class GIPKHEMODAD;
namespace RPG::GameCore { class GameEntity; }

#define BKFONOGNIMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB7B3B30)
#define BKFONOGNIMJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7B3B50)
#define BKFONOGNIMJ_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0xB7B3B90)
#define BKFONOGNIMJ_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB7B3BD0)
#define BKFONOGNIMJ_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0xB7B3C20)

	class BKFONOGNIMJ : public ::JJANGHIBICJ
	{
	public:
		::RPG::GameCore::AnimStateLogicType ENIIFGJIIBF; // 0x30
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::CFFPEAALCPH* a2, ::GIPKHEMODAD* a3, ::RPG::GameCore::AnimStateLogicType a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::CFFPEAALCPH*, ::GIPKHEMODAD*, ::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + BKFONOGNIMJ_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKFONOGNIMJ_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::AnimStateLogicType GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::AnimStateLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + BKFONOGNIMJ_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::RPG::GameCore::AnimStateLogicType a1, ::CEBMNLPNKFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType, ::CEBMNLPNKFL*))((::PBYTE)hIl2Cpp + BKFONOGNIMJ_KIGBILLGNOH_OFFSET))(this, a1, a2);
		}

		::System::Void OPCKNBHNBOA(::RPG::GameCore::AnimStateLogicType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + BKFONOGNIMJ_OPCKNBHNBOA_OFFSET))(this, a1);
		}

	};
