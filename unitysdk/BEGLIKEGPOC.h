#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class BEGLIKEGPOC;
class FCOEMCEDLNL;

#define BEGLIKEGPOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD00F60)
#define BEGLIKEGPOC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD00DA0)

inline static constexpr unsigned int BEGLIKEGPOC_TypeDefinitionIndex = 12890;

	class BEGLIKEGPOC : public ::System::Object
	{
	public:
		::RPG::Client::TextID NMFBJOCJIBN; // 0x10
		::System::UInt32 LDGGEPJEKND; // 0x20
		::System::UInt32 NBEKALMIDKH; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGLIKEGPOC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BEGLIKEGPOC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BEGLIKEGPOC*))((::PBYTE)hIl2Cpp + BEGLIKEGPOC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
