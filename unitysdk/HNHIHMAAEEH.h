#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKEFMOKEJIF.h"
class MOMODPMFIKE;
class OIKDEOMMOAM;
namespace RPG::GameCore { class GameEntity; }

#define HNHIHMAAEEH_CKLKBJDCIFF_OFFSET UNITYSDK_OFFSET(0x16D35FA0)
#define HNHIHMAAEEH_CTOR_OFFSET UNITYSDK_OFFSET(0x16D362A0)
#define HNHIHMAAEEH_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x16D35B30)
#define HNHIHMAAEEH_EBBAKHJBBHE_OFFSET UNITYSDK_OFFSET(0x16D36160)
#define HNHIHMAAEEH_HCGKIPIFMNJ_OFFSET UNITYSDK_OFFSET(0x16D35DA0)
#define HNHIHMAAEEH_KPIFEDMFIMC_OFFSET UNITYSDK_OFFSET(0x16D36150)
#define HNHIHMAAEEH_MDFLKIPIBCA_OFFSET UNITYSDK_OFFSET(0x16D36200)
#define HNHIHMAAEEH_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x16D35CD0)

inline static constexpr unsigned int HNHIHMAAEEH_TypeDefinitionIndex = 55117;

	class HNHIHMAAEEH : public ::KKEFMOKEJIF
	{
	public:
		::RPG::GameCore::GameEntity* BJJJGAOIDLL; // 0x18
		::MOMODPMFIKE* OBBGKNKONDE; // 0x20
		::System::Boolean GOHAPKKFBOB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNHIHMAAEEH_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNHIHMAAEEH_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNHIHMAAEEH_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void HCGKIPIFMNJ(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + HNHIHMAAEEH_HCGKIPIFMNJ_OFFSET))(this, a1, a2);
		}

		::System::Void CKLKBJDCIFF(::OIKDEOMMOAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIKDEOMMOAM*))((::PBYTE)hIl2Cpp + HNHIHMAAEEH_CKLKBJDCIFF_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* KPIFEDMFIMC()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNHIHMAAEEH_KPIFEDMFIMC_OFFSET))(this);
		}

		::System::Boolean EBBAKHJBBHE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNHIHMAAEEH_EBBAKHJBBHE_OFFSET))(this);
		}

		::System::Boolean MDFLKIPIBCA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNHIHMAAEEH_MDFLKIPIBCA_OFFSET))(this);
		}

	};
