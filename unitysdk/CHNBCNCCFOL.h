#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/UnityEngine/Vector2.h"
class CHNBCNCCFOL;
namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client::LittleGame { class Match3EnergyViewStateBuffer; }

#define CHNBCNCCFOL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16E2DC60)
#define CHNBCNCCFOL_CTOR_OFFSET UNITYSDK_OFFSET(0x16E2E180)
#define CHNBCNCCFOL_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0x16E2E130)
#define CHNBCNCCFOL_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x16E2DCF0)
#define CHNBCNCCFOL_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x16E2DD80)

inline static constexpr unsigned int CHNBCNCCFOL_TypeDefinitionIndex = 67794;

	class CHNBCNCCFOL : public ::FNIDIOCNBBI
	{
	public:
		::RPG::Client::LittleGame::Match3EnergyViewStateBuffer* HPINJBJLCBB; // 0x28
		::RPG::Client::LittleGame::Match3::OpponentRole BDPIMPJOJBK; // 0x30
		::System::UInt32 KLOEJIMMPJM; // 0x34
		::System::Boolean OBMMJLCPNGA; // 0x38
		::System::Boolean LLMLOGNFFCD; // 0x39
		::System::Byte _padding0[0x2];
		::System::UInt32 JCAEANLAGMB; // 0x3C
		::UnityEngine::Vector2 ICGKFDEILKA; // 0x40
		// static const ::System::Object JCENJMALKBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHNBCNCCFOL_CTOR_OFFSET))(this);
		}

		static ::CHNBCNCCFOL* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1, ::RPG::Client::LittleGame::Match3EnergyViewStateBuffer* a2)
		{
			return ((::CHNBCNCCFOL*(*)(::RPG::Client::MatchThreeBoard*, ::RPG::Client::LittleGame::Match3EnergyViewStateBuffer*))((::PBYTE)hIl2Cpp + CHNBCNCCFOL_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHNBCNCCFOL_ONCLEAR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHNBCNCCFOL_ONEXECUTE_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHNBCNCCFOL_LGAOOKPFIMF_OFFSET))(this);
		}

	};
