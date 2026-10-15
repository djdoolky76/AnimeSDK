#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BMMMMCHEPDI;
class PCFGFOGMLNN;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define MHADKAEIHOO_CTOR_OFFSET UNITYSDK_OFFSET(0xB92F6D0)
#define MHADKAEIHOO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB92ED50)
#define MHADKAEIHOO_IKBLOLGJJAN_OFFSET UNITYSDK_OFFSET(0xB92EDE0)
#define MHADKAEIHOO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB92EC70)
#define MHADKAEIHOO_ODPIDILBBAG_OFFSET UNITYSDK_OFFSET(0xB92EFE0)
#define MHADKAEIHOO_OHAEPJEEAAH_OFFSET UNITYSDK_OFFSET(0xB92EF70)
#define MHADKAEIHOO_ONMKPFKIAOD_OFFSET UNITYSDK_OFFSET(0xB92F180)

inline static constexpr unsigned int MHADKAEIHOO_TypeDefinitionIndex = 78509;

	class MHADKAEIHOO : public ::System::Object
	{
	public:
		::BMMMMCHEPDI* BBNMHJBAFDD; // 0x10
		::PCFGFOGMLNN* BFJBKDGAJMO; // 0x18
		::RPG::GameCore::AdventureCharacterController* CACEADPJLPB; // 0x20
		::RPG::GameCore::TransformComponent* NIDHDAOGNKO; // 0x28
		::UnityEngine::Vector3 KOGCFJCMFLD; // 0x30
		::System::Boolean PHLFIJDNBGF; // 0x3C
		::System::Boolean NHHALCBIMOF; // 0x3D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHADKAEIHOO_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MHADKAEIHOO_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHADKAEIHOO_DISPOSE_OFFSET))(this);
		}

		::System::Void IKBLOLGJJAN(::UnityEngine::Vector3 a1, ::PCFGFOGMLNN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::PCFGFOGMLNN*))((::PBYTE)hIl2Cpp + MHADKAEIHOO_IKBLOLGJJAN_OFFSET))(this, a1, a2);
		}

		::System::Void OHAEPJEEAAH(::UnityEngine::Vector3 a1, ::PCFGFOGMLNN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::PCFGFOGMLNN*))((::PBYTE)hIl2Cpp + MHADKAEIHOO_OHAEPJEEAAH_OFFSET))(this, a1, a2);
		}

		::System::Void ODPIDILBBAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHADKAEIHOO_ODPIDILBBAG_OFFSET))(this);
		}

		::System::Void ONMKPFKIAOD(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + MHADKAEIHOO_ONMKPFKIAOD_OFFSET))(this, a1, a2);
		}

	};
