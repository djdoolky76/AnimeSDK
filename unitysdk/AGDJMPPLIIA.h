#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }

#define AGDJMPPLIIA_CTOR_OFFSET UNITYSDK_OFFSET(0xCF26800)
#define AGDJMPPLIIA_PALDJMEGECK_OFFSET UNITYSDK_OFFSET(0xCF26740)

inline static constexpr unsigned int AGDJMPPLIIA_TypeDefinitionIndex = 74119;

	class AGDJMPPLIIA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDJMPPLIIA_CTOR_OFFSET))(this);
		}

		static ::System::Void PALDJMEGECK(::RPG::Client::ActivityAlley::AlleyPackComponent* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::RPG::Client::ActivityAlley::AlleyPackComponent*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AGDJMPPLIIA_PALDJMEGECK_OFFSET))(a1, a2);
		}

	};
