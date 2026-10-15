#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DJJFECDBGIK;
class FFCGHKGDAJF;
class GIJPBMMNJKO;
namespace RPG::Client { class RuntimeRegionVolume; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class StageVolumeConfigV2; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DJJFECDBGIK_ACJDOFKJHKO_OFFSET UNITYSDK_OFFSET(0xF2373D0)
#define DJJFECDBGIK_AGCAFOCMMMG_OFFSET UNITYSDK_OFFSET(0xF2388E0)
#define DJJFECDBGIK_ANFDMNONEFK_OFFSET UNITYSDK_OFFSET(0xF236B70)
#define DJJFECDBGIK_BJBBBPKGDIF_OFFSET UNITYSDK_OFFSET(0xF2376F0)
#define DJJFECDBGIK_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xF238990)
#define DJJFECDBGIK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xF235F10)
#define DJJFECDBGIK_CALGAPBGDLK_OFFSET UNITYSDK_OFFSET(0xF236F30)
#define DJJFECDBGIK_CTOR_OFFSET UNITYSDK_OFFSET(0xF236040)
#define DJJFECDBGIK_DEIIGFMCGCF_OFFSET UNITYSDK_OFFSET(0xF235ED0)
#define DJJFECDBGIK_FPMOEHJELID_OFFSET UNITYSDK_OFFSET(0xF235DE0)
#define DJJFECDBGIK_GFPHIJLLILO_OFFSET UNITYSDK_OFFSET(0xF238090)
#define DJJFECDBGIK_GOMAIHJHKIA_OFFSET UNITYSDK_OFFSET(0xF237390)
#define DJJFECDBGIK_HKAPFLDFOEG_OFFSET UNITYSDK_OFFSET(0xF237590)
#define DJJFECDBGIK_JBEPBCHCDFE_OFFSET UNITYSDK_OFFSET(0xF237270)
#define DJJFECDBGIK_JIOKPFCFMNB_OFFSET UNITYSDK_OFFSET(0xF2362F0)
#define DJJFECDBGIK_LDBEOOGEFID_OFFSET UNITYSDK_OFFSET(0xF237680)
#define DJJFECDBGIK_LPOGEJNCCKD_OFFSET UNITYSDK_OFFSET(0xF237B20)
#define DJJFECDBGIK_MIKDMMOCGOA_OFFSET UNITYSDK_OFFSET(0xF237050)
#define DJJFECDBGIK_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0xF235E30)
#define DJJFECDBGIK_NGDAILEFKOE_OFFSET UNITYSDK_OFFSET(0xF236A70)
#define DJJFECDBGIK_NIBEAIACAPG_OFFSET UNITYSDK_OFFSET(0xF236E50)
#define DJJFECDBGIK_OJCMKNGFHIH_OFFSET UNITYSDK_OFFSET(0xF236EE0)
#define DJJFECDBGIK_OPAALMIKCIC_OFFSET UNITYSDK_OFFSET(0xF2381F0)
#define DJJFECDBGIK_PEGFMAOBLFH_OFFSET UNITYSDK_OFFSET(0xF236680)
#define DJJFECDBGIK_PEIMLNCLPKJ_OFFSET UNITYSDK_OFFSET(0xF237790)
#define DJJFECDBGIK_PLNCKLJOJME_OFFSET UNITYSDK_OFFSET(0xF235E80)

