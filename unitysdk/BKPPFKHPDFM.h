#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/UnityEngine/Vector2.h"
class BKPPFKHPDFM;
namespace RPG::Client { class MatchThreeBoard; }

#define BKPPFKHPDFM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC12F550)
#define BKPPFKHPDFM_CTOR_OFFSET UNITYSDK_OFFSET(0xC12F750)
#define BKPPFKHPDFM_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0xC12F700)
#define BKPPFKHPDFM_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xC12F5D0)
#define BKPPFKHPDFM_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xC12F620)

inline static constexpr unsigned int BKPPFKHPDFM_TypeDefinitionIndex = 67792;

	class BKPPFKHPDFM : public ::FNIDIOCNBBI
	{
	public:
		::RPG::Client::LittleGame::Match3::OpponentRole BDPIMPJOJBK; // 0x28
		::UnityEngine::Vector2 OLCHHDKKPLI; // 0x2C
		::System::UInt32 BOKJJKFCFME; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPPFKHPDFM_CTOR_OFFSET))(this);
		}

		static ::BKPPFKHPDFM* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::BKPPFKHPDFM*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + BKPPFKHPDFM_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPPFKHPDFM_ONCLEAR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPPFKHPDFM_ONEXECUTE_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPPFKHPDFM_LGAOOKPFIMF_OFFSET))(this);
		}

	};
