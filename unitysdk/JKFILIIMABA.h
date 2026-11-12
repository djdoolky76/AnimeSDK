#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/GateLinkInfoState.h"
#include "unitysdk/System/Object.h"
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define JKFILIIMABA_CTOR_OFFSET UNITYSDK_OFFSET(0xBA43B40)

inline static constexpr unsigned int JKFILIIMABA_TypeDefinitionIndex = 81673;

	class JKFILIIMABA : public ::System::Object
	{
	public:
		::RPG::Client::OpenWorld::StreamingItemData* AJAKFOIKGFB; // 0x10
		::UnityEngine::Animator* LIDKMNACABL; // 0x18
		::UnityEngine::GameObject* ENOEPOFFCPP; // 0x20
		::UnityEngine::Material* IHNGLPPJBOG; // 0x28
		::BansheeGz::BGSpline::Components::BGCcMath* PPLLBFCFOJP; // 0x30
		::RPG::Client::Prop::GateLinkInfoState LKAJMOGMNPI; // 0x38
		::RPG::Client::Prop::GateLinkInfoState DOOCLDPKGKM; // 0x3C
		::System::Boolean BNCIEEMIJPD; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKFILIIMABA_CTOR_OFFSET))(this);
		}

	};
