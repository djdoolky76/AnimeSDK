#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RegionSourceProfile.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class APLEMBNFLAA;
class KGDADKNPPOL;
namespace RPG::Client { class RuntimeRegionVolume; }
namespace RPG::GameCore { class StageRegionConnection; }
namespace RPG::GameCore { class StageVolumeConfigV2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define ECJGNBGJJPO_ALABLOMELOA_OFFSET UNITYSDK_OFFSET(0x12D102E0)
#define ECJGNBGJJPO_BIMMMHHHIBI_1_OFFSET UNITYSDK_OFFSET(0x12D0FB20)
#define ECJGNBGJJPO_BIMMMHHHIBI_2_OFFSET UNITYSDK_OFFSET(0x12D0FE70)
#define ECJGNBGJJPO_BIMMMHHHIBI_OFFSET UNITYSDK_OFFSET(0x12D0F8C0)
#define ECJGNBGJJPO_BJOCHKIPFFI_OFFSET UNITYSDK_OFFSET(0x12D101F0)
#define ECJGNBGJJPO_CTOR_OFFSET UNITYSDK_OFFSET(0x12D0E6D0)
#define ECJGNBGJJPO_DAGPJJDFMBM_OFFSET UNITYSDK_OFFSET(0x12D10440)
#define ECJGNBGJJPO_DCGEJDKKMJD_OFFSET UNITYSDK_OFFSET(0x12D10290)
#define ECJGNBGJJPO_DLGNOIEGDGA_OFFSET UNITYSDK_OFFSET(0x12D0F7B0)
#define ECJGNBGJJPO_FBDGGHLDKEE_1_OFFSET UNITYSDK_OFFSET(0x12D0F0E0)
#define ECJGNBGJJPO_FBDGGHLDKEE_2_OFFSET UNITYSDK_OFFSET(0x12D0F430)
#define ECJGNBGJJPO_FBDGGHLDKEE_OFFSET UNITYSDK_OFFSET(0x12D0EF60)
#define ECJGNBGJJPO_FHADCHOMAHP_OFFSET UNITYSDK_OFFSET(0x12D0EE40)
#define ECJGNBGJJPO_GET_TARGETREGION_OFFSET UNITYSDK_OFFSET(0x12D10380)
#define ECJGNBGJJPO_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x12D0ECB0)
#define ECJGNBGJJPO_JDOMOOEIOCP_OFFSET UNITYSDK_OFFSET(0x12D10320)
#define ECJGNBGJJPO_LDKBCLJLCPK_OFFSET UNITYSDK_OFFSET(0x12D103A0)
#define ECJGNBGJJPO_MBKJPIBKGGM_OFFSET UNITYSDK_OFFSET(0x12D0FAC0)
#define ECJGNBGJJPO_OHBBIFDAMMG_OFFSET UNITYSDK_OFFSET(0x12D10400)
#define ECJGNBGJJPO_OMPPPOIDAAB_OFFSET UNITYSDK_OFFSET(0x12D0EC40)
#define ECJGNBGJJPO_SET_TARGETREGION_OFFSET UNITYSDK_OFFSET(0x12D10390)