	class DJJFECDBGIK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RuntimeRegionVolume*>* LJKIOJAJOMN; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* EEEABANGLBD; // 0x18
		::FFCGHKGDAJF* DCOPELFHOLO; // 0x20
		::RPG::GameCore::LevelNavNodeInfo IBBOLGKFEIB; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* LILJPCANBPL; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* BMPKEKHFIEO; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* KEPPJEJPJDA; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* HKNKKPADMHB; // 0x50
		::System::UInt32 FFCJAFFJGNH; // 0x58
		::System::Void _ctor(::FFCGHKGDAJF* a1, ::RPG::GameCore::LevelNavNodeInfo a2)
		{
			return ((::System::Void(*)(::PVOID, ::FFCGHKGDAJF*, ::RPG::GameCore::LevelNavNodeInfo))((::PBYTE)hIl2Cpp + DJJFECDBGIK_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::NavMap::IMapDataSource* FPMOEHJELID()
		{
			return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJFECDBGIK_FPMOEHJELID_OFFSET))(this);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJFECDBGIK_MJGKNFEILLI_OFFSET))(this);
		}

		::System::UInt32 PLNCKLJOJME()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJFECDBGIK_PLNCKLJOJME_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* DEIIGFMCGCF()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJFECDBGIK_DEIIGFMCGCF_OFFSET))(this);
		}

		static ::DJJFECDBGIK* BPLPBPMEODA(::FFCGHKGDAJF* a1, ::RPG::GameCore::LevelNavNodeInfo a2)
		{
			return ((::DJJFECDBGIK*(*)(::FFCGHKGDAJF*, ::RPG::GameCore::LevelNavNodeInfo))((::PBYTE)hIl2Cpp + DJJFECDBGIK_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void JIOKPFCFMNB(::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::StageVolumeConfigV2*>*))((::PBYTE)hIl2Cpp + DJJFECDBGIK_JIOKPFCFMNB_OFFSET))(this, a1);
		}

		::System::Void NGDAILEFKOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJFECDBGIK_NGDAILEFKOE_OFFSET))(this);
		}

		::System::Void NIBEAIACAPG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJJFECDBGIK_NIBEAIACAPG_OFFSET))(this, a1);
		}

		::System::Void ANFDMNONEFK(::UnityEngine::Matrix4x4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + DJJFECDBGIK_ANFDMNONEFK_OFFSET))(this, a1);
		}

		::System::Void OJCMKNGFHIH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJJFECDBGIK_OJCMKNGFHIH_OFFSET))(this, a1);
		}

		::System::Void CALGAPBGDLK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJJFECDBGIK_CALGAPBGDLK_OFFSET))(this, a1);
		}

		::System::Void MIKDMMOCGOA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJJFECDBGIK_MIKDMMOCGOA_OFFSET))(this, a1);
		}

		::System::Void JBEPBCHCDFE(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DJJFECDBGIK_JBEPBCHCDFE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* GOMAIHJHKIA()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJFECDBGIK_GOMAIHJHKIA_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* ACJDOFKJHKO()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJFECDBGIK_ACJDOFKJHKO_OFFSET))(this);
		}

		::System::Boolean HKAPFLDFOEG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJFECDBGIK_HKAPFLDFOEG_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::GIJPBMMNJKO*>* BJBBBPKGDIF()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::GIJPBMMNJKO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJFECDBGIK_BJBBBPKGDIF_OFFSET))(this);
		}

		::System::Void PEGFMAOBLFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJFECDBGIK_PEGFMAOBLFH_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* LDBEOOGEFID()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJFECDBGIK_LDBEOOGEFID_OFFSET))(this);
		}

		::System::Void PEIMLNCLPKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJFECDBGIK_PEIMLNCLPKJ_OFFSET))(this);
		}

		::System::Void LPOGEJNCCKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJFECDBGIK_LPOGEJNCCKD_OFFSET))(this);
		}

		::System::Boolean GFPHIJLLILO(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DJJFECDBGIK_GFPHIJLLILO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::GIJPBMMNJKO*>* OPAALMIKCIC(::UnityEngine::Vector3 a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::GIJPBMMNJKO*>*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DJJFECDBGIK_OPAALMIKCIC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::GIJPBMMNJKO*>* AGCAFOCMMMG(::UnityEngine::Vector3 a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::GIJPBMMNJKO*>*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DJJFECDBGIK_AGCAFOCMMMG_OFFSET))(this, a1);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJJFECDBGIK_BJMNKLGEMPM_OFFSET))(this);
		}

	};
