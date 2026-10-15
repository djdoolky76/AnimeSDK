#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EntitySpawnTransitionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JAEIIPPDMMC.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EOABGMGNKGA;
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class Map_MapObjectsUpdateRequest; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define GOBGMGLMOFM_BLJIHALBOIH_OFFSET UNITYSDK_OFFSET(0x15B252F0)
#define GOBGMGLMOFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x15B26D60)
#define GOBGMGLMOFM_CNEPFLJLCCN_OFFSET UNITYSDK_OFFSET(0x15B254B0)
#define GOBGMGLMOFM_CTOR_OFFSET UNITYSDK_OFFSET(0x15B26D50)
#define GOBGMGLMOFM_FFLJKJICJEB_OFFSET UNITYSDK_OFFSET(0x15B25E80)
#define GOBGMGLMOFM_GLBOEBLBAGE_OFFSET UNITYSDK_OFFSET(0x15B240B0)
#define GOBGMGLMOFM_HJOHCCANODK_OFFSET UNITYSDK_OFFSET(0x15B23F70)
#define GOBGMGLMOFM_JOJPOLJLKLK_OFFSET UNITYSDK_OFFSET(0x15B26A20)
#define GOBGMGLMOFM_KIMEIHNAIDP_1_OFFSET UNITYSDK_OFFSET(0x15B25BD0)
#define GOBGMGLMOFM_KIMEIHNAIDP_OFFSET UNITYSDK_OFFSET(0x15B245A0)
#define GOBGMGLMOFM_LFCKCBKOMFG_OFFSET UNITYSDK_OFFSET(0x15B25200)

inline static constexpr unsigned int GOBGMGLMOFM_TypeDefinitionIndex = 62208;

	class GOBGMGLMOFM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_GOBMBFMJPOL()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)UnitySDK::FromName("", "GOBGMGLMOFM")->GetStaticField(0x6CBB0);
		}

		static ::System::Boolean* StaticGet_NLFPPBJICAF()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GOBGMGLMOFM")->GetStaticField(0x150C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBGMGLMOFM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOBGMGLMOFM_CCTOR_OFFSET))();
		}

		static ::System::Boolean HJOHCCANODK(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GOBGMGLMOFM_HJOHCCANODK_OFFSET))(a1);
		}

		static ::System::Boolean GLBOEBLBAGE()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GOBGMGLMOFM_GLBOEBLBAGE_OFFSET))();
		}

		static ::System::Boolean KIMEIHNAIDP(::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*, ::System::Object*))((::PBYTE)hIl2Cpp + GOBGMGLMOFM_KIMEIHNAIDP_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean KIMEIHNAIDP_1(::JAEIIPPDMMC a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::JAEIIPPDMMC, ::System::Object*))((::PBYTE)hIl2Cpp + GOBGMGLMOFM_KIMEIHNAIDP_1_OFFSET))(a1, a2);
		}

		static ::System::Void FFLJKJICJEB(::RPG::Client::Map_MapObjectsUpdateRequest* a1, ::System::Collections::Generic::Dictionary_2<::RPG::Client::MapEntityDef*, ::RPG::Client::EntitySpawnTransitionType>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::Client::Map_MapObjectsUpdateRequest*, ::System::Collections::Generic::Dictionary_2<::RPG::Client::MapEntityDef*, ::RPG::Client::EntitySpawnTransitionType>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GOBGMGLMOFM_FFLJKJICJEB_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::EntitySpawnTransitionType BLJIHALBOIH(::RPG::Client::MapEntityDef* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::RPG::Client::EntitySpawnTransitionType(*)(::RPG::Client::MapEntityDef*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GOBGMGLMOFM_BLJIHALBOIH_OFFSET))(a1, a2);
		}

		static ::RPG::Client::EntitySpawnTransitionType CNEPFLJLCCN(::RPG::Client::MapEntityDef* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::RPG::Client::EntitySpawnTransitionType(*)(::RPG::Client::MapEntityDef*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GOBGMGLMOFM_CNEPFLJLCCN_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 LFCKCBKOMFG()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + GOBGMGLMOFM_LFCKCBKOMFG_OFFSET))();
		}

		static ::System::Boolean JOJPOLJLKLK(::EOABGMGNKGA* a1)
		{
			return ((::System::Boolean(*)(::EOABGMGNKGA*))((::PBYTE)hIl2Cpp + GOBGMGLMOFM_JOJPOLJLKLK_OFFSET))(a1);
		}

	};
