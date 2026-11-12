#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"
#include "unitysdk/System/Object.h"
class FJNBODHINDM;
class FNINJACLJOH;
class LNBLMLPMCIK;
class LOKOIPOFAHC;
namespace RPG::Client { class MockAnimator; }

#define ENAAOFHBDIB_CEBCIPIFJGD_OFFSET UNITYSDK_OFFSET(0x164B7350)
#define ENAAOFHBDIB_CIAPFNBDHDK_OFFSET UNITYSDK_OFFSET(0x164B7360)
#define ENAAOFHBDIB_CTOR_OFFSET UNITYSDK_OFFSET(0x164A27A0)
#define ENAAOFHBDIB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164B6EF0)
#define ENAAOFHBDIB_EPMDJMBPFGG_OFFSET UNITYSDK_OFFSET(0x164B7400)
#define ENAAOFHBDIB_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x164B7270)
#define ENAAOFHBDIB_GLDFGABAAMC_OFFSET UNITYSDK_OFFSET(0x164B73F0)
#define ENAAOFHBDIB_HHGNECAGCCA_OFFSET UNITYSDK_OFFSET(0x164B7300)
#define ENAAOFHBDIB_HKGAEDABMKM_OFFSET UNITYSDK_OFFSET(0x164B73B0)
#define ENAAOFHBDIB_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x164B6F30)
#define ENAAOFHBDIB_KINBCDEIBPP_OFFSET UNITYSDK_OFFSET(0x164B73A0)
#define ENAAOFHBDIB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x164B6DD0)
#define ENAAOFHBDIB_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0x164B6EB0)
#define ENAAOFHBDIB_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x164B71D0)
#define ENAAOFHBDIB_MGLCNADCEBG_OFFSET UNITYSDK_OFFSET(0x164B7220)
#define ENAAOFHBDIB_MPHKMLHJDMO_OFFSET UNITYSDK_OFFSET(0x164B7380)
#define ENAAOFHBDIB_NFKJBMBKMKP_OFFSET UNITYSDK_OFFSET(0x164B7050)
#define ENAAOFHBDIB_OBIEBFBMNOC_OFFSET UNITYSDK_OFFSET(0x164B72B0)
#define ENAAOFHBDIB_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0x164B7110)

inline static constexpr unsigned int ENAAOFHBDIB_TypeDefinitionIndex = 55141;

	class ENAAOFHBDIB : public ::System::Object
	{
	public:
		::FJNBODHINDM* GPACEDIFLNG; // 0x10
		::FNINJACLJOH* HKFEMFKOBNI; // 0x18
		::RPG::Client::MockAnimator* CBPLANOPAPP; // 0x20
		::LOKOIPOFAHC* BBFEAIIOKAN; // 0x28
		::RPG::GameCore::FixPoint EPDCPDMAGOD; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAAOFHBDIB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::LOKOIPOFAHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOKOIPOFAHC*))((::PBYTE)hIl2Cpp + ENAAOFHBDIB_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void LHJBPEBMKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAAOFHBDIB_LHJBPEBMKDN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAAOFHBDIB_DISPOSE_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::FNINJACLJOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNINJACLJOH*))((::PBYTE)hIl2Cpp + ENAAOFHBDIB_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void NFKJBMBKMKP(::FNINJACLJOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNINJACLJOH*))((::PBYTE)hIl2Cpp + ENAAOFHBDIB_NFKJBMBKMKP_OFFSET))(this, a1);
		}

		::System::Void OPCKNBHNBOA(::LNBLMLPMCIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNBLMLPMCIK*))((::PBYTE)hIl2Cpp + ENAAOFHBDIB_OPCKNBHNBOA_OFFSET))(this, a1);
		}

		::System::Void LJOLGCNKIEH(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + ENAAOFHBDIB_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Boolean MGLCNADCEBG(::RPG::GameCore::RtCharacterState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RtCharacterState))((::PBYTE)hIl2Cpp + ENAAOFHBDIB_MGLCNADCEBG_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAAOFHBDIB_FFKBFPKEPEN_OFFSET))(this);
		}

		::System::Void OBIEBFBMNOC(::FNINJACLJOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNINJACLJOH*))((::PBYTE)hIl2Cpp + ENAAOFHBDIB_OBIEBFBMNOC_OFFSET))(this, a1);
		}

		::System::Void HHGNECAGCCA(::LNBLMLPMCIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNBLMLPMCIK*))((::PBYTE)hIl2Cpp + ENAAOFHBDIB_HHGNECAGCCA_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint CEBCIPIFJGD()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAAOFHBDIB_CEBCIPIFJGD_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint CIAPFNBDHDK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAAOFHBDIB_CIAPFNBDHDK_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MPHKMLHJDMO()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAAOFHBDIB_MPHKMLHJDMO_OFFSET))(this);
		}

		::RPG::Client::MockAnimator* KINBCDEIBPP()
		{
			return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAAOFHBDIB_KINBCDEIBPP_OFFSET))(this);
		}

		::System::Int32 HKGAEDABMKM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAAOFHBDIB_HKGAEDABMKM_OFFSET))(this);
		}

		::LOKOIPOFAHC* GLDFGABAAMC()
		{
			return ((::LOKOIPOFAHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAAOFHBDIB_GLDFGABAAMC_OFFSET))(this);
		}

		::FJNBODHINDM* EPMDJMBPFGG()
		{
			return ((::FJNBODHINDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAAOFHBDIB_EPMDJMBPFGG_OFFSET))(this);
		}

	};
