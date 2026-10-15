#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKPPDDOFADO.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class NDPFOOJIAIJ;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::GameCore { class AvatarPropertyValue; }

#define OCHBCLOCKFA_BHAKHEKAMJA_OFFSET UNITYSDK_OFFSET(0xBD5B970)
#define OCHBCLOCKFA_COHJBNCEDMM_OFFSET UNITYSDK_OFFSET(0xBD5B5F0)
#define OCHBCLOCKFA_CTOR_OFFSET UNITYSDK_OFFSET(0xBD5A930)
#define OCHBCLOCKFA_IFHIAGKLEIC_OFFSET UNITYSDK_OFFSET(0xBD5B320)
#define OCHBCLOCKFA_LNEPAFGAPJH_OFFSET UNITYSDK_OFFSET(0xBD5A960)
#define OCHBCLOCKFA_NCGLFOFDHCI_OFFSET UNITYSDK_OFFSET(0xBD5B510)
#define OCHBCLOCKFA_OEHCAAPMBNN_OFFSET UNITYSDK_OFFSET(0xBD5B0E0)

inline static constexpr unsigned int OCHBCLOCKFA_TypeDefinitionIndex = 65138;

	class OCHBCLOCKFA : public ::KKPPDDOFADO
	{
	public:
		::RPG::Client::GridFightRole* IAHCEGHHCKB; // 0x20
		::NDPFOOJIAIJ* BABBJILOOAL; // 0x28
		::System::Void _ctor(::RPG::Client::GridFightRole* a1, ::NDPFOOJIAIJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*, ::NDPFOOJIAIJ*))((::PBYTE)hIl2Cpp + OCHBCLOCKFA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void LNEPAFGAPJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHBCLOCKFA_LNEPAFGAPJH_OFFSET))(this);
		}

		::System::Void OEHCAAPMBNN(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + OCHBCLOCKFA_OEHCAAPMBNN_OFFSET))(this, a1);
		}

		::System::Void NCGLFOFDHCI(::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OCHBCLOCKFA_NCGLFOFDHCI_OFFSET))(this, a1, a2);
		}

		::System::Boolean COHJBNCEDMM(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + OCHBCLOCKFA_COHJBNCEDMM_OFFSET))(this, a1);
		}

		::System::Void BHAKHEKAMJA(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + OCHBCLOCKFA_BHAKHEKAMJA_OFFSET))(this, a1);
		}

		::System::Void IFHIAGKLEIC(::RPG::Client::GridFightTrait* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OCHBCLOCKFA_IFHIAGKLEIC_OFFSET))(this, a1, a2, a3);
		}

	};
