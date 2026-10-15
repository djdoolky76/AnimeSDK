#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class LittleGameLevelVariable; }

#define GCFLIBPEGNB_CTOR_OFFSET UNITYSDK_OFFSET(0x1595F5D0)
#define GCFLIBPEGNB_EKFIEAALOFF_OFFSET UNITYSDK_OFFSET(0x1595F4B0)
#define GCFLIBPEGNB_JLPMLLCBPIB_OFFSET UNITYSDK_OFFSET(0x1595F590)
#define GCFLIBPEGNB_KFAJPMAOBOO_OFFSET UNITYSDK_OFFSET(0x1595F540)
#define GCFLIBPEGNB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1595F3F0)

inline static constexpr unsigned int GCFLIBPEGNB_TypeDefinitionIndex = 76501;

	class GCFLIBPEGNB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFLIBPEGNB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::LittleGameLevelVariable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVariable*))((::PBYTE)hIl2Cpp + GCFLIBPEGNB_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void EKFIEAALOFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFLIBPEGNB_EKFIEAALOFF_OFFSET))(this);
		}

		::System::Void KFAJPMAOBOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFLIBPEGNB_KFAJPMAOBOO_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint JLPMLLCBPIB()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFLIBPEGNB_JLPMLLCBPIB_OFFSET))(this);
		}

	};
