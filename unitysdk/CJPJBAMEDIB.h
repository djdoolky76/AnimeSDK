#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class CJPJBAMEDIB;
namespace RPG::Client { class MatchThreeBoard; }

#define CJPJBAMEDIB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xD74ADD0)
#define CJPJBAMEDIB_CTOR_OFFSET UNITYSDK_OFFSET(0xD74AFC0)
#define CJPJBAMEDIB_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0xD74AF70)
#define CJPJBAMEDIB_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xD74AE50)

inline static constexpr unsigned int CJPJBAMEDIB_TypeDefinitionIndex = 65866;

	class CJPJBAMEDIB : public ::FNIDIOCNBBI
	{
	public:
		::RPG::GameCore::Match3::BombType FEKGEPDLOCE; // 0x28
		::UnityEngine::Vector2Int PECPBEOHOJC; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPJBAMEDIB_CTOR_OFFSET))(this);
		}

		static ::CJPJBAMEDIB* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::CJPJBAMEDIB*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + CJPJBAMEDIB_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPJBAMEDIB_ONEXECUTE_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJPJBAMEDIB_LGAOOKPFIMF_OFFSET))(this);
		}

	};
