#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKEFMOKEJIF.h"
class MOMODPMFIKE;
class OIKDEOMMOAM;
namespace RPG::GameCore { class GameEntity; }

#define HNHIHMAAEEH_CKLKBJDCIFF_OFFSET UNITYSDK_OFFSET(0x15D94FB0)
#define HNHIHMAAEEH_CTOR_OFFSET UNITYSDK_OFFSET(0x15D952B0)
#define HNHIHMAAEEH_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x15D94B40)
#define HNHIHMAAEEH_EBBAKHJBBHE_OFFSET UNITYSDK_OFFSET(0x15D95170)
#define HNHIHMAAEEH_HCGKIPIFMNJ_OFFSET UNITYSDK_OFFSET(0x15D94DB0)
#define HNHIHMAAEEH_KPIFEDMFIMC_OFFSET UNITYSDK_OFFSET(0x15D95160)
#define HNHIHMAAEEH_MDFLKIPIBCA_OFFSET UNITYSDK_OFFSET(0x15D95210)
#define HNHIHMAAEEH_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x15D94CE0)

inline static constexpr unsigned int HNHIHMAAEEH_TypeDefinitionIndex = 53953;

	class HNHIHMAAEEH : public ::KKEFMOKEJIF
	{
	public:
		::MOMODPMFIKE* OBBGKNKONDE; // 0x18
		::RPG::GameCore::GameEntity* BJJJGAOIDLL; // 0x20
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
