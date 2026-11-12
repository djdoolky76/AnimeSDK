#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/UnityEngine/Vector2.h"
class NJBMOGMCOOL;
namespace RPG::Client { class MatchThreeBoard; }

#define NJBMOGMCOOL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC4EC230)
#define NJBMOGMCOOL_CTOR_OFFSET UNITYSDK_OFFSET(0xC4EC380)
#define NJBMOGMCOOL_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xC4EC320)
#define NJBMOGMCOOL_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xC4EC2B0)

inline static constexpr unsigned int NJBMOGMCOOL_TypeDefinitionIndex = 67802;

	class NJBMOGMCOOL : public ::FNIDIOCNBBI
	{
	public:
		::RPG::GameCore::Match3::BombType FEKGEPDLOCE; // 0x28
		::UnityEngine::Vector2 GMDBHJKEAEI; // 0x2C
		::System::UInt32 MNDFOPKBHKP; // 0x34
		::System::UInt32 KLOEJIMMPJM; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBMOGMCOOL_CTOR_OFFSET))(this);
		}

		static ::NJBMOGMCOOL* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::NJBMOGMCOOL*(*)(::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + NJBMOGMCOOL_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBMOGMCOOL_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJBMOGMCOOL_ONCLEAR_OFFSET))(this);
		}

	};
