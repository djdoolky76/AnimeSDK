#pragma once
#include "unitysdk/unitysdk.h"
class IFBFJDCECML;
class NBHILJMHPDP;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceOtherTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define NBHILJMHPDP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C7573B0)
#define NBHILJMHPDP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C757450)
#define NBHILJMHPDP_IMBNGHDBDLJ_OFFSET UNITYSDK_OFFSET(0x1C757480)

inline static constexpr unsigned int NBHILJMHPDP_TypeDefinitionIndex = 37426;

	class NBHILJMHPDP
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::CakeRaceOtherTargetSelectorConfig* a2, ::PBGNKMMDBGD* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceOtherTargetSelectorConfig*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + NBHILJMHPDP_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::NBHILJMHPDP* BPLPBPMEODA(::System::Int32 a1, ::RPG::GameCore::CakeRaceOtherTargetSelectorConfig* a2, ::PBGNKMMDBGD* a3, ::System::Int32 a4)
		{
			return ((::NBHILJMHPDP*(*)(::System::Int32, ::RPG::GameCore::CakeRaceOtherTargetSelectorConfig*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + NBHILJMHPDP_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>* IMBNGHDBDLJ()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBHILJMHPDP_IMBNGHDBDLJ_OFFSET))(this);
		}

	};
