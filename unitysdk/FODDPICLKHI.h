#pragma once
#include "unitysdk/unitysdk.h"
class FODDPICLKHI;
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceTopRankedCatSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FODDPICLKHI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C625B10)
#define FODDPICLKHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C625BB0)
#define FODDPICLKHI_IMBNGHDBDLJ_OFFSET UNITYSDK_OFFSET(0x1C625BE0)

	class FODDPICLKHI
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::CakeRaceTopRankedCatSelectorConfig* a2, ::PBGNKMMDBGD* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceTopRankedCatSelectorConfig*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + FODDPICLKHI_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::FODDPICLKHI* BPLPBPMEODA(::System::Int32 a1, ::RPG::GameCore::CakeRaceTopRankedCatSelectorConfig* a2, ::PBGNKMMDBGD* a3, ::System::Int32 a4)
		{
			return ((::FODDPICLKHI*(*)(::System::Int32, ::RPG::GameCore::CakeRaceTopRankedCatSelectorConfig*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + FODDPICLKHI_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>* IMBNGHDBDLJ()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FODDPICLKHI_IMBNGHDBDLJ_OFFSET))(this);
		}

	};
