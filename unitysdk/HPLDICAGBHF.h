#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LittleGameLevelVariable; }

#define HPLDICAGBHF_CTOR_OFFSET UNITYSDK_OFFSET(0x15DC5590)
#define HPLDICAGBHF_EKFIEAALOFF_OFFSET UNITYSDK_OFFSET(0x15DC5480)
#define HPLDICAGBHF_KFAJPMAOBOO_OFFSET UNITYSDK_OFFSET(0x15DC5540)
#define HPLDICAGBHF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15DC53C0)

inline static constexpr unsigned int HPLDICAGBHF_TypeDefinitionIndex = 76502;

	class HPLDICAGBHF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLDICAGBHF_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::LittleGameLevelVariable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVariable*))((::PBYTE)hIl2Cpp + HPLDICAGBHF_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void EKFIEAALOFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLDICAGBHF_EKFIEAALOFF_OFFSET))(this);
		}

		::System::Void KFAJPMAOBOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLDICAGBHF_KFAJPMAOBOO_OFFSET))(this);
		}

	};
