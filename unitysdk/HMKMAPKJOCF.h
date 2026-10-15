#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }

#define HMKMAPKJOCF_ACEAEHPDEBD_OFFSET UNITYSDK_OFFSET(0x15D86530)
#define HMKMAPKJOCF_CJCHGJMKOAP_1_OFFSET UNITYSDK_OFFSET(0x15D870A0)
#define HMKMAPKJOCF_CJCHGJMKOAP_2_OFFSET UNITYSDK_OFFSET(0x15D87100)
#define HMKMAPKJOCF_CJCHGJMKOAP_OFFSET UNITYSDK_OFFSET(0x15D86ED0)
#define HMKMAPKJOCF_DAFFOHKNHKA_OFFSET UNITYSDK_OFFSET(0x15D86C10)
#define HMKMAPKJOCF_DFKMHLPMGIP_OFFSET UNITYSDK_OFFSET(0x15D86840)
#define HMKMAPKJOCF_HOBCILNAHBC_OFFSET UNITYSDK_OFFSET(0x15D86690)
#define HMKMAPKJOCF_ILCHDHBFOPE_OFFSET UNITYSDK_OFFSET(0x15D86720)
#define HMKMAPKJOCF_JBBILPJGCIG_OFFSET UNITYSDK_OFFSET(0x15D868E0)
#define HMKMAPKJOCF_JFCOBGKHEJO_OFFSET UNITYSDK_OFFSET(0x15D867C0)
#define HMKMAPKJOCF_JPONENEAPPH_OFFSET UNITYSDK_OFFSET(0x15D869F0)

	class HMKMAPKJOCF : public ::System::Object
	{
	public:
		static ::System::Boolean ACEAEHPDEBD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HMKMAPKJOCF_ACEAEHPDEBD_OFFSET))(a1);
		}

		static ::System::Void HOBCILNAHBC(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + HMKMAPKJOCF_HOBCILNAHBC_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ILCHDHBFOPE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HMKMAPKJOCF_ILCHDHBFOPE_OFFSET))(a1);
		}

		static ::System::Boolean JFCOBGKHEJO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HMKMAPKJOCF_JFCOBGKHEJO_OFFSET))(a1);
		}

		static ::System::Void DFKMHLPMGIP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HMKMAPKJOCF_DFKMHLPMGIP_OFFSET))(a1);
		}

		static ::System::Single JBBILPJGCIG(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HMKMAPKJOCF_JBBILPJGCIG_OFFSET))(a1, a2);
		}

		static ::System::UInt32 JPONENEAPPH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HMKMAPKJOCF_JPONENEAPPH_OFFSET))(a1);
		}

		static ::System::Int32 DAFFOHKNHKA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HMKMAPKJOCF_DAFFOHKNHKA_OFFSET))(a1);
		}

		static ::System::Boolean CJCHGJMKOAP(::RPG::GameCore::GameEntity* a1, ::Il2CppArray<::RPG::GameCore::EntityTag>* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::Il2CppArray<::RPG::GameCore::EntityTag>*))((::PBYTE)hIl2Cpp + HMKMAPKJOCF_CJCHGJMKOAP_OFFSET))(a1, a2);
		}

		static ::System::Boolean CJCHGJMKOAP_1(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + HMKMAPKJOCF_CJCHGJMKOAP_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean CJCHGJMKOAP_2(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::EntityTag a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::EntityTag))((::PBYTE)hIl2Cpp + HMKMAPKJOCF_CJCHGJMKOAP_2_OFFSET))(a1, a2);
		}

	};
