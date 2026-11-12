#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOPJIACKHCC;
class HEACFGECCPH;
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class GameEntity; }

#define BNFKHGEEBGM_ALGCNLDBAEK_OFFSET UNITYSDK_OFFSET(0xC74B610)
#define BNFKHGEEBGM_CTOR_OFFSET UNITYSDK_OFFSET(0xC74B890)
#define BNFKHGEEBGM_JGLJDKPKIBK_OFFSET UNITYSDK_OFFSET(0xC74B390)
#define BNFKHGEEBGM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC74B330)
#define BNFKHGEEBGM_MHMOEIPGLML_OFFSET UNITYSDK_OFFSET(0xC74B730)
#define BNFKHGEEBGM_PJDKPLAKEID_OFFSET UNITYSDK_OFFSET(0xC74B680)

inline static constexpr unsigned int BNFKHGEEBGM_TypeDefinitionIndex = 73516;

	class BNFKHGEEBGM : public ::System::Object
	{
	public:
		::HEACFGECCPH* CNFKLPEKBCO; // 0x10
		::RPG::GameCore::CharacterVisibleComponent* PLDFJEONENF; // 0x18
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x20
		::RPG::Client::UIFollow3DTarget* LLBJOCEMNPK; // 0x28
		::System::Boolean POGICBHCJIB; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFKHGEEBGM_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::UIFollow3DTarget* a1, ::HEACFGECCPH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFollow3DTarget*, ::HEACFGECCPH*))((::PBYTE)hIl2Cpp + BNFKHGEEBGM_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void JGLJDKPKIBK(::RPG::GameCore::GameEntity* a1, ::FOPJIACKHCC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::FOPJIACKHCC*))((::PBYTE)hIl2Cpp + BNFKHGEEBGM_JGLJDKPKIBK_OFFSET))(this, a1, a2);
		}

		::System::Void ALGCNLDBAEK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BNFKHGEEBGM_ALGCNLDBAEK_OFFSET))(this, a1);
		}

		::System::Void PJDKPLAKEID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFKHGEEBGM_PJDKPLAKEID_OFFSET))(this);
		}

		::System::Void MHMOEIPGLML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFKHGEEBGM_MHMOEIPGLML_OFFSET))(this);
		}

	};
