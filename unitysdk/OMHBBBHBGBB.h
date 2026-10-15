#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ArrayPoolWrapper_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class CFPAENNGMMO;
class MNBNFBAMKKI;
namespace RPG::GameCore { class TaskContext; }

#define OMHBBBHBGBB_CTOR_OFFSET UNITYSDK_OFFSET(0xBF2B5B0)
#define OMHBBBHBGBB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF2B690)
#define OMHBBBHBGBB_IOONKCMPADG_OFFSET UNITYSDK_OFFSET(0xBF2BA10)
#define OMHBBBHBGBB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF2B6D0)

	class OMHBBBHBGBB
	{
	public:
		::RPG::GameCore::ArrayPoolWrapper_1<::MNBNFBAMKKI*> NMJKNKGGBOD; // 0x28
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CFPAENNGMMO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CFPAENNGMMO*))((::PBYTE)hIl2Cpp + OMHBBBHBGBB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHBBBHBGBB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHBBBHBGBB_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint IOONKCMPADG(::MNBNFBAMKKI* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + OMHBBBHBGBB_IOONKCMPADG_OFFSET))(this, a1);
		}

	};
