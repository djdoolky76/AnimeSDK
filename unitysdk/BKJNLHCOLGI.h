#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class BKJNLHCOLGI;
class FCOEMCEDLNL;

#define BKJNLHCOLGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7EFBD0)
#define BKJNLHCOLGI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7EF980)

inline static constexpr unsigned int BKJNLHCOLGI_TypeDefinitionIndex = 11677;

	class BKJNLHCOLGI : public ::System::Object
	{
	public:
		::RPG::Client::TextID LOGJBKBLNEM; // 0x10
		::System::UInt32 PHFMCACHFIJ; // 0x20
		::System::UInt32 AEONKNDCDKN; // 0x24
		::RPG::Client::TextID MONJPEJECGL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJNLHCOLGI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BKJNLHCOLGI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BKJNLHCOLGI*))((::PBYTE)hIl2Cpp + BKJNLHCOLGI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
