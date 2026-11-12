#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TacticsCardType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class GAMAMJKNNFK;
namespace System { class String; }

#define GAMAMJKNNFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFFC580)
#define GAMAMJKNNFK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DFFC150)

inline static constexpr unsigned int GAMAMJKNNFK_TypeDefinitionIndex = 11361;

	class GAMAMJKNNFK : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* PBLPLDJKPEI; // 0x10
		::System::String* MJPKBIGCFOM; // 0x18
		::Il2CppArray<::System::UInt32>* PGAMJHMNLLN; // 0x20
		::System::UInt32 PHFMCACHFIJ; // 0x28
		::System::UInt32 CCMBLCMCIPD; // 0x2C
		::RPG::Client::TextID OENAMINOLLF; // 0x30
		::RPG::Client::TextID NMAHGFAPENI; // 0x40
		::RPG::GameCore::TacticsCardType GMPGDEINODK; // 0x50
		::System::UInt32 DODGNGAGMMG; // 0x54
		::System::Int32 PMIEAEGJNMJ; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMAMJKNNFK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GAMAMJKNNFK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GAMAMJKNNFK*))((::PBYTE)hIl2Cpp + GAMAMJKNNFK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
