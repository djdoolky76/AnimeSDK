#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BENHFIGIMGL;
class FCOEMCEDLNL;

#define BENHFIGIMGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66E1F0)
#define BENHFIGIMGL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66E200)
#define BENHFIGIMGL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66E1C0)

inline static constexpr unsigned int BENHFIGIMGL_TypeDefinitionIndex = 19950;

	class BENHFIGIMGL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID GBBGMEMBFJA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BENHFIGIMGL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BENHFIGIMGL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BENHFIGIMGL*))((::PBYTE)hIl2Cpp + BENHFIGIMGL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BENHFIGIMGL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BENHFIGIMGL*))((::PBYTE)hIl2Cpp + BENHFIGIMGL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
