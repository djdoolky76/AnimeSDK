#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class BKALIFMAGPM;
class FCOEMCEDLNL;
class NCOOOFILFOE;

#define NCOOOFILFOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F6B50)
#define NCOOOFILFOE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1F6980)

	class NCOOOFILFOE : public ::RPG::GameCore::JsonConfig
	{
	public:
		::BKALIFMAGPM* BLNDPOKLJAK; // 0x10
		::System::UInt64 NIJMKCCGEHK; // 0x18
		::System::Single JMBHCPLJNNM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCOOOFILFOE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NCOOOFILFOE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NCOOOFILFOE*))((::PBYTE)hIl2Cpp + NCOOOFILFOE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
