#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class EOELEKKGBBJ;
namespace RPG::Client { class MatchThreeBoard; }

#define EOELEKKGBBJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x155BDD10)
#define EOELEKKGBBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x155BDEC0)
#define EOELEKKGBBJ_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0x155BDE70)
#define EOELEKKGBBJ_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x155BDD90)

inline static constexpr unsigned int EOELEKKGBBJ_TypeDefinitionIndex = 65864;

	class EOELEKKGBBJ : public ::FNIDIOCNBBI
	{
	public:
		::UnityEngine::Vector2Int PECPBEOHOJC; // 0x28
		::System::Boolean LOMFLPDGODN; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 KFIDBNDPNNI; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOELEKKGBBJ_CTOR_OFFSET))(this);
		}

		static ::EOELEKKGBBJ* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::EOELEKKGBBJ*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + EOELEKKGBBJ_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOELEKKGBBJ_ONEXECUTE_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOELEKKGBBJ_LGAOOKPFIMF_OFFSET))(this);
		}

	};
