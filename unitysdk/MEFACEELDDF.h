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

#define MEFACEELDDF_ANKADKLNNAO_OFFSET UNITYSDK_OFFSET(0xB8B7BE0)
#define MEFACEELDDF_BBEBPJCEDEP_OFFSET UNITYSDK_OFFSET(0xB8B7FF0)
#define MEFACEELDDF_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0xB8B9700)
#define MEFACEELDDF_CGEEMKANCCJ_OFFSET UNITYSDK_OFFSET(0xB8B88D0)
#define MEFACEELDDF_CTOR_OFFSET UNITYSDK_OFFSET(0xB8B9770)
#define MEFACEELDDF_DDLLNIBEJFF_OFFSET UNITYSDK_OFFSET(0xB8B9660)
#define MEFACEELDDF_DMBCEAJEMFC_OFFSET UNITYSDK_OFFSET(0xB8B7F60)
#define MEFACEELDDF_FCCFPOCOLCI_OFFSET UNITYSDK_OFFSET(0xB8B8300)
#define MEFACEELDDF_FHONGFEFJDE_OFFSET UNITYSDK_OFFSET(0xB8B7FA0)
#define MEFACEELDDF_GIHMOLLDJPA_OFFSET UNITYSDK_OFFSET(0xB8B8F10)
#define MEFACEELDDF_GNEGEBPBLIP_OFFSET UNITYSDK_OFFSET(0xB8B9480)
#define MEFACEELDDF_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB8B8210)
#define MEFACEELDDF_HEDLLOGNFBF_OFFSET UNITYSDK_OFFSET(0xB8B9670)
#define MEFACEELDDF_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0xB8B9680)
#define MEFACEELDDF_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0xB8B8790)
#define MEFACEELDDF_JDKCDJNJAOL_OFFSET UNITYSDK_OFFSET(0xB8B9580)
#define MEFACEELDDF_KLDHNACIJGE_OFFSET UNITYSDK_OFFSET(0xB8B8940)
#define MEFACEELDDF_MGJCOFDPIPA_OFFSET UNITYSDK_OFFSET(0xB8B8BD0)
#define MEFACEELDDF_NBBBEGDGPJP_OFFSET UNITYSDK_OFFSET(0xB8B9260)
#define MEFACEELDDF_NEEGKNENPLP_OFFSET UNITYSDK_OFFSET(0xB8B9510)
#define MEFACEELDDF_OOGPEFAAJIH_OFFSET UNITYSDK_OFFSET(0xB8B84B0)

inline static constexpr unsigned int MEFACEELDDF_TypeDefinitionIndex = 61043;

	class MEFACEELDDF : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleAreaRow* IFGCNGPPCEI; // 0x10
		::RPG::GameCore::BattleAreaReferenceInfo* OFJKNFEJNIK; // 0x18
		::RPG::Client::EnvironmentSystem* NLKKPKJEAOO; // 0x20
		::RPG::Client::Map* APBKPGMCPLI; // 0x28
		::System::Action* CIFOILLJFNF; // 0x30
		::PKLOMDCOKOC* ANKPMFPDDMA; // 0x38
		::System::Boolean MFJMCMFPPCG; // 0x40
		::System::Boolean MBOPNIGKKNE; // 0x41
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
