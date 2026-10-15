#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
class JEGCOJLAAOL;

#define JEGCOJLAAOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D01E2D0)
#define JEGCOJLAAOL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D01E090)

	class JEGCOJLAAOL : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 LOLLEGPLMOO; // 0x10
		::RPG::MVector3 AIBGEDIGEOO; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGCOJLAAOL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JEGCOJLAAOL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JEGCOJLAAOL*))((::PBYTE)hIl2Cpp + JEGCOJLAAOL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
