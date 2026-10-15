#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AirlockEvent.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class MapRotationAirlockConfig; }
namespace System { class Object; }

#define CIGJBHFHHAD_CJLKDFBLMNB_OFFSET UNITYSDK_OFFSET(0xCF69EB0)
#define CIGJBHFHHAD_CTOR_OFFSET UNITYSDK_OFFSET(0xCF6A3F0)
#define CIGJBHFHHAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF698C0)
#define CIGJBHFHHAD_ENFEHBEFCJB_OFFSET UNITYSDK_OFFSET(0xCF6A370)
#define CIGJBHFHHAD_JNOFMOPBMGL_OFFSET UNITYSDK_OFFSET(0xCF6A2C0)
#define CIGJBHFHHAD_LIDPFHNECID_OFFSET UNITYSDK_OFFSET(0xCF69B70)
#define CIGJBHFHHAD_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xCF69A00)

inline static constexpr unsigned int CIGJBHFHHAD_TypeDefinitionIndex = 57308;

	class CIGJBHFHHAD : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::ColliderTriggerComponent* FKDFCAGAEBD; // 0x18
		::RPG::GameCore::MapRotationAirlockConfig* BIJGJPLJPGK; // 0x20
		::System::UInt32 PEEFHNHDBMF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGJBHFHHAD_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGJBHFHHAD_DISPOSE_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::RPG::GameCore::MapRotationAirlockConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapRotationAirlockConfig*))((::PBYTE)hIl2Cpp + CIGJBHFHHAD_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void LIDPFHNECID(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIGJBHFHHAD_LIDPFHNECID_OFFSET))(this, a1);
		}

		::System::Void CJLKDFBLMNB(::System::Int32 a1, ::System::Int32 a2, ::RPG::GameCore::AirlockEvent a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::GameCore::AirlockEvent))((::PBYTE)hIl2Cpp + CIGJBHFHHAD_CJLKDFBLMNB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JNOFMOPBMGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGJBHFHHAD_JNOFMOPBMGL_OFFSET))(this);
		}

		::System::Void ENFEHBEFCJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGJBHFHHAD_ENFEHBEFCJB_OFFSET))(this);
		}

	};
