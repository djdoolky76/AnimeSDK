#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAFEFNFCABA.h"
#include "unitysdk/MoleMole/Config/RuntimePolygonBound.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FKNIEPCILLG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x6E9660)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x6E9580)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x6E94F0)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x6E96C0)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_IOFGLHBALKK_OFFSET UNITYSDK_OFFSET(0x6E95E0)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_LOLGNKGCGDI_OFFSET UNITYSDK_OFFSET(0x6E9640)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x6E9610)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneConfigRuntimeDataArea_TypeDefinitionIndex = 66755;

	struct alignas(8) SceneConfigRuntimeDataArea
	{
		::System::Int32 priority; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* SceneNameId; // 0x18
		::IAFEFNFCABA AreaMode; // 0x20
		::System::Byte _padding1[0x4];
		::System::String* AreaModeTag; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* AreaTagList; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>* areas; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>* areaExcluded; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::Config::RuntimePolygonBound>* battleRegion; // 0x48
		::System::Collections::Generic::List_1<::System::String*>* connectedArea; // 0x50

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean IOFGLHBALKK(::UnityEngine::Vector3 CKPGOKHECCH)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_IOFGLHBALKK_OFFSET))(this, CKPGOKHECCH);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::UnityEngine::Bounds LOLGNKGCGDI()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_LOLGNKGCGDI_OFFSET))(this);
		}

		::System::Boolean FFCPIEDHBDP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_FFCPIEDHBDP_OFFSET))(this);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATAAREA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
