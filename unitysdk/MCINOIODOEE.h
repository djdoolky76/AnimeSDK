#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJANGHIBICJ.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicTypeExtra.h"
class CEBMNLPNKFL;
class CFFPEAALCPH;
class FJGCIAEGLBL;
class GIPKHEMODAD;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define MCINOIODOEE_CTOR_OFFSET UNITYSDK_OFFSET(0xB879180)
#define MCINOIODOEE_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xB87A9D0)
#define MCINOIODOEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB879220)
#define MCINOIODOEE_GKBLOHKPFDA_OFFSET UNITYSDK_OFFSET(0xB87AC40)
#define MCINOIODOEE_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0xB879260)
#define MCINOIODOEE_HACOLAACJLM_OFFSET UNITYSDK_OFFSET(0xB87A470)
#define MCINOIODOEE_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB8792B0)
#define MCINOIODOEE_LLJCAHAFFML_OFFSET UNITYSDK_OFFSET(0xB87AB20)
#define MCINOIODOEE_MEGMIHOJCAM_OFFSET UNITYSDK_OFFSET(0xB87A510)
#define MCINOIODOEE_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0xB87ABB0)

inline static constexpr unsigned int MCINOIODOEE_TypeDefinitionIndex = 55934;

	class MCINOIODOEE : public ::JJANGHIBICJ
	{
	public:
		::System::String* DHCHCMHGKKD; // 0x30
		::Il2CppArray<::RPG::GameCore::AnimStateLogicTypeExtra>* BACFHFAMHIK; // 0x38
		::FJGCIAEGLBL* MMFHIFKCKEJ; // 0x40
		::System::Single LNDOGMCALCN; // 0x48
		::System::Boolean IKHNLAIEIPG; // 0x4C
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::CFFPEAALCPH* a2, ::GIPKHEMODAD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::CFFPEAALCPH*, ::GIPKHEMODAD*))((::PBYTE)hIl2Cpp + MCINOIODOEE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCINOIODOEE_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::AnimStateLogicType GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::AnimStateLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + MCINOIODOEE_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::RPG::GameCore::AnimStateLogicType a1, ::CEBMNLPNKFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType, ::CEBMNLPNKFL*))((::PBYTE)hIl2Cpp + MCINOIODOEE_KIGBILLGNOH_OFFSET))(this, a1, a2);
		}

		::System::Boolean MEGMIHOJCAM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCINOIODOEE_MEGMIHOJCAM_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MCINOIODOEE_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void OPCKNBHNBOA(::RPG::GameCore::AnimStateLogicType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + MCINOIODOEE_OPCKNBHNBOA_OFFSET))(this, a1);
		}

		static ::System::Boolean HACOLAACJLM(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MCINOIODOEE_HACOLAACJLM_OFFSET))(a1);
		}

		::System::Boolean GKBLOHKPFDA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MCINOIODOEE_GKBLOHKPFDA_OFFSET))(this, a1);
		}

		::System::Void LLJCAHAFFML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCINOIODOEE_LLJCAHAFFML_OFFSET))(this);
		}

	};
