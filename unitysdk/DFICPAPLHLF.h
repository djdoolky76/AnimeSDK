#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CMPPMHBKNCL;
class FCPLIDBPDHJ;
class MDJKOJJFBNA;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }

#define DFICPAPLHLF_CTOR_OFFSET UNITYSDK_OFFSET(0xE82E880)
#define DFICPAPLHLF_JCABPDOGLNN_1_OFFSET UNITYSDK_OFFSET(0xE82E320)
#define DFICPAPLHLF_JCABPDOGLNN_OFFSET UNITYSDK_OFFSET(0xE82E000)
#define DFICPAPLHLF_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0xE82E760)
#define DFICPAPLHLF_ONKHPOCEODP_OFFSET UNITYSDK_OFFSET(0xE82E4A0)
#define DFICPAPLHLF_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xE82E180)

	class DFICPAPLHLF : public ::System::Object
	{
	public:
		::CMPPMHBKNCL* CONIDCGICDD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFICPAPLHLF_CTOR_OFFSET))(this);
		}

		::System::Boolean JCABPDOGLNN(::RPG::GameCore::GameEntity* a1, ::FCPLIDBPDHJ* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::FCPLIDBPDHJ*))((::PBYTE)hIl2Cpp + DFICPAPLHLF_JCABPDOGLNN_OFFSET))(this, a1, a2);
		}

		::System::Boolean JCABPDOGLNN_1(::RPG::GameCore::GameEntity* a1, ::MDJKOJJFBNA* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::MDJKOJJFBNA*))((::PBYTE)hIl2Cpp + DFICPAPLHLF_JCABPDOGLNN_1_OFFSET))(this, a1, a2);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFICPAPLHLF_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Boolean ONKHPOCEODP(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::RPG::GameCore::AdventureCharacterController* a3, ::System::Boolean a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::RPG::GameCore::AdventureCharacterController*, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DFICPAPLHLF_ONKHPOCEODP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFICPAPLHLF_JKEONEEPIHH_OFFSET))(this);
		}

	};
