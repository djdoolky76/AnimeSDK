#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TacticsCardType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class GAMAMJKNNFK;
namespace System { class String; }

#define GAMAMJKNNFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF36A0)
#define GAMAMJKNNFK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDF3270)

inline static constexpr unsigned int GAMAMJKNNFK_TypeDefinitionIndex = 11310;

	class GAMAMJKNNFK : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* PBLPLDJKPEI; // 0x10
		::Il2CppArray<::System::UInt32>* PGAMJHMNLLN; // 0x18
		::System::String* MJPKBIGCFOM; // 0x20
		::System::UInt32 PHFMCACHFIJ; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID NMAHGFAPENI; // 0x30
		::RPG::GameCore::TacticsCardType GMPGDEINODK; // 0x40
		::System::UInt32 DODGNGAGMMG; // 0x44
		::System::Int32 PMIEAEGJNMJ; // 0x48
		::System::UInt32 CCMBLCMCIPD; // 0x4C
		::RPG::Client::TextID OENAMINOLLF; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMAMJKNNFK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GAMAMJKNNFK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GAMAMJKNNFK*))((::PBYTE)hIl2Cpp + GAMAMJKNNFK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
