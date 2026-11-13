#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HGCDDNJGGGG;

#define HGCDDNJGGGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E812E00)
#define HGCDDNJGGGG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E812E10)
#define HGCDDNJGGGG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E812DD0)

inline static constexpr unsigned int HGCDDNJGGGG_TypeDefinitionIndex = 21905;

	class HGCDDNJGGGG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID NMMKDFFHOLL; // 0x18
		::System::Boolean DMKJAJLNEBK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCDDNJGGGG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HGCDDNJGGGG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HGCDDNJGGGG*))((::PBYTE)hIl2Cpp + HGCDDNJGGGG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HGCDDNJGGGG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HGCDDNJGGGG*))((::PBYTE)hIl2Cpp + HGCDDNJGGGG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
