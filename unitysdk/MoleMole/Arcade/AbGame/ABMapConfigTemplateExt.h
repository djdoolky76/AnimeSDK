#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOKPBJEEMPM.h"
#include "unitysdk/HexagonalLib/Coordinates/Offset.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/ABMapConfigTemplate.h"
#include "unitysdk/NKDIAGHHIME.h"

class FHDMPOPFGMD;
class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_ARCADE_ABGAME_ABMAPCONFIGTEMPLATEEXT_MOLEMOLE_ARCADE_ABGAME_ABMAPCONFIGTEMPLATEINTERFACE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1E72F140)
#define MOLEMOLE_ARCADE_ABGAME_ABMAPCONFIGTEMPLATEEXT_ONCHECKANDBUILDCONFIGSTRUCTURE_OFFSET UNITYSDK_OFFSET(0x1E72EB70)
#define MOLEMOLE_ARCADE_ABGAME_ABMAPCONFIGTEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E72E8B0)

namespace MoleMole::Arcade::AbGame
{
	inline static constexpr unsigned int ABMapConfigTemplateExt_TypeDefinitionIndex = 93378;

	class ABMapConfigTemplateExt : public ::MoleMole::FlatBuffers::Config::ABMapConfigTemplate
	{
	public:
		::System::Collections::Generic::Dictionary_2<::HexagonalLib::Coordinates::Offset, ::HOKPBJEEMPM>* Deploy2PCellsDescDict; // 0x48
		::System::Collections::Generic::Dictionary_2<::HexagonalLib::Coordinates::Offset, ::HOKPBJEEMPM>* CellsDescDict; // 0x50
		::System::Collections::Generic::Dictionary_2<::HexagonalLib::Coordinates::Offset, ::HOKPBJEEMPM>* Deploy1PCellsDescDict; // 0x58
		::System::Collections::Generic::Dictionary_2<::HexagonalLib::Coordinates::Offset, ::HOKPBJEEMPM>* NeutralCellsDescDict; // 0x60

		::System::Void _ctor(::NKDIAGHHIME data, ::KGBFLHNJHHN* notify)
		{
			return ((::System::Void(*)(::PVOID, ::NKDIAGHHIME, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_ABGAME_ABMAPCONFIGTEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}

		::System::Boolean OnCheckAndBuildConfigStructure(::FHDMPOPFGMD* configMap)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHDMPOPFGMD*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_ABGAME_ABMAPCONFIGTEMPLATEEXT_ONCHECKANDBUILDCONFIGSTRUCTURE_OFFSET))(this, configMap);
		}

		::System::Int32 MoleMole_Arcade_AbGame_ABMapConfigTemplateInterface_get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_ABGAME_ABMAPCONFIGTEMPLATEEXT_MOLEMOLE_ARCADE_ABGAME_ABMAPCONFIGTEMPLATEINTERFACE_GET_ID_OFFSET))(this);
		}
	};
}
