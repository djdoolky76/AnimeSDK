#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHLCHLGEJCA;
class FCOEMCEDLNL;

#define EHLCHLGEJCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD82F10)
#define EHLCHLGEJCA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD82DF0)

	class EHLCHLGEJCA : public ::System::Object
	{
	public:
		::System::UInt32 GACEMBBAGMP; // 0x10
		::System::UInt32 LLDCHLHNADA; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHLCHLGEJCA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EHLCHLGEJCA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EHLCHLGEJCA*))((::PBYTE)hIl2Cpp + EHLCHLGEJCA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
