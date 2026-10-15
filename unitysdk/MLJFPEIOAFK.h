#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PLGBFIJIACG.h"
class AEBNFFKMPGL;
class DBPGGIEJLFF;
namespace RPG::GameCore { class FiveDimTrampolineConfig; }

#define MLJFPEIOAFK_CJAELDLDKHL_OFFSET UNITYSDK_OFFSET(0x1C8FE990)
#define MLJFPEIOAFK_DEIFMDIECNI_OFFSET UNITYSDK_OFFSET(0x1C8FE710)
#define MLJFPEIOAFK_FIEOKKHONAN_OFFSET UNITYSDK_OFFSET(0x1C8FEAA0)
#define MLJFPEIOAFK_IENJBPDMNHG_OFFSET UNITYSDK_OFFSET(0x1C8FE620)
#define MLJFPEIOAFK_OLHPPEFKFHA_OFFSET UNITYSDK_OFFSET(0x1C8FE880)

inline static constexpr unsigned int MLJFPEIOAFK_TypeDefinitionIndex = 42753;

	class MLJFPEIOAFK : public ::System::Object
	{
	public:
		static ::DBPGGIEJLFF* IENJBPDMNHG(::AEBNFFKMPGL* a1)
		{
			return ((::DBPGGIEJLFF*(*)(::AEBNFFKMPGL*))((::PBYTE)hIl2Cpp + MLJFPEIOAFK_IENJBPDMNHG_OFFSET))(a1);
		}

		static ::System::Boolean DEIFMDIECNI(::AEBNFFKMPGL* a1)
		{
			return ((::System::Boolean(*)(::AEBNFFKMPGL*))((::PBYTE)hIl2Cpp + MLJFPEIOAFK_DEIFMDIECNI_OFFSET))(a1);
		}

		static ::System::Void OLHPPEFKFHA(::AEBNFFKMPGL* a1, ::RPG::GameCore::FiveDimTrampolineConfig* a2, ::PLGBFIJIACG a3)
		{
			return ((::System::Void(*)(::AEBNFFKMPGL*, ::RPG::GameCore::FiveDimTrampolineConfig*, ::PLGBFIJIACG))((::PBYTE)hIl2Cpp + MLJFPEIOAFK_OLHPPEFKFHA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CJAELDLDKHL(::AEBNFFKMPGL* a1, ::RPG::GameCore::FiveDimTrampolineConfig* a2, ::PLGBFIJIACG a3)
		{
			return ((::System::Void(*)(::AEBNFFKMPGL*, ::RPG::GameCore::FiveDimTrampolineConfig*, ::PLGBFIJIACG))((::PBYTE)hIl2Cpp + MLJFPEIOAFK_CJAELDLDKHL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FIEOKKHONAN(::AEBNFFKMPGL* a1)
		{
			return ((::System::Void(*)(::AEBNFFKMPGL*))((::PBYTE)hIl2Cpp + MLJFPEIOAFK_FIEOKKHONAN_OFFSET))(a1);
		}

	};
