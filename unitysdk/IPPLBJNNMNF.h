#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class IPPLBJNNMNF;
class JEANAIHDCAA;
namespace RPG::Client { class MatchThreeBoard; }

#define IPPLBJNNMNF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16527C70)
#define IPPLBJNNMNF_CTOR_OFFSET UNITYSDK_OFFSET(0x16527E80)
#define IPPLBJNNMNF_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0x16527E30)
#define IPPLBJNNMNF_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x16527DE0)
#define IPPLBJNNMNF_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x16527CF0)

inline static constexpr unsigned int IPPLBJNNMNF_TypeDefinitionIndex = 65854;

	class IPPLBJNNMNF : public ::FNIDIOCNBBI
	{
	public:
		::JEANAIHDCAA* IEGFCMEEEKC; // 0x28
		::UnityEngine::Vector2Int PECPBEOHOJC; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPLBJNNMNF_CTOR_OFFSET))(this);
		}

		static ::IPPLBJNNMNF* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::IPPLBJNNMNF*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + IPPLBJNNMNF_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPLBJNNMNF_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPLBJNNMNF_ONCLEAR_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPPLBJNNMNF_LGAOOKPFIMF_OFFSET))(this);
		}

	};
