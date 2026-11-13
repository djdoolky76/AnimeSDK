#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPKACEPPPCA.h"
class BMIKHDAIIMO;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace UnityEngine { class GameObject; }

#define BMIKHDAIIMO_DEOAPMBKPFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7500E0)
#define BMIKHDAIIMO_DEOAPMBKPFM_FMPHNNADJPE_OFFSET UNITYSDK_OFFSET(0x1A750190)
#define BMIKHDAIIMO_DEOAPMBKPFM_JBJJNKOCGBE_OFFSET UNITYSDK_OFFSET(0x1A750100)

inline static constexpr unsigned int BMIKHDAIIMO_DEOAPMBKPFM_TypeDefinitionIndex = 76002;

	class BMIKHDAIIMO_DEOAPMBKPFM : public ::HPKACEPPPCA
	{
	public:
		::BMIKHDAIIMO* PPNBGHOPMNB; // 0x80
		::System::Void _ctor(::BMIKHDAIIMO* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BMIKHDAIIMO*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_DEOAPMBKPFM_CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* JBJJNKOCGBE()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_DEOAPMBKPFM_JBJJNKOCGBE_OFFSET))(this);
		}

		::System::Void FMPHNNADJPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_DEOAPMBKPFM_FMPHNNADJPE_OFFSET))(this);
		}

	};
