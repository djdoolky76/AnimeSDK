#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIDIOCNBBI.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/UnityEngine/Vector2.h"
class DHOKPKHPKCH;
class GGJBEDDBAJH;
namespace RPG::Client { class MatchThreeBoard; }

#define GGJBEDDBAJH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x159FC010)
#define GGJBEDDBAJH_CTOR_OFFSET UNITYSDK_OFFSET(0x159FC600)
#define GGJBEDDBAJH_LGAOOKPFIMF_OFFSET UNITYSDK_OFFSET(0x159FC5B0)
#define GGJBEDDBAJH_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x159FC0A0)
#define GGJBEDDBAJH_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x159FC130)

inline static constexpr unsigned int GGJBEDDBAJH_TypeDefinitionIndex = 65863;

	class GGJBEDDBAJH : public ::FNIDIOCNBBI
	{
	public:
		::DHOKPKHPKCH* MJKBBDNJFDN; // 0x28
		::UnityEngine::Vector2 ICGKFDEILKA; // 0x30
		::System::Boolean AELFMDGFAIK; // 0x38
		::System::Boolean LLMLOGNFFCD; // 0x39
		::System::Byte _padding0[0x2];
		::RPG::Client::LittleGame::Match3::OpponentRole BDPIMPJOJBK; // 0x3C
		::System::UInt32 IGDOFKLAILH; // 0x40
		// static const ::System::Object JCENJMALKBB; // 0x0
		// static const ::System::Object KMINGMBCIBI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJBEDDBAJH_CTOR_OFFSET))(this);
		}

		static ::GGJBEDDBAJH* BPLPBPMEODA(::RPG::Client::MatchThreeBoard* a1, ::DHOKPKHPKCH* a2)
		{
			return ((::GGJBEDDBAJH*(*)(::RPG::Client::MatchThreeBoard*, ::DHOKPKHPKCH*))((::PBYTE)hIl2Cpp + GGJBEDDBAJH_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJBEDDBAJH_ONCLEAR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJBEDDBAJH_ONEXECUTE_OFFSET))(this);
		}

		::System::Void LGAOOKPFIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJBEDDBAJH_LGAOOKPFIMF_OFFSET))(this);
		}

	};
