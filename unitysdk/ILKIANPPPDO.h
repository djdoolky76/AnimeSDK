#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class ILKIANPPPDO;
namespace RPG::Client { class MatchThreeBoard; }

#define ILKIANPPPDO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x164B5EA0)
#define ILKIANPPPDO_CTOR_OFFSET UNITYSDK_OFFSET(0x164B6030)
#define ILKIANPPPDO_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0x164B5FE0)
#define ILKIANPPPDO_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x164B5F20)

inline static constexpr unsigned int ILKIANPPPDO_TypeDefinitionIndex = 65868;

	class ILKIANPPPDO : public ::FNIDIOCNBBI
	{
	public:
		::UnityEngine::Vector2Int PECPBEOHOJC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKIANPPPDO_CTOR_OFFSET))(this);
		}

		static ::ILKIANPPPDO* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::ILKIANPPPDO*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + ILKIANPPPDO_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKIANPPPDO_ONEXECUTE_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILKIANPPPDO_LGAOOKPFIMF_OFFSET))(this);
		}

	};
