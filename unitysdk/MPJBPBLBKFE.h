#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define MPJBPBLBKFE_CTOR_OFFSET UNITYSDK_OFFSET(0xBA3F690)
#define MPJBPBLBKFE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA3F480)
#define MPJBPBLBKFE_IPMNNGIJMMA_OFFSET UNITYSDK_OFFSET(0xBA3F5C0)
#define MPJBPBLBKFE_MEGNJCHOGEE_OFFSET UNITYSDK_OFFSET(0xBA3F4C0)

	class MPJBPBLBKFE : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Action* FPCPEAPOOHG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJBPBLBKFE_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPJBPBLBKFE_DISPOSE_OFFSET))(this);
		}

		::System::Void MEGNJCHOGEE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MPJBPBLBKFE_MEGNJCHOGEE_OFFSET))(this, a1);
		}

		::System::Void IPMNNGIJMMA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MPJBPBLBKFE_IPMNNGIJMMA_OFFSET))(this, a1);
		}

	};
