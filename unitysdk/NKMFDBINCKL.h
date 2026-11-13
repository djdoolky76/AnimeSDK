#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NKMFDBINCKL;

#define NKMFDBINCKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E75E850)
#define NKMFDBINCKL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E75E620)

inline static constexpr unsigned int NKMFDBINCKL_TypeDefinitionIndex = 12550;

	class NKMFDBINCKL : public ::System::Object
	{
	public:
		::RPG::Client::TextID AABNPBGMOFN; // 0x10
		::System::Single IEHPFADHJFD; // 0x20
		::System::UInt32 PHFMCACHFIJ; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKMFDBINCKL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NKMFDBINCKL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NKMFDBINCKL*))((::PBYTE)hIl2Cpp + NKMFDBINCKL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
