#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HAACGHDLFOK;
namespace System { class String; }

#define HAACGHDLFOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9CEAA0)
#define HAACGHDLFOK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9CEAB0)
#define HAACGHDLFOK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9CEA60)

inline static constexpr unsigned int HAACGHDLFOK_TypeDefinitionIndex = 21833;

	class HAACGHDLFOK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* GFNAPNFFGPJ; // 0x18
		::RPG::Client::TextID HODEGKDKNIM; // 0x20
		::System::Boolean NBLBECMDHKB; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAACGHDLFOK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HAACGHDLFOK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HAACGHDLFOK*))((::PBYTE)hIl2Cpp + HAACGHDLFOK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HAACGHDLFOK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HAACGHDLFOK*))((::PBYTE)hIl2Cpp + HAACGHDLFOK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
