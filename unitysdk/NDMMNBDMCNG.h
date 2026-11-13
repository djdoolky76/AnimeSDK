#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NDMMNBDMCNG;

#define NDMMNBDMCNG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A07A0)
#define NDMMNBDMCNG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8A0500)

inline static constexpr unsigned int NDMMNBDMCNG_TypeDefinitionIndex = 11538;

	class NDMMNBDMCNG : public ::System::Object
	{
	public:
		::RPG::Client::TextID FMCNCMENCFF; // 0x10
		::RPG::Client::TextID IODFDGLGOJI; // 0x20
		::RPG::Client::TextID GAOMJHOKMMG; // 0x30
		::System::UInt32 JIDGCHINCKC; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMMNBDMCNG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NDMMNBDMCNG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NDMMNBDMCNG*))((::PBYTE)hIl2Cpp + NDMMNBDMCNG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
