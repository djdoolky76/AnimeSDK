#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJANGHIBICJ.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
class CEBMNLPNKFL;
class CFFPEAALCPH;
class GIPKHEMODAD;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define LDLGIOCMDKP_CTOR_OFFSET UNITYSDK_OFFSET(0xB63C580)
#define LDLGIOCMDKP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB63C590)
#define LDLGIOCMDKP_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0xB63C5E0)
#define LDLGIOCMDKP_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB63C630)
#define LDLGIOCMDKP_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0xB63C890)

	class LDLGIOCMDKP : public ::JJANGHIBICJ
	{
	public:
		::System::String* DAAPBBBAPGC; // 0x30
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::CFFPEAALCPH* a2, ::GIPKHEMODAD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::CFFPEAALCPH*, ::GIPKHEMODAD*))((::PBYTE)hIl2Cpp + LDLGIOCMDKP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLGIOCMDKP_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::AnimStateLogicType GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::AnimStateLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLGIOCMDKP_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::RPG::GameCore::AnimStateLogicType a1, ::CEBMNLPNKFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType, ::CEBMNLPNKFL*))((::PBYTE)hIl2Cpp + LDLGIOCMDKP_KIGBILLGNOH_OFFSET))(this, a1, a2);
		}

		::System::Void OPCKNBHNBOA(::RPG::GameCore::AnimStateLogicType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + LDLGIOCMDKP_OPCKNBHNBOA_OFFSET))(this, a1);
		}

	};
