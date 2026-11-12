#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }

#define MPJBPBLBKFE_CTOR_OFFSET UNITYSDK_OFFSET(0xC2FE990)
#define MPJBPBLBKFE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2FE780)
#define MPJBPBLBKFE_IPMNNGIJMMA_OFFSET UNITYSDK_OFFSET(0xC2FE8C0)
#define MPJBPBLBKFE_MEGNJCHOGEE_OFFSET UNITYSDK_OFFSET(0xC2FE7C0)

inline static constexpr unsigned int MPJBPBLBKFE_TypeDefinitionIndex = 58791;

	class MPJBPBLBKFE : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Action_1<::RPG::GameCore::GameEntity*>* FPCPEAPOOHG; // 0x18
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
