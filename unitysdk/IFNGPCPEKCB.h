#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class IFNGPCPEKCB;

#define IFNGPCPEKCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEF5E30)
#define IFNGPCPEKCB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEF5BE0)

inline static constexpr unsigned int IFNGPCPEKCB_TypeDefinitionIndex = 12888;

	class IFNGPCPEKCB : public ::System::Object
	{
	public:
		::RPG::Client::TextID DNLFJOJJDNF; // 0x10
		::RPG::Client::TextID OENAMINOLLF; // 0x20
		::System::UInt32 NBEKALMIDKH; // 0x30
		::System::UInt32 FCOKEIGNAIN; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFNGPCPEKCB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IFNGPCPEKCB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IFNGPCPEKCB*))((::PBYTE)hIl2Cpp + IFNGPCPEKCB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
