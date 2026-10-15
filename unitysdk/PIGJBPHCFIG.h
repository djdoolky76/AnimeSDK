#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class PIGJBPHCFIG;

#define PIGJBPHCFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2C1C70)
#define PIGJBPHCFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2C1A40)

inline static constexpr unsigned int PIGJBPHCFIG_TypeDefinitionIndex = 11563;

	class PIGJBPHCFIG : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CJEEEFLFFOL; // 0x10
		::RPG::Client::TextID OENAMINOLLF; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x28
		::System::UInt32 AJCDFGPPLJP; // 0x2C
		::System::UInt32 LIPCDDAPHNF; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIGJBPHCFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PIGJBPHCFIG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PIGJBPHCFIG*))((::PBYTE)hIl2Cpp + PIGJBPHCFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
