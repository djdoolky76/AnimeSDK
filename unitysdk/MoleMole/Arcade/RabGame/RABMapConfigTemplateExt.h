#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HexagonalLib/Coordinates/Offset.h"
#include "unitysdk/MOAHGEJDEBE.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/RABMapConfigTemplate.h"
#include "unitysdk/HGOBJKFDAHJ.h"

class JDNIJFMPOKK;
class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_ARCADE_RABGAME_RABMAPCONFIGTEMPLATEEXT_MOLEMOLE_ARCADE_RABGAME_RABMAPCONFIGTEMPLATEINTERFACE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1DACD200)
#define MOLEMOLE_ARCADE_RABGAME_RABMAPCONFIGTEMPLATEEXT_ONCHECKANDBUILDCONFIGSTRUCTURE_OFFSET UNITYSDK_OFFSET(0x1DACCC30)
#define MOLEMOLE_ARCADE_RABGAME_RABMAPCONFIGTEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DACC970)

namespace MoleMole::Arcade::RabGame
{
	inline static constexpr unsigned int RABMapConfigTemplateExt_TypeDefinitionIndex = 93936;

	class RABMapConfigTemplateExt : public ::MoleMole::FlatBuffers::Config::RABMapConfigTemplate
	{
	public:
		::System::Collections::Generic::Dictionary_2<::HexagonalLib::Coordinates::Offset, ::MOAHGEJDEBE>* Deploy2PCellsDescDict; // 0x48
		::System::Collections::Generic::Dictionary_2<::HexagonalLib::Coordinates::Offset, ::MOAHGEJDEBE>* CellsDescDict; // 0x50
		::System::Collections::Generic::Dictionary_2<::HexagonalLib::Coordinates::Offset, ::MOAHGEJDEBE>* Deploy1PCellsDescDict; // 0x58
		::System::Collections::Generic::Dictionary_2<::HexagonalLib::Coordinates::Offset, ::MOAHGEJDEBE>* NeutralCellsDescDict; // 0x60

		::System::Void _ctor(::HGOBJKFDAHJ data, ::KGBFLHNJHHN* notify)
		{
			return ((::System::Void(*)(::PVOID, ::HGOBJKFDAHJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_RABGAME_RABMAPCONFIGTEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}

		::System::Boolean OnCheckAndBuildConfigStructure(::JDNIJFMPOKK* configMap)
		{
			return ((::System::Boolean(*)(::PVOID, ::JDNIJFMPOKK*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_RABGAME_RABMAPCONFIGTEMPLATEEXT_ONCHECKANDBUILDCONFIGSTRUCTURE_OFFSET))(this, configMap);
		}

		::System::Int32 MoleMole_Arcade_RabGame_RABMapConfigTemplateInterface_get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_RABGAME_RABMAPCONFIGTEMPLATEEXT_MOLEMOLE_ARCADE_RABGAME_RABMAPCONFIGTEMPLATEINTERFACE_GET_ID_OFFSET))(this);
		}
	};
}
