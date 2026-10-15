#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJANGHIBICJ.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
class CEBMNLPNKFL;
class CFFPEAALCPH;
class FJGCIAEGLBL;
class GIPKHEMODAD;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define KCJDJLHJPBP_CTOR_OFFSET UNITYSDK_OFFSET(0xB33A5F0)
#define KCJDJLHJPBP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB33A700)
#define KCJDJLHJPBP_GOHDHIMMDNG_OFFSET UNITYSDK_OFFSET(0xB33A740)
#define KCJDJLHJPBP_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB33A790)
#define KCJDJLHJPBP_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0xB33A970)

inline static constexpr unsigned int KCJDJLHJPBP_TypeDefinitionIndex = 55929;

	class KCJDJLHJPBP : public ::JJANGHIBICJ
	{
	public:
		::FJGCIAEGLBL* MMFHIFKCKEJ; // 0x30
		::System::Int32 OCGHHABKHKH; // 0x38
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::CFFPEAALCPH* a2, ::GIPKHEMODAD* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::CFFPEAALCPH*, ::GIPKHEMODAD*, ::System::String*))((::PBYTE)hIl2Cpp + KCJDJLHJPBP_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCJDJLHJPBP_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::AnimStateLogicType GOHDHIMMDNG()
		{
			return ((::RPG::GameCore::AnimStateLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + KCJDJLHJPBP_GOHDHIMMDNG_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::RPG::GameCore::AnimStateLogicType a1, ::CEBMNLPNKFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType, ::CEBMNLPNKFL*))((::PBYTE)hIl2Cpp + KCJDJLHJPBP_KIGBILLGNOH_OFFSET))(this, a1, a2);
		}

		::System::Void OPCKNBHNBOA(::RPG::GameCore::AnimStateLogicType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + KCJDJLHJPBP_OPCKNBHNBOA_OFFSET))(this, a1);
		}

	};
