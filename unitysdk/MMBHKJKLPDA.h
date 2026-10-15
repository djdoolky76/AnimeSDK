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

#define MMBHKJKLPDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A1A10)
#define MMBHKJKLPDA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1A1520)

inline static constexpr unsigned int MMBHKJKLPDA_TypeDefinitionIndex = 14944;

	class MMBHKJKLPDA : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EODCEHDOAEB; // 0x10
		::Il2CppArray<::System::UInt32>* GLNDIILFKBN; // 0x18
		::AKGKJBMMOGB* DOKMKLJDCEK; // 0x20
		::System::UInt32 BEOFPCAACEP; // 0x28
		::RPG::GameCore::RogueTournMode HILINOJPLGA; // 0x2C
		::System::UInt32 IMNLCDOMMOG; // 0x30
		::System::UInt32 GNIFODGCPAA; // 0x34
		::System::UInt32 NKLFPMKHELN; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID PIKODOAKLGE; // 0x40
		::System::UInt32 ILPNADCAIBL; // 0x50
		::System::Boolean PCBLHKODOMG; // 0x54
		::System::Byte _padding1[0x3];
		::System::UInt32 JJKLIJNFIBB; // 0x58
		::RPG::GameCore::RogueTournAreaGroupID PJGJLMIODBD; // 0x5C
		::System::UInt32 FOMEIPIEGII; // 0x60
		::RPG::GameCore::RogueTournDifficultyType GOEDJMNFALN; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBHKJKLPDA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MMBHKJKLPDA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MMBHKJKLPDA*))((::PBYTE)hIl2Cpp + MMBHKJKLPDA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
