#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournAreaGroupID.h"
#include "unitysdk/RPG/GameCore/RogueTournDifficultyType.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"
class AKGKJBMMOGB;
class FCOEMCEDLNL;
class MMBHKJKLPDA;

#define MMBHKJKLPDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E1F70)
#define MMBHKJKLPDA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E3E1A80)

inline static constexpr unsigned int MMBHKJKLPDA_TypeDefinitionIndex = 15100;

	class MMBHKJKLPDA : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* GLNDIILFKBN; // 0x10
		::AKGKJBMMOGB* DOKMKLJDCEK; // 0x18
		::Il2CppArray<::System::UInt32>* EODCEHDOAEB; // 0x20
		::System::UInt32 JJKLIJNFIBB; // 0x28
		::RPG::GameCore::RogueTournDifficultyType GOEDJMNFALN; // 0x2C
		::System::Boolean PCBLHKODOMG; // 0x30
		::System::Byte _padding0[0x7];
		::RPG::Client::TextID PIKODOAKLGE; // 0x38
		::RPG::GameCore::RogueTournMode HILINOJPLGA; // 0x48
		::System::UInt32 IMNLCDOMMOG; // 0x4C
		::RPG::GameCore::RogueTournAreaGroupID PJGJLMIODBD; // 0x50
		::System::UInt32 FOMEIPIEGII; // 0x54
		::System::UInt32 ILPNADCAIBL; // 0x58
		::System::UInt32 GNIFODGCPAA; // 0x5C
		::System::UInt32 NKLFPMKHELN; // 0x60
		::System::UInt32 BEOFPCAACEP; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBHKJKLPDA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MMBHKJKLPDA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MMBHKJKLPDA*))((::PBYTE)hIl2Cpp + MMBHKJKLPDA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
