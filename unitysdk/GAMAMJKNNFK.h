#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TacticsCardType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class GAMAMJKNNFK;
namespace System { class String; }

#define GAMAMJKNNFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA450B0)
#define GAMAMJKNNFK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA44C80)

inline static constexpr unsigned int GAMAMJKNNFK_TypeDefinitionIndex = 11361;

	class GAMAMJKNNFK : public ::System::Object
	{
	public:
		::System::String* MJPKBIGCFOM; // 0x10
		::Il2CppArray<::System::Int32>* PBLPLDJKPEI; // 0x18
		::Il2CppArray<::System::UInt32>* PGAMJHMNLLN; // 0x20
		::RPG::Client::TextID NMAHGFAPENI; // 0x28
		::RPG::Client::TextID OENAMINOLLF; // 0x38
		::RPG::GameCore::TacticsCardType GMPGDEINODK; // 0x48
		::System::Int32 PMIEAEGJNMJ; // 0x4C
		::System::UInt32 PHFMCACHFIJ; // 0x50
		::System::UInt32 CCMBLCMCIPD; // 0x54
		::System::UInt32 DODGNGAGMMG; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMAMJKNNFK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GAMAMJKNNFK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GAMAMJKNNFK*))((::PBYTE)hIl2Cpp + GAMAMJKNNFK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
