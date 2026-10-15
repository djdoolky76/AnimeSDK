#pragma once
#include "unitysdk/unitysdk.h"
class IFBFJDCECML;
class KBNDMDKNCBC;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceBaseTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define KBNDMDKNCBC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C70B9C0)
#define KBNDMDKNCBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C70BA60)
#define KBNDMDKNCBC_IMBNGHDBDLJ_OFFSET UNITYSDK_OFFSET(0x1C70BA90)

inline static constexpr unsigned int KBNDMDKNCBC_TypeDefinitionIndex = 37425;

	class KBNDMDKNCBC
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig* a2, ::PBGNKMMDBGD* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + KBNDMDKNCBC_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::KBNDMDKNCBC* BPLPBPMEODA(::System::Int32 a1, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig* a2, ::PBGNKMMDBGD* a3, ::System::Int32 a4)
		{
			return ((::KBNDMDKNCBC*(*)(::System::Int32, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + KBNDMDKNCBC_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>* IMBNGHDBDLJ()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNDMDKNCBC_IMBNGHDBDLJ_OFFSET))(this);
		}

	};
