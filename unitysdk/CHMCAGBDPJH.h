#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDMNPLMAKGE.h"
#include "unitysdk/RPG/GameCore/AbilityPropertyChangeReason.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReason.h"
class HIOAMIPNLIN;
class NCJILFFNINI;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define CHMCAGBDPJH_CCTOR_OFFSET UNITYSDK_OFFSET(0xCF58460)

inline static constexpr unsigned int CHMCAGBDPJH_TypeDefinitionIndex = 57728;

	struct alignas(8) CHMCAGBDPJH
	{
		::System::Boolean OLEAPFHOLBJ; // 0x10
		::System::Boolean LEHGCAGLIJB; // 0x11
		::System::Boolean BOEMBEDMEGD; // 0x12
		::System::Boolean HBHBFHIKLCN; // 0x13
		::System::Boolean DGAKPGALALN; // 0x14
		::System::Boolean EMADLAPAFCA; // 0x15
		::System::Boolean KADGBNLKIAB; // 0x16
		::System::Boolean AIBCCJFBLMH; // 0x17
		::System::Boolean CAKKEGHDIIP; // 0x18
		::System::Boolean IAHHHMJOGGD; // 0x19
		::System::Boolean MBJGAMBENFD; // 0x1A
		::System::Boolean AIALIJCLPPF; // 0x1B
		::System::Boolean JBGHDCBIMMK; // 0x1C
		::System::Boolean KEHAJCEDCMO; // 0x1D
		::System::Byte _padding0[0x2];
		::System::String* CCOLBNIOBLG; // 0x20
		::RPG::GameCore::ActionDelayChangeReason KDBCDFCDILE; // 0x28
		::System::Boolean FKILJLOJDNH; // 0x2C
		::System::Boolean IJNCCJFDING; // 0x2D
		::System::Byte _padding1[0x2];
		::RPG::GameCore::AbilityPropertyChangeReason GMKICMIMAAB; // 0x30
		::System::Byte _padding2[0x4];
		::RPG::GameCore::GameEntity* AAEBCMJLHMA; // 0x38
		::HIOAMIPNLIN* NGBAPOEDIOJ; // 0x40
		::RPG::GameCore::GameEntity* EJCOCNJPBEF; // 0x48
		::NCJILFFNINI* GNHAPABLMDF; // 0x50
		::RPG::GameCore::JsonEnum* NHALJPDONCP; // 0x58
		::System::Boolean CFBPHCJAFPG; // 0x60
		::System::Boolean HNGEDNBEDKB; // 0x61
		::System::Byte _padding3[0x6];
		::JDMNPLMAKGE BDAFAHKLKAC; // 0x68
		static ::CHMCAGBDPJH* StaticGet_HGLIFJGHADE()
		{
			return (::CHMCAGBDPJH*)UnitySDK::FromName("", "CHMCAGBDPJH")->GetStaticField(0x4BA40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHMCAGBDPJH_CCTOR_OFFSET))();
		}

	};
