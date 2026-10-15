#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/UnityEngine/Vector2.h"
class OFGBOCFGHEE;
class OMDECCBBNLM;
namespace RPG::Client { class MatchThreeBoard; }

#define OMDECCBBNLM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBF19E90)
#define OMDECCBBNLM_CTOR_OFFSET UNITYSDK_OFFSET(0xBF1A3D0)
#define OMDECCBBNLM_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0xBF1A380)
#define OMDECCBBNLM_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xBF19F20)
#define OMDECCBBNLM_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xBF19FA0)

inline static constexpr unsigned int OMDECCBBNLM_TypeDefinitionIndex = 65858;

	class OMDECCBBNLM : public ::FNIDIOCNBBI
	{
	public:
		::OFGBOCFGHEE* HNEBOCDHJGF; // 0x28
		::RPG::Client::LittleGame::Match3::OpponentRole BDPIMPJOJBK; // 0x30
		::System::UInt32 AOCLHNKNJHM; // 0x34
		::UnityEngine::Vector2 ICGKFDEILKA; // 0x38
		// static const ::System::Object JCENJMALKBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDECCBBNLM_CTOR_OFFSET))(this);
		}

		static ::OMDECCBBNLM* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1, ::OFGBOCFGHEE* a2)
		{
			return ((::OMDECCBBNLM*(*)(::RPG::Client::MatchThreeBoard*, ::OFGBOCFGHEE*))((::PBYTE)hIl2Cpp + OMDECCBBNLM_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDECCBBNLM_ONCLEAR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDECCBBNLM_ONEXECUTE_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDECCBBNLM_LGAOOKPFIMF_OFFSET))(this);
		}

	};
