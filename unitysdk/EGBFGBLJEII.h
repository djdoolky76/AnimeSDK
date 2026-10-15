#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJANGHIBICJ.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
class CEBMNLPNKFL;
class CFFPEAALCPH;
class EKFMIDBJDIA;
class GIPKHEMODAD;
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define EGBFGBLJEII_CTOR_OFFSET UNITYSDK_OFFSET(0x13A60210)
#define EGBFGBLJEII_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x13A60670)
#define EGBFGBLJEII_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A60290)
#define EGBFGBLJEII_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0x13A603D0)
#define EGBFGBLJEII_JPFIAAFLKCF_OFFSET UNITYSDK_OFFSET(0x13A60870)
#define EGBFGBLJEII_KCADBBJFDOG_OFFSET UNITYSDK_OFFSET(0x13A602F0)
#define EGBFGBLJEII_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x13A60420)
#define EGBFGBLJEII_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0x13A60820)

inline static constexpr unsigned int EGBFGBLJEII_TypeDefinitionIndex = 55920;

	class EGBFGBLJEII : public ::JJANGHIBICJ
	{
	public:
		::RPG::GameCore::GameEntity* JKLFGAPHING; // 0x30
		::CEBMNLPNKFL* HFKIICBNBNP; // 0x38
		::RPG::GameCore::EventManager* EBOCGAJBGPG; // 0x40
		::System::String* JLCHIOBMMFJ; // 0x48
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::CFFPEAALCPH* a2, ::GIPKHEMODAD* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::CFFPEAALCPH*, ::GIPKHEMODAD*, ::System::String*))((::PBYTE)hIl2Cpp + EGBFGBLJEII_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGBFGBLJEII_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::AnimStateLogicType GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::AnimStateLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + EGBFGBLJEII_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::RPG::GameCore::AnimStateLogicType a1, ::CEBMNLPNKFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType, ::CEBMNLPNKFL*))((::PBYTE)hIl2Cpp + EGBFGBLJEII_KIGBILLGNOH_OFFSET))(this, a1, a2);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EGBFGBLJEII_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void OPCKNBHNBOA(::RPG::GameCore::AnimStateLogicType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + EGBFGBLJEII_OPCKNBHNBOA_OFFSET))(this, a1);
		}

		::System::Void JPFIAAFLKCF(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + EGBFGBLJEII_JPFIAAFLKCF_OFFSET))(this, a1);
		}

		::System::Void KCADBBJFDOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGBFGBLJEII_KCADBBJFDOG_OFFSET))(this);
		}

	};
