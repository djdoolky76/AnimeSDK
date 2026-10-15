#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJANGHIBICJ.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
class CEBMNLPNKFL;
class CFFPEAALCPH;
class GIPKHEMODAD;
class GJBPNAHFLMN;
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillData; }

#define OPJIJAKIAHN_CTOR_OFFSET UNITYSDK_OFFSET(0xBFADDA0)
#define OPJIJAKIAHN_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xBFAEA00)
#define OPJIJAKIAHN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFADE30)
#define OPJIJAKIAHN_DKMOCOJBEOP_OFFSET UNITYSDK_OFFSET(0xBFAE2A0)
#define OPJIJAKIAHN_EEHCKFEBEHL_OFFSET UNITYSDK_OFFSET(0xBFAE370)
#define OPJIJAKIAHN_EMBEGMAFOLD_OFFSET UNITYSDK_OFFSET(0xBFAE200)
#define OPJIJAKIAHN_FLOKEDOKBCH_OFFSET UNITYSDK_OFFSET(0xBFAE300)
#define OPJIJAKIAHN_GGECONAKGMF_OFFSET UNITYSDK_OFFSET(0xBFAEB70)
#define OPJIJAKIAHN_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0xBFADE70)
#define OPJIJAKIAHN_HECCKKKHKBN_OFFSET UNITYSDK_OFFSET(0xBFAED00)
#define OPJIJAKIAHN_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xBFADEC0)
#define OPJIJAKIAHN_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0xBFAE9A0)

inline static constexpr unsigned int OPJIJAKIAHN_TypeDefinitionIndex = 55937;

	class OPJIJAKIAHN : public ::JJANGHIBICJ
	{
	public:
		::CEBMNLPNKFL* LJOAMDHBBLH; // 0x30
		::RPG::GameCore::CharacterDataComponent* HKCICBFPGGF; // 0x38
		::GJBPNAHFLMN* BFOFNGCJOOK; // 0x40
		::RPG::GameCore::SkillCharacterComponent* KBDBKHPNJHC; // 0x48
		::System::Int32 DMKHAFAGKKC; // 0x50
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::CFFPEAALCPH* a2, ::GIPKHEMODAD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::CFFPEAALCPH*, ::GIPKHEMODAD*))((::PBYTE)hIl2Cpp + OPJIJAKIAHN_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPJIJAKIAHN_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::AnimStateLogicType GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::AnimStateLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + OPJIJAKIAHN_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::RPG::GameCore::AnimStateLogicType a1, ::CEBMNLPNKFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType, ::CEBMNLPNKFL*))((::PBYTE)hIl2Cpp + OPJIJAKIAHN_KIGBILLGNOH_OFFSET))(this, a1, a2);
		}

		::System::Void OPCKNBHNBOA(::RPG::GameCore::AnimStateLogicType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + OPJIJAKIAHN_OPCKNBHNBOA_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OPJIJAKIAHN_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Boolean GGECONAKGMF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPJIJAKIAHN_GGECONAKGMF_OFFSET))(this);
		}

		::System::Void EEHCKFEBEHL(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OPJIJAKIAHN_EEHCKFEBEHL_OFFSET))(this, a1, a2);
		}

		::System::Void FLOKEDOKBCH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OPJIJAKIAHN_FLOKEDOKBCH_OFFSET))(this, a1);
		}

		::System::Boolean DKMOCOJBEOP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPJIJAKIAHN_DKMOCOJBEOP_OFFSET))(this);
		}

		::RPG::GameCore::SkillConfig* EMBEGMAFOLD(::System::Int32 a1)
		{
			return ((::RPG::GameCore::SkillConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OPJIJAKIAHN_EMBEGMAFOLD_OFFSET))(this, a1);
		}

		::RPG::GameCore::SkillData* HECCKKKHKBN(::System::Int32 a1)
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OPJIJAKIAHN_HECCKKKHKBN_OFFSET))(this, a1);
		}

	};
