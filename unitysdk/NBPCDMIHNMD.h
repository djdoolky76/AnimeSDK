#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABDOMMLHNBC;
class BIIJADGFFLF;
class CFALFIPEHJH;
class DMPMGGKKIBH;
namespace RPG::Client::ParkourGame { class MonoParkourProjectile; }
namespace RPG::Client::ParkourGame { class ParkourSkillConfig_Fire; }
namespace UnityEngine { class Transform; }

#define NBPCDMIHNMD_BCGPEDOOABL_OFFSET UNITYSDK_OFFSET(0x150E1550)
#define NBPCDMIHNMD_BLDBGMJHGCG_OFFSET UNITYSDK_OFFSET(0x150E1740)
#define NBPCDMIHNMD_BNHMIJFHNOF_OFFSET UNITYSDK_OFFSET(0x150E0C70)
#define NBPCDMIHNMD_CTOR_OFFSET UNITYSDK_OFFSET(0x150E0940)
#define NBPCDMIHNMD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x150E0D50)
#define NBPCDMIHNMD_DKICLKAAIMN_OFFSET UNITYSDK_OFFSET(0x150E1920)
#define NBPCDMIHNMD_EFPNBPCLCHI_OFFSET UNITYSDK_OFFSET(0x150E1820)
#define NBPCDMIHNMD_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0x150E1910)
#define NBPCDMIHNMD_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x150E0DC0)
#define NBPCDMIHNMD_LHOFDLKIFBF_OFFSET UNITYSDK_OFFSET(0x150E0C10)

inline static constexpr unsigned int NBPCDMIHNMD_TypeDefinitionIndex = 76365;

	class NBPCDMIHNMD : public ::System::Object
	{
	public:
		::CFALFIPEHJH* CFKHNPGEAJA; // 0x10
		::DMPMGGKKIBH* LGEGKIKIPOB; // 0x18
		::ABDOMMLHNBC* OJAHLJGABMJ; // 0x20
		::RPG::Client::ParkourGame::MonoParkourProjectile* BLDLELNJDML; // 0x28
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x30
		::System::Boolean OBFFJKADAEC; // 0x38
		::System::Byte _padding0[0x3];
		::System::Single CDEPHIFHNLF; // 0x3C
		// static const ::System::Object BGJCHIHALMO; // 0x0
		// static const ::System::Object MJMLIDGEOFC; // 0x0
		::System::Void _ctor(::DMPMGGKKIBH* a1, ::CFALFIPEHJH* a2, ::ABDOMMLHNBC* a3, ::RPG::Client::ParkourGame::ParkourSkillConfig_Fire* a4)
		{
			return ((::System::Void(*)(::PVOID, ::DMPMGGKKIBH*, ::CFALFIPEHJH*, ::ABDOMMLHNBC*, ::RPG::Client::ParkourGame::ParkourSkillConfig_Fire*))((::PBYTE)hIl2Cpp + NBPCDMIHNMD_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Transform* LHOFDLKIFBF()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPCDMIHNMD_LHOFDLKIFBF_OFFSET))(this);
		}

		::UnityEngine::Transform* BNHMIJFHNOF()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPCDMIHNMD_BNHMIJFHNOF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPCDMIHNMD_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBPCDMIHNMD_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void BCGPEDOOABL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPCDMIHNMD_BCGPEDOOABL_OFFSET))(this);
		}

		::System::Void BLDBGMJHGCG(::CFALFIPEHJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFALFIPEHJH*))((::PBYTE)hIl2Cpp + NBPCDMIHNMD_BLDBGMJHGCG_OFFSET))(this, a1);
		}

		::System::Void EFPNBPCLCHI(::BIIJADGFFLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIIJADGFFLF*))((::PBYTE)hIl2Cpp + NBPCDMIHNMD_EFPNBPCLCHI_OFFSET))(this, a1);
		}

		::RPG::Client::ParkourGame::MonoParkourProjectile* FMHKLHAKMKO()
		{
			return ((::RPG::Client::ParkourGame::MonoParkourProjectile*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPCDMIHNMD_FMHKLHAKMKO_OFFSET))(this);
		}

		::System::Boolean DKICLKAAIMN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBPCDMIHNMD_DKICLKAAIMN_OFFSET))(this);
		}

	};
