#pragma once
#include "unitysdk/unitysdk.h"
class EHGHPPLCOMG;
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceCircleTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define EHGHPPLCOMG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C5C7F70)
#define EHGHPPLCOMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D0EA0)
#define EHGHPPLCOMG_IMBNGHDBDLJ_OFFSET UNITYSDK_OFFSET(0x1C5D0ED0)

inline static constexpr unsigned int EHGHPPLCOMG_TypeDefinitionIndex = 37423;

	class EHGHPPLCOMG
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::CakeRaceCircleTargetSelectorConfig* a2, ::PBGNKMMDBGD* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceCircleTargetSelectorConfig*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + EHGHPPLCOMG_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::EHGHPPLCOMG* BPLPBPMEODA(::System::Int32 a1, ::RPG::GameCore::CakeRaceCircleTargetSelectorConfig* a2, ::PBGNKMMDBGD* a3, ::System::Int32 a4)
		{
			return ((::EHGHPPLCOMG*(*)(::System::Int32, ::RPG::GameCore::CakeRaceCircleTargetSelectorConfig*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + EHGHPPLCOMG_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>* IMBNGHDBDLJ()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGHPPLCOMG_IMBNGHDBDLJ_OFFSET))(this);
		}

	};
