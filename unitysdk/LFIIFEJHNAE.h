#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class JEANAIHDCAA;
class LFIIFEJHNAE;
namespace RPG::Client { class MatchThreeBoard; }

#define LFIIFEJHNAE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x18C4D740)
#define LFIIFEJHNAE_CTOR_OFFSET UNITYSDK_OFFSET(0x18C4D960)
#define LFIIFEJHNAE_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0x18C4D910)
#define LFIIFEJHNAE_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x18C4D7C0)
#define LFIIFEJHNAE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x18C4D810)

inline static constexpr unsigned int LFIIFEJHNAE_TypeDefinitionIndex = 67784;

	class LFIIFEJHNAE : public ::FNIDIOCNBBI
	{
	public:
		::JEANAIHDCAA* IEGFCMEEEKC; // 0x28
		::UnityEngine::Vector2Int PECPBEOHOJC; // 0x30
		::UnityEngine::Vector2Int JNMBLCMFGEM; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFIIFEJHNAE_CTOR_OFFSET))(this);
		}

		static ::LFIIFEJHNAE* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::LFIIFEJHNAE*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + LFIIFEJHNAE_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFIIFEJHNAE_ONCLEAR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFIIFEJHNAE_ONEXECUTE_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFIIFEJHNAE_LGAOOKPFIMF_OFFSET))(this);
		}

	};
