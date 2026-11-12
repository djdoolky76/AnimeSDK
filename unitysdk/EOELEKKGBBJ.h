#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class EOELEKKGBBJ;
namespace RPG::Client { class MatchThreeBoard; }

#define EOELEKKGBBJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x164CFE00)
#define EOELEKKGBBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x164CFFB0)
#define EOELEKKGBBJ_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0x164CFF60)
#define EOELEKKGBBJ_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x164CFE80)

inline static constexpr unsigned int EOELEKKGBBJ_TypeDefinitionIndex = 67796;

	class EOELEKKGBBJ : public ::FNIDIOCNBBI
	{
	public:
		::System::UInt32 KFIDBNDPNNI; // 0x28
		::System::Boolean LOMFLPDGODN; // 0x2C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2Int PECPBEOHOJC; // 0x30
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
