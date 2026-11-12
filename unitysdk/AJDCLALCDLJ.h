#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/AnchorType.h"
#include "unitysdk/System/Object.h"
namespace Entitas { class IEntity; }
namespace UnityEngine { class Transform; }

#define AJDCLALCDLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA0F070)

inline static constexpr unsigned int AJDCLALCDLJ_TypeDefinitionIndex = 44690;

	class AJDCLALCDLJ : public ::System::Object
	{
	public:
		::UnityEngine::Transform* HFLDHJHJNCF; // 0x10
		::Entitas::IEntity* ICMGBBLCJML; // 0x18
		::System::Boolean ABGEKPJHHIA; // 0x20
		::System::Boolean KGPLDMOACCK; // 0x21
		::System::Byte _padding0[0x2];
		::System::UInt32 PHFMCACHFIJ; // 0x24
		::System::UInt32 BGJMONEGGGO; // 0x28
		::RPG::Client::LittleGame::ComicDessert::AnchorType GMPGDEINODK; // 0x2C
		// static const ::System::Object FHBGKKMCFBD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDCLALCDLJ_CTOR_OFFSET))(this);
		}

	};
