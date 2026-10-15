#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class FNCJNHDMCBH;

#define FNCJNHDMCBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE0D7E0)
#define FNCJNHDMCBH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE0D670)

	class FNCJNHDMCBH : public ::System::Object
	{
	public:
		::System::UInt32 FPPNKOEPFIP; // 0x10
		::System::UInt32 BGHKBBMOEKL; // 0x14
		::System::UInt32 GDBJDAOOCOH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCJNHDMCBH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FNCJNHDMCBH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FNCJNHDMCBH*))((::PBYTE)hIl2Cpp + FNCJNHDMCBH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
