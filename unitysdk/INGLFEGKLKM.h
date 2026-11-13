#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class INGLFEGKLKM;
class JDIDJHLDOMN;
namespace RPG::Client { class MatchThreeBoard; }

#define INGLFEGKLKM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1A5EE260)
#define INGLFEGKLKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5EE470)
#define INGLFEGKLKM_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0x1A5EE420)
#define INGLFEGKLKM_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1A5EE3D0)
#define INGLFEGKLKM_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A5EE2E0)

inline static constexpr unsigned int INGLFEGKLKM_TypeDefinitionIndex = 67783;

	class INGLFEGKLKM : public ::FNIDIOCNBBI
	{
	public:
		::JDIDJHLDOMN* MFKKDBHPFKB; // 0x28
		::UnityEngine::Vector2Int PECPBEOHOJC; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INGLFEGKLKM_CTOR_OFFSET))(this);
		}

		static ::INGLFEGKLKM* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::INGLFEGKLKM*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + INGLFEGKLKM_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INGLFEGKLKM_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INGLFEGKLKM_ONCLEAR_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INGLFEGKLKM_LGAOOKPFIMF_OFFSET))(this);
		}

	};