	class ECJGNBGJJPO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RuntimeRegionVolume*>* BBIMDOMJEMJ; // 0x10
		::UnityEngine::GameObject* KMIKGEFBCHM; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::RuntimeRegionVolume*>* LCFBELGKIJF; // 0x20
		::KGDADKNPPOL* _TargetRegion_k__BackingField; // 0x28
		::KGDADKNPPOL* BLAOBOPHAEA; // 0x30
		::RPG::GameCore::StageRegionConnection* OFKGLJOAMLD; // 0x38
		::System::Void _ctor(::KGDADKNPPOL* a1, ::KGDADKNPPOL* a2, ::RPG::GameCore::StageRegionConnection* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*, ::KGDADKNPPOL*, ::RPG::GameCore::StageRegionConnection*))((::PBYTE)hIl2Cpp + ECJGNBGJJPO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJGNBGJJPO_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void FHADCHOMAHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJGNBGJJPO_FHADCHOMAHP_OFFSET))(this);
		}

		::System::Boolean FBDGGHLDKEE(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ECJGNBGJJPO_FBDGGHLDKEE_OFFSET))(this, a1);
		}

		::System::Boolean FBDGGHLDKEE_1(::APLEMBNFLAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::APLEMBNFLAA*))((::PBYTE)hIl2Cpp + ECJGNBGJJPO_FBDGGHLDKEE_1_OFFSET))(this, a1);
		}

		::System::Boolean FBDGGHLDKEE_2(::APLEMBNFLAA* a1, ::RPG::Client::RegionSourceProfile a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::APLEMBNFLAA*, ::RPG::Client::RegionSourceProfile))((::PBYTE)hIl2Cpp + ECJGNBGJJPO_FBDGGHLDKEE_2_OFFSET))(this, a1, a2);
		}

		::System::Boolean BIMMMHHHIBI(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ECJGNBGJJPO_BIMMMHHHIBI_OFFSET))(this, a1);
		}

		::System::Boolean BIMMMHHHIBI_1(::APLEMBNFLAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::APLEMBNFLAA*))((::PBYTE)hIl2Cpp + ECJGNBGJJPO_BIMMMHHHIBI_1_OFFSET))(this, a1);
		}

		::System::Boolean BIMMMHHHIBI_2(::APLEMBNFLAA* a1, ::RPG::Client::RegionSourceProfile a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::APLEMBNFLAA*, ::RPG::Client::RegionSourceProfile))((::PBYTE)hIl2Cpp + ECJGNBGJJPO_BIMMMHHHIBI_2_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean DLGNOIEGDGA(::APLEMBNFLAA* a1, ::RPG::Client::RegionSourceProfile a2)
		{
			return ((::System::Boolean(*)(::APLEMBNFLAA*, ::RPG::Client::RegionSourceProfile))((::PBYTE)hIl2Cpp + ECJGNBGJJPO_DLGNOIEGDGA_OFFSET))(a1, a2);
		}

		::System::Boolean BJOCHKIPFFI(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ECJGNBGJJPO_BJOCHKIPFFI_OFFSET))(this, a1);
		}

		::System::UInt32 DCGEJDKKMJD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJGNBGJJPO_DCGEJDKKMJD_OFFSET))(this);
		}

		::UnityEngine::GameObject* ALABLOMELOA()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJGNBGJJPO_ALABLOMELOA_OFFSET))(this);
		}

		::System::Boolean JDOMOOEIOCP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJGNBGJJPO_JDOMOOEIOCP_OFFSET))(this);
		}

		::KGDADKNPPOL* get_TargetRegion()
		{
			return ((::KGDADKNPPOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJGNBGJJPO_GET_TARGETREGION_OFFSET))(this);
		}

		::System::Void set_TargetRegion(::KGDADKNPPOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGDADKNPPOL*))((::PBYTE)hIl2Cpp + ECJGNBGJJPO_SET_TARGETREGION_OFFSET))(this, a1);
		}

		::System::Boolean LDKBCLJLCPK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJGNBGJJPO_LDKBCLJLCPK_OFFSET))(this);
		}

		::RPG::GameCore::StageRegionConnection* OHBBIFDAMMG()
		{
			return ((::RPG::GameCore::StageRegionConnection*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJGNBGJJPO_OHBBIFDAMMG_OFFSET))(this);
		}

		::System::Single DAGPJJDFMBM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJGNBGJJPO_DAGPJJDFMBM_OFFSET))(this);
		}

		::System::Single MBKJPIBKGGM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJGNBGJJPO_MBKJPIBKGGM_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>* OMPPPOIDAAB()
		{
			return ((::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJGNBGJJPO_OMPPPOIDAAB_OFFSET))(this);
		}

	};
