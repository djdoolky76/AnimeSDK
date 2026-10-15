#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/InputSignalType.h"
#include "unitysdk/System/Object.h"
class BABNOKHOBCF;
class GAFMLDLBCEB;
class MNCOPNHONHO;

#define OAHHEIJNGBG_BCLFOJAMFNO_OFFSET UNITYSDK_OFFSET(0xBD215F0)
#define OAHHEIJNGBG_CTOR_OFFSET UNITYSDK_OFFSET(0xBD215E0)
#define OAHHEIJNGBG_KKDMPNCKGHE_OFFSET UNITYSDK_OFFSET(0xBD21720)

	class OAHHEIJNGBG : public ::System::Object
	{
	public:
		::BABNOKHOBCF* FKINCGODJEP; // 0x10
		::MNCOPNHONHO* PDENFEFCAGN; // 0x18
		::GAFMLDLBCEB* JAJOGJKHAJP; // 0x20
		::System::Void _ctor(::MNCOPNHONHO* a1, ::BABNOKHOBCF* a2, ::GAFMLDLBCEB* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MNCOPNHONHO*, ::BABNOKHOBCF*, ::GAFMLDLBCEB*))((::PBYTE)hIl2Cpp + OAHHEIJNGBG_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean BCLFOJAMFNO(::RPG::Client::LittleGame::FourRotateVoxel::InputSignalType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::InputSignalType))((::PBYTE)hIl2Cpp + OAHHEIJNGBG_BCLFOJAMFNO_OFFSET))(this, a1);
		}

		::System::Boolean KKDMPNCKGHE(::RPG::Client::LittleGame::FourRotateVoxel::InputSignalType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::InputSignalType))((::PBYTE)hIl2Cpp + OAHHEIJNGBG_KKDMPNCKGHE_OFFSET))(this, a1);
		}

	};
