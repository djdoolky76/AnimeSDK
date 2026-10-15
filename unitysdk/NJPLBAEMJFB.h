#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class JEANAIHDCAA;
class NJPLBAEMJFB;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class MatchThreeBoard; }

#define NJPLBAEMJFB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBC2B5C0)
#define NJPLBAEMJFB_CTOR_OFFSET UNITYSDK_OFFSET(0xBC2B8B0)
#define NJPLBAEMJFB_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0xBC2B860)
#define NJPLBAEMJFB_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xBC2B7D0)
#define NJPLBAEMJFB_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xBC2B6E0)

inline static constexpr unsigned int NJPLBAEMJFB_TypeDefinitionIndex = 65853;

	class NJPLBAEMJFB : public ::FNIDIOCNBBI
	{
	public:
		::RPG::PoolList_1<::UnityEngine::Vector2Int>* IPKCFNKIDMB; // 0x28
		::JEANAIHDCAA* IEGFCMEEEKC; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPLBAEMJFB_CTOR_OFFSET))(this);
		}

		static ::NJPLBAEMJFB* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::NJPLBAEMJFB*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + NJPLBAEMJFB_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPLBAEMJFB_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPLBAEMJFB_ONCLEAR_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPLBAEMJFB_LGAOOKPFIMF_OFFSET))(this);
		}

	};
