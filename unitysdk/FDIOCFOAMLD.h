#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class FDIOCFOAMLD;
class FHNIMGBMPLN;
class HEACNLOGGPH;
class HKENHAIMOCH;
class JEHPCNCCGFE;
namespace RPG::Client { class FloorSavedData; }
namespace RPG::Client { class MapAnchorDef; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::GameCore { class EraFlipperConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LevelNavmapConfig; }
namespace RPG::GameCore { class LevelValidNavmapSubmapConfig; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FDIOCFOAMLD_ABLBINAOHJI_OFFSET UNITYSDK_OFFSET(0x156D0A90)
#define FDIOCFOAMLD_BDGEEMIMPHD_OFFSET UNITYSDK_OFFSET(0x156D0910)
#define FDIOCFOAMLD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x156D00B0)
#define FDIOCFOAMLD_CCNCNCMIEIH_OFFSET UNITYSDK_OFFSET(0x156D0270)
#define FDIOCFOAMLD_CGOBADHDAGF_OFFSET UNITYSDK_OFFSET(0x156D0990)
#define FDIOCFOAMLD_CTOR_OFFSET UNITYSDK_OFFSET(0x156D0160)
#define FDIOCFOAMLD_DJPCCCCBFKC_OFFSET UNITYSDK_OFFSET(0x156D0E20)
#define FDIOCFOAMLD_EGDMENEEIIN_OFFSET UNITYSDK_OFFSET(0x156D1480)
#define FDIOCFOAMLD_ELILFNOAIGE_OFFSET UNITYSDK_OFFSET(0x156D03F0)
#define FDIOCFOAMLD_FKNJAMCOFPO_OFFSET UNITYSDK_OFFSET(0x156D0D60)
#define FDIOCFOAMLD_GEHANOBIKHI_OFFSET UNITYSDK_OFFSET(0x156D0850)
#define FDIOCFOAMLD_GPHOBHMODLM_OFFSET UNITYSDK_OFFSET(0x156D09F0)
#define FDIOCFOAMLD_HBBBDIDMCAA_OFFSET UNITYSDK_OFFSET(0x156D0B20)
#define FDIOCFOAMLD_IFIOAIINEGO_OFFSET UNITYSDK_OFFSET(0x156D12F0)
#define FDIOCFOAMLD_IINKHPOJOGP_OFFSET UNITYSDK_OFFSET(0x156D02D0)
#define FDIOCFOAMLD_IPGACGBMDAA_OFFSET UNITYSDK_OFFSET(0x156D0350)
#define FDIOCFOAMLD_JCNIHCGPEDB_OFFSET UNITYSDK_OFFSET(0x156D0630)
#define FDIOCFOAMLD_JFIFHCOPBHF_OFFSET UNITYSDK_OFFSET(0x156D0690)
#define FDIOCFOAMLD_JGHGGOINFDM_OFFSET UNITYSDK_OFFSET(0x156D0BD0)
#define FDIOCFOAMLD_KAKPOLDCOHB_OFFSET UNITYSDK_OFFSET(0x156D07D0)
#define FDIOCFOAMLD_KFAEJEJHBPL_OFFSET UNITYSDK_OFFSET(0x156D14E0)
#define FDIOCFOAMLD_LACPPGAPIEN_OFFSET UNITYSDK_OFFSET(0x156D01E0)
#define FDIOCFOAMLD_LGFIKNNKDFH_OFFSET UNITYSDK_OFFSET(0x156D0E80)
#define FDIOCFOAMLD_LGOIHLBBLBK_1_OFFSET UNITYSDK_OFFSET(0x156D1170)
#define FDIOCFOAMLD_LGOIHLBBLBK_OFFSET UNITYSDK_OFFSET(0x156D0FF0)
#define FDIOCFOAMLD_MAKFBIJMJPB_OFFSET UNITYSDK_OFFSET(0x156D0720)
#define FDIOCFOAMLD_NPAOAEGHIED_OFFSET UNITYSDK_OFFSET(0x156D1370)
#define FDIOCFOAMLD_OEMOMCOGDID_OFFSET UNITYSDK_OFFSET(0x156D0EE0)
#define FDIOCFOAMLD_OPGJGJCNPPN_OFFSET UNITYSDK_OFFSET(0x156D0D20)
#define FDIOCFOAMLD_PANDNKHCBDF_OFFSET UNITYSDK_OFFSET(0x156D08B0)
#define FDIOCFOAMLD_PCOINPOKPNK_OFFSET UNITYSDK_OFFSET(0x156D0F60)

inline static constexpr unsigned int FDIOCFOAMLD_TypeDefinitionIndex = 74615;

