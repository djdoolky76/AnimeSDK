#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define HLALBKIHMAD_AKAMIKMOPMD_OFFSET UNITYSDK_OFFSET(0x15D56AA0)
#define HLALBKIHMAD_CKPJFFIINAP_OFFSET UNITYSDK_OFFSET(0x15D56670)
#define HLALBKIHMAD_CTOR_OFFSET UNITYSDK_OFFSET(0x15D56C80)
#define HLALBKIHMAD_FJPEEFLJEEP_OFFSET UNITYSDK_OFFSET(0x15D56360)
#define HLALBKIHMAD_IODILAIIBEP_OFFSET UNITYSDK_OFFSET(0x15D56510)

	class HLALBKIHMAD : public ::System::Object
	{
	public:
		::UnityEngine::Transform* OIGGFCOBKCG; // 0x10
		::RPG::GameCore::GameEntity* KNMIMHIBENA; // 0x18
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x20
		::System::Boolean MHEAIOMEGCA; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLALBKIHMAD_CTOR_OFFSET))(this);
		}

		::System::Void FJPEEFLJEEP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HLALBKIHMAD_FJPEEFLJEEP_OFFSET))(this, a1);
		}

		::System::Void IODILAIIBEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLALBKIHMAD_IODILAIIBEP_OFFSET))(this);
		}

		::System::Void CKPJFFIINAP(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + HLALBKIHMAD_CKPJFFIINAP_OFFSET))(this, a1, a2);
		}

		::System::Void AKAMIKMOPMD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLALBKIHMAD_AKAMIKMOPMD_OFFSET))(this, a1);
		}

	};
