#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class PKLOMDCOKOC;
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { class Map; }
namespace RPG::GameCore { class BattleAreaReferenceInfo; }
namespace RPG::GameCore { class BattleAreaRow; }
namespace System { class Action; }

#define MEFACEELDDF_ANKADKLNNAO_OFFSET UNITYSDK_OFFSET(0xB8BDD50)
#define MEFACEELDDF_BBEBPJCEDEP_OFFSET UNITYSDK_OFFSET(0xB8BE160)
#define MEFACEELDDF_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0xB8BF830)
#define MEFACEELDDF_CGEEMKANCCJ_OFFSET UNITYSDK_OFFSET(0xB8BEA10)
#define MEFACEELDDF_CTOR_OFFSET UNITYSDK_OFFSET(0xB8BF8A0)
#define MEFACEELDDF_DDLLNIBEJFF_OFFSET UNITYSDK_OFFSET(0xB8BF790)
#define MEFACEELDDF_DMBCEAJEMFC_OFFSET UNITYSDK_OFFSET(0xB8BE0D0)
#define MEFACEELDDF_FCCFPOCOLCI_OFFSET UNITYSDK_OFFSET(0xB8BE460)
#define MEFACEELDDF_FHONGFEFJDE_OFFSET UNITYSDK_OFFSET(0xB8BE110)
#define MEFACEELDDF_GIHMOLLDJPA_OFFSET UNITYSDK_OFFSET(0xB8BF050)
#define MEFACEELDDF_GNEGEBPBLIP_OFFSET UNITYSDK_OFFSET(0xB8BF5B0)
#define MEFACEELDDF_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB8BE370)
#define MEFACEELDDF_HEDLLOGNFBF_OFFSET UNITYSDK_OFFSET(0xB8BF7A0)
#define MEFACEELDDF_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0xB8BF7B0)
#define MEFACEELDDF_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0xB8BE8D0)
#define MEFACEELDDF_JDKCDJNJAOL_OFFSET UNITYSDK_OFFSET(0xB8BF6B0)
#define MEFACEELDDF_KLDHNACIJGE_OFFSET UNITYSDK_OFFSET(0xB8BEA80)
#define MEFACEELDDF_MGJCOFDPIPA_OFFSET UNITYSDK_OFFSET(0xB8BED10)
#define MEFACEELDDF_NBBBEGDGPJP_OFFSET UNITYSDK_OFFSET(0xB8BF3A0)
#define MEFACEELDDF_NEEGKNENPLP_OFFSET UNITYSDK_OFFSET(0xB8BF640)
#define MEFACEELDDF_OOGPEFAAJIH_OFFSET UNITYSDK_OFFSET(0xB8BE600)

inline static constexpr unsigned int MEFACEELDDF_TypeDefinitionIndex = 61043;

	class MEFACEELDDF : public ::System::Object
	{
	public:
		::RPG::Client::EnvironmentSystem* NLKKPKJEAOO; // 0x10
		::RPG::GameCore::BattleAreaRow* IFGCNGPPCEI; // 0x18
		::RPG::Client::Map* APBKPGMCPLI; // 0x20
		::System::Action* CIFOILLJFNF; // 0x28
		::PKLOMDCOKOC* ANKPMFPDDMA; // 0x30
		::RPG::GameCore::BattleAreaReferenceInfo* OFJKNFEJNIK; // 0x38
		::System::Boolean MBOPNIGKKNE; // 0x40
		::System::Boolean MFJMCMFPPCG; // 0x41
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFACEELDDF_CTOR_OFFSET))(this);
		}

		::System::Void ANKADKLNNAO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MEFACEELDDF_ANKADKLNNAO_OFFSET))(this, a1);
		}

		::System::Void DMBCEAJEMFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFACEELDDF_DMBCEAJEMFC_OFFSET))(this);
		}

		::System::Boolean FHONGFEFJDE(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MEFACEELDDF_FHONGFEFJDE_OFFSET))(this, a1);
		}

		static ::System::Boolean BBEBPJCEDEP(::RPG::Client::Map* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::Map*, ::System::UInt32))((::PBYTE)hIl2Cpp + MEFACEELDDF_BBEBPJCEDEP_OFFSET))(a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFACEELDDF_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void OOGPEFAAJIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFACEELDDF_OOGPEFAAJIH_OFFSET))(this);
		}

		::System::Void HKEPJLDBGIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFACEELDDF_HKEPJLDBGIG_OFFSET))(this);
		}

		::System::Void CGEEMKANCCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFACEELDDF_CGEEMKANCCJ_OFFSET))(this);
		}

		::System::Void FCCFPOCOLCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFACEELDDF_FCCFPOCOLCI_OFFSET))(this);
		}

		::System::Void KLDHNACIJGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFACEELDDF_KLDHNACIJGE_OFFSET))(this);
		}

		::System::Void NBBBEGDGPJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFACEELDDF_NBBBEGDGPJP_OFFSET))(this);
		}

		::System::Void GNEGEBPBLIP(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MEFACEELDDF_GNEGEBPBLIP_OFFSET))(this, a1);
		}

		::System::Void NEEGKNENPLP(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MEFACEELDDF_NEEGKNENPLP_OFFSET))(this, a1);
		}

		::System::Void MGJCOFDPIPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFACEELDDF_MGJCOFDPIPA_OFFSET))(this);
		}

		::System::Void GIHMOLLDJPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFACEELDDF_GIHMOLLDJPA_OFFSET))(this);
		}

		::System::Boolean JDKCDJNJAOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFACEELDDF_JDKCDJNJAOL_OFFSET))(this);
		}

		::RPG::Client::Map* DDLLNIBEJFF()
		{
			return ((::RPG::Client::Map*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFACEELDDF_DDLLNIBEJFF_OFFSET))(this);
		}

		::RPG::GameCore::BattleAreaReferenceInfo* HEDLLOGNFBF()
		{
			return ((::RPG::GameCore::BattleAreaReferenceInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFACEELDDF_HEDLLOGNFBF_OFFSET))(this);
		}

		::UnityEngine::Vector3 HHMFILFAMNA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFACEELDDF_HHMFILFAMNA_OFFSET))(this);
		}

		::UnityEngine::Quaternion CECMCADBMDE()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MEFACEELDDF_CECMCADBMDE_OFFSET))(this);
		}

	};