	class FDIOCFOAMLD : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>* AFMLPKBINBC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_CTOR_OFFSET))(this);
		}

		static ::FDIOCFOAMLD* BPLPBPMEODA()
		{
			return ((::FDIOCFOAMLD*(*)())((::PBYTE)hIl2Cpp + FDIOCFOAMLD_BPLPBPMEODA_OFFSET))();
		}

		::System::Void LACPPGAPIEN(::HEACNLOGGPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEACNLOGGPH*))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_LACPPGAPIEN_OFFSET))(this, a1);
		}

		::System::Void IINKHPOJOGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_IINKHPOJOGP_OFFSET))(this);
		}

		::System::Void CCNCNCMIEIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_CCNCNCMIEIH_OFFSET))(this);
		}

		::System::Void ELILFNOAIGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_ELILFNOAIGE_OFFSET))(this);
		}

		::System::UInt32 JCNIHCGPEDB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_JCNIHCGPEDB_OFFSET))(this);
		}

		::System::String* JFIFHCOPBHF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_JFIFHCOPBHF_OFFSET))(this);
		}

		::System::Int32 MAKFBIJMJPB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_MAKFBIJMJPB_OFFSET))(this);
		}

		::RPG::GameCore::LevelNavmapConfig* KAKPOLDCOHB()
		{
			return ((::RPG::GameCore::LevelNavmapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_KAKPOLDCOHB_OFFSET))(this);
		}

		::HKENHAIMOCH* GEHANOBIKHI()
		{
			return ((::HKENHAIMOCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_GEHANOBIKHI_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* PANDNKHCBDF()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_PANDNKHCBDF_OFFSET))(this);
		}

		::FHNIMGBMPLN* BDGEEMIMPHD()
		{
			return ((::FHNIMGBMPLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_BDGEEMIMPHD_OFFSET))(this);
		}

		::RPG::Client::MapAnchorDef* CGOBADHDAGF()
		{
			return ((::RPG::Client::MapAnchorDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_CGOBADHDAGF_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* GPHOBHMODLM()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_GPHOBHMODLM_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::RPG::Client::MapEntityDef*>* ABLBINAOHJI()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_ABLBINAOHJI_OFFSET))(this);
		}

		::System::Boolean HBBBDIDMCAA(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::MapEntityDef* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_HBBBDIDMCAA_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>* JGHGGOINFDM(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_JGHGGOINFDM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>* OPGJGJCNPPN()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_OPGJGJCNPPN_OFFSET))(this);
		}

		::RPG::GameCore::RuntimeGroupInfo* FKNJAMCOFPO(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_FKNJAMCOFPO_OFFSET))(this, a1);
		}

		::RPG::Client::FloorSavedData* DJPCCCCBFKC()
		{
			return ((::RPG::Client::FloorSavedData*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_DJPCCCCBFKC_OFFSET))(this);
		}

		::JEHPCNCCGFE* LGFIKNNKDFH()
		{
			return ((::JEHPCNCCGFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_LGFIKNNKDFH_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelValidNavmapSubmapConfig*>* OEMOMCOGDID()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelValidNavmapSubmapConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_OEMOMCOGDID_OFFSET))(this);
		}

		::RPG::GameCore::HoyoTagContainer* PCOINPOKPNK()
		{
			return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_PCOINPOKPNK_OFFSET))(this);
		}

		::System::Boolean LGOIHLBBLBK(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_LGOIHLBBLBK_OFFSET))(this, a1);
		}

		::System::Boolean LGOIHLBBLBK_1(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_LGOIHLBBLBK_1_OFFSET))(this, a1);
		}

		::System::Boolean IFIOAIINEGO(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_IFIOAIINEGO_OFFSET))(this, a1, a2);
		}

		::System::Boolean NPAOAEGHIED(::System::UInt32 a1, ::System::String* a2, ::System::Int16 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_NPAOAEGHIED_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::MapRotationInfo* EGDMENEEIIN()
		{
			return ((::RPG::Client::MapRotationInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_EGDMENEEIIN_OFFSET))(this);
		}

		::RPG::GameCore::EraFlipperConfig* KFAEJEJHBPL()
		{
			return ((::RPG::GameCore::EraFlipperConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_KFAEJEJHBPL_OFFSET))(this);
		}

		::RPG::Client::MapDef* IPGACGBMDAA()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDIOCFOAMLD_IPGACGBMDAA_OFFSET))(this);
		}

	};
