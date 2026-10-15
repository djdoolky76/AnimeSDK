#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class ACINPKMDFEM;
class FCOEMCEDLNL;
namespace System { class String; }

#define ACINPKMDFEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA6790)
#define ACINPKMDFEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCA6540)

inline static constexpr unsigned int ACINPKMDFEM_TypeDefinitionIndex = 12476;

	class ACINPKMDFEM : public ::System::Object
	{
	public:
		::System::String* HCCKLLGBPIA; // 0x10
		::RPG::Client::TextID OENAMINOLLF; // 0x18
		::RPG::Client::TextID NMAHGFAPENI; // 0x28
		::System::UInt32 PHFMCACHFIJ; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACINPKMDFEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ACINPKMDFEM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ACINPKMDFEM*))((::PBYTE)hIl2Cpp + ACINPKMDFEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
