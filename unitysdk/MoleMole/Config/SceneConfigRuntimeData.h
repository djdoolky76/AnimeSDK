#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBDAGCMMFPK.h"
#include "unitysdk/FCCJAAKCJMO.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"
#include "unitysdk/MoleMole/Config/RuntimeDynamicObjectSet.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FKNIEPCILLG;
class IHPKKNHNLHF;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class SceneMapLayerRuntimeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_CHAPAIIPKIL_OFFSET UNITYSDK_OFFSET(0x1B93A600)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_EINILFEDCLE_OFFSET UNITYSDK_OFFSET(0x1B939960)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B9390E0)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B938370)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_GET_CURAREANAME_OFFSET UNITYSDK_OFFSET(0x1B9395B0)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_GET_CURRENTAREA_OFFSET UNITYSDK_OFFSET(0x1B9396B0)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_GET_CURRENTBATTLEREGIONINDEX_OFFSET UNITYSDK_OFFSET(0x1B939770)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_GET_TOTALAREACOUNT_OFFSET UNITYSDK_OFFSET(0x1B9397D0)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1B939140)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_JGNANFGDAAK_OFFSET UNITYSDK_OFFSET(0x1B93A420)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_NELHJLEFDDB_OFFSET UNITYSDK_OFFSET(0x1B93A2A0)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1B9383F0)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_PEKPLFGFDJE_OFFSET UNITYSDK_OFFSET(0x1B93A360)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B939860)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneConfigRuntimeData_TypeDefinitionIndex = 72259;

	class SceneConfigRuntimeData : public ::System::Object
	{
	public:
		::System::String* sceneNameId; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::SceneConfigRuntimeDataArea>* sceneAreas; // 0x18
		::System::Collections::Generic::List_1<::IHPKKNHNLHF*>* areaCategoryList; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Config::RuntimeDynamicObjectSet>* dynamicObjectSets; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::Config::SceneMapLayerRuntimeData*>* mapLayers; // 0x30
		::System::Collections::Generic::List_1<::FCCJAAKCJMO>* navMeshLinks; // 0x38
		::System::Collections::Generic::List_1<::DBDAGCMMFPK>* GuideRoutes; // 0x40
		::System::Single _lazyCheck; // 0x48
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EntityType, ::System::Int32>*>* statis; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MonsterFunctionType, ::System::Int32>*>* monstStatis; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::String* get_CurAreaName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_GET_CURAREANAME_OFFSET))(this);
		}

		::MoleMole::Config::SceneConfigRuntimeDataArea get_CurrentArea()
		{
			return ((::MoleMole::Config::SceneConfigRuntimeDataArea(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_GET_CURRENTAREA_OFFSET))(this);
		}

		::System::Int32 get_CurrentBattleRegionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_GET_CURRENTBATTLEREGIONINDEX_OFFSET))(this);
		}

		::System::Int32 get_TotalAreaCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_GET_TOTALAREACOUNT_OFFSET))(this);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Void EINILFEDCLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_EINILFEDCLE_OFFSET))(this);
		}

		::System::Boolean PEKPLFGFDJE(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Boolean BADKJILENJK, ::MoleMole::Config::SceneConfigRuntimeDataArea& NHBPOFMAEJF, ::System::Int32& MGIDAKGJNAG)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::MoleMole::Config::SceneConfigRuntimeDataArea&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_PEKPLFGFDJE_OFFSET))(this, KECKGDFIALJ, BADKJILENJK, NHBPOFMAEJF, MGIDAKGJNAG);
		}

		::System::Void JGNANFGDAAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_JGNANFGDAAK_OFFSET))(this);
		}

		::System::Boolean CHAPAIIPKIL(::System::String* NNDPEENOBEO, ::MoleMole::Config::SceneConfigRuntimeDataArea& GEMCGGINMBE)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Config::SceneConfigRuntimeDataArea&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_CHAPAIIPKIL_OFFSET))(this, NNDPEENOBEO, GEMCGGINMBE);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean NELHJLEFDDB(::UnityEngine::Vector3 NMJBNMNFBOA, ::MoleMole::Config::SceneConfigRuntimeDataArea& NHBPOFMAEJF, ::System::Int32& MGIDAKGJNAG)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Config::SceneConfigRuntimeDataArea&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_NELHJLEFDDB_OFFSET))(this, NMJBNMNFBOA, NHBPOFMAEJF, MGIDAKGJNAG);
		}
	};
}
