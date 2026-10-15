#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/Object.h"
class GBDODOMIMIF;
class HHGEPOFOLMB;
class LBNENBNFPAD;
class LCJIAMCDDFL;
class OKEPDOHEGME;

#define HLFBHOBMOIJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15D5E050)
#define HLFBHOBMOIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15D5E000)
#define HLFBHOBMOIJ_DHEJNJPHKOE_OFFSET UNITYSDK_OFFSET(0x15D5E820)
#define HLFBHOBMOIJ_GCEKIMKEBDC_OFFSET UNITYSDK_OFFSET(0x15D5E6B0)

	class HLFBHOBMOIJ : public ::System::Object
	{
	public:
		::OKEPDOHEGME* KAFJPAPINMP; // 0x10
		::System::Void _ctor(::OKEPDOHEGME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKEPDOHEGME*))((::PBYTE)hIl2Cpp + HLFBHOBMOIJ_CTOR_OFFSET))(this, a1);
		}

		::LBNENBNFPAD* BPLPBPMEODA(::HHGEPOFOLMB* a1)
		{
			return ((::LBNENBNFPAD*(*)(::PVOID, ::HHGEPOFOLMB*))((::PBYTE)hIl2Cpp + HLFBHOBMOIJ_BPLPBPMEODA_OFFSET))(this, a1);
		}

		static ::LCJIAMCDDFL* GCEKIMKEBDC(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::LCJIAMCDDFL*(*)(::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + HLFBHOBMOIJ_GCEKIMKEBDC_OFFSET))(a1);
		}

		static ::GBDODOMIMIF* DHEJNJPHKOE(::RPG::GameCore::AvatarBaseType a1)
		{
			return ((::GBDODOMIMIF*(*)(::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + HLFBHOBMOIJ_DHEJNJPHKOE_OFFSET))(a1);
		}

	};
