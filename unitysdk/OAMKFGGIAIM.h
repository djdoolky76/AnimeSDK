#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class OAMKFGGIAIM;
namespace System { class String; }

#define OAMKFGGIAIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D24CBD0)
#define OAMKFGGIAIM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D24C980)

inline static constexpr unsigned int OAMKFGGIAIM_TypeDefinitionIndex = 11286;

	class OAMKFGGIAIM : public ::System::Object
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x10
		::RPG::Client::TextID OENAMINOLLF; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID NMAHGFAPENI; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAMKFGGIAIM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OAMKFGGIAIM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OAMKFGGIAIM*))((::PBYTE)hIl2Cpp + OAMKFGGIAIM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
