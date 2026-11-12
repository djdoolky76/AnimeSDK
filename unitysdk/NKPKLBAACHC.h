#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamTowersPlayerSkillType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NKPKLBAACHC;
namespace System { class String; }

#define NKPKLBAACHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E435F00)
#define NKPKLBAACHC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E435980)

inline static constexpr unsigned int NKPKLBAACHC_TypeDefinitionIndex = 12558;

	class NKPKLBAACHC : public ::System::Object
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x18
		::System::String* MEIFEJGOLJC; // 0x20
		::RPG::Client::TextID NMAHGFAPENI; // 0x28
		::System::UInt32 ODEKADIBFAO; // 0x38
		::RPG::GameCore::TeamTowersPlayerSkillType GMPGDEINODK; // 0x3C
		::System::Single CNGOPBADLLP; // 0x40
		::System::UInt32 AAGKEBFHLMC; // 0x44
		::System::Single EJKGHBAGFIB; // 0x48
		::System::UInt32 PHFMCACHFIJ; // 0x4C
		::RPG::Client::TextID HEIHBJEEGPB; // 0x50
		::RPG::Client::TextID OENAMINOLLF; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKPKLBAACHC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NKPKLBAACHC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NKPKLBAACHC*))((::PBYTE)hIl2Cpp + NKPKLBAACHC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
