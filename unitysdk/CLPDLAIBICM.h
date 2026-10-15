#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDMONJOAKHD.h"
class KLEFGGIHGMI;
class LJFHKAJPFNE;
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace UnityEngine { class GameObject; }

#define CLPDLAIBICM_CTOR_OFFSET UNITYSDK_OFFSET(0xDA22630)

inline static constexpr unsigned int CLPDLAIBICM_TypeDefinitionIndex = 73745;

	class CLPDLAIBICM : public ::GDMONJOAKHD
	{
	public:
		::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::LJFHKAJPFNE* a2, ::KLEFGGIHGMI* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::LJFHKAJPFNE*, ::KLEFGGIHGMI*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLPDLAIBICM_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

	};
