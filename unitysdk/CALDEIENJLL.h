#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJANGHIBICJ.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
class CEBMNLPNKFL;
class CFFPEAALCPH;
class GIPKHEMODAD;
namespace RPG::GameCore { class GameEntity; }

#define CALDEIENJLL_CTOR_OFFSET UNITYSDK_OFFSET(0xC488320)
#define CALDEIENJLL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC488330)
#define CALDEIENJLL_GET_IGNOREAPPEAR_OFFSET UNITYSDK_OFFSET(0xC488690)
#define CALDEIENJLL_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0xC488370)
#define CALDEIENJLL_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xC4883C0)
#define CALDEIENJLL_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0xC488640)
#define CALDEIENJLL_SET_IGNOREAPPEAR_OFFSET UNITYSDK_OFFSET(0xC4886A0)

inline static constexpr unsigned int CALDEIENJLL_TypeDefinitionIndex = 55924;

	class CALDEIENJLL : public ::JJANGHIBICJ
	{
	public:
		::System::Boolean _IgnoreAppear_k__BackingField; // 0x30
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::CFFPEAALCPH* a2, ::GIPKHEMODAD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::CFFPEAALCPH*, ::GIPKHEMODAD*))((::PBYTE)hIl2Cpp + CALDEIENJLL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALDEIENJLL_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::AnimStateLogicType GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::AnimStateLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + CALDEIENJLL_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::RPG::GameCore::AnimStateLogicType a1, ::CEBMNLPNKFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType, ::CEBMNLPNKFL*))((::PBYTE)hIl2Cpp + CALDEIENJLL_KIGBILLGNOH_OFFSET))(this, a1, a2);
		}

		::System::Void OPCKNBHNBOA(::RPG::GameCore::AnimStateLogicType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + CALDEIENJLL_OPCKNBHNBOA_OFFSET))(this, a1);
		}

		::System::Boolean get_IgnoreAppear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CALDEIENJLL_GET_IGNOREAPPEAR_OFFSET))(this);
		}

		::System::Void set_IgnoreAppear(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CALDEIENJLL_SET_IGNOREAPPEAR_OFFSET))(this, a1);
		}

	};
