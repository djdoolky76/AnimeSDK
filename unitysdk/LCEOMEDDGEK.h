#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class LCEOMEDDGEK;
namespace RPG::GameCore { class GameEntity; }

#define LCEOMEDDGEK_ALENHNCGPBI_OFFSET UNITYSDK_OFFSET(0xB613770)
#define LCEOMEDDGEK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB6135C0)
#define LCEOMEDDGEK_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0xB613680)
#define LCEOMEDDGEK_CTOR_OFFSET UNITYSDK_OFFSET(0xB613670)
#define LCEOMEDDGEK_JDAPMOBEPPB_OFFSET UNITYSDK_OFFSET(0xB613720)
#define LCEOMEDDGEK_MACOMAHJKIH_OFFSET UNITYSDK_OFFSET(0xB6137C0)
#define LCEOMEDDGEK_OHEOHGJNBHP_OFFSET UNITYSDK_OFFSET(0xB6136D0)

inline static constexpr unsigned int LCEOMEDDGEK_TypeDefinitionIndex = 71868;

	class LCEOMEDDGEK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEOMEDDGEK_CTOR_OFFSET))(this);
		}

		static ::LCEOMEDDGEK* BPLPBPMEODA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::LCEOMEDDGEK*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LCEOMEDDGEK_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void CAJFDDIBPMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LCEOMEDDGEK_CAJFDDIBPMI_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint OHEOHGJNBHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEOMEDDGEK_OHEOHGJNBHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint JDAPMOBEPPB()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEOMEDDGEK_JDAPMOBEPPB_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint ALENHNCGPBI()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEOMEDDGEK_ALENHNCGPBI_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MACOMAHJKIH()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + LCEOMEDDGEK_MACOMAHJKIH_OFFSET))(this);
		}

	};
