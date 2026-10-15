#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class LLGMEBOEBPP;
namespace System { class String; }

#define LLGMEBOEBPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D10E7A0)
#define LLGMEBOEBPP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D10E590)

inline static constexpr unsigned int LLGMEBOEBPP_TypeDefinitionIndex = 11990;

	class LLGMEBOEBPP : public ::System::Object
	{
	public:
		::System::String* HLDFOGCMOMM; // 0x10
		::System::String* HIKPBAFAIMF; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID OENAMINOLLF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGMEBOEBPP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LLGMEBOEBPP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LLGMEBOEBPP*))((::PBYTE)hIl2Cpp + LLGMEBOEBPP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
