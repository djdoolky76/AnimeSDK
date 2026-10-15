#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKMNJFFMIFK.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class BJCNEJFNIID;
class FCOEMCEDLNL;

#define BJCNEJFNIID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D80D250)
#define BJCNEJFNIID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D80D170)

	class BJCNEJFNIID : public ::RPG::GameCore::JsonConfig
	{
	public:
		::DKMNJFFMIFK BJHMJLEBMGO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCNEJFNIID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BJCNEJFNIID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BJCNEJFNIID*))((::PBYTE)hIl2Cpp + BJCNEJFNIID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
