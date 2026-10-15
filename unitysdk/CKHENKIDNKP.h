#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKHENKIDNKP;
class FCOEMCEDLNL;

#define CKHENKIDNKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB80A80)
#define CKHENKIDNKP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DBF15C0)

inline static constexpr unsigned int CKHENKIDNKP_TypeDefinitionIndex = 11561;

	class CKHENKIDNKP : public ::System::Object
	{
	public:
		::System::UInt32 PHFMCACHFIJ; // 0x10
		::System::UInt32 HNEIIAGADGO; // 0x14
		::System::UInt32 DOBKKDIECDO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHENKIDNKP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CKHENKIDNKP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CKHENKIDNKP*))((::PBYTE)hIl2Cpp + CKHENKIDNKP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
