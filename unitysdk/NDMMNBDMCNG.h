#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NDMMNBDMCNG;

#define NDMMNBDMCNG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1FAE40)
#define NDMMNBDMCNG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1FABA0)

inline static constexpr unsigned int NDMMNBDMCNG_TypeDefinitionIndex = 11487;

	class NDMMNBDMCNG : public ::System::Object
	{
	public:
		::System::UInt32 JIDGCHINCKC; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID GAOMJHOKMMG; // 0x18
		::RPG::Client::TextID FMCNCMENCFF; // 0x28
		::RPG::Client::TextID IODFDGLGOJI; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMMNBDMCNG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NDMMNBDMCNG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NDMMNBDMCNG*))((::PBYTE)hIl2Cpp + NDMMNBDMCNG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
