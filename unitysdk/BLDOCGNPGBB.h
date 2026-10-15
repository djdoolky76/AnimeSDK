#pragma once
#include "unitysdk/unitysdk.h"
class BLDOCGNPGBB;
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceBaseTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define BLDOCGNPGBB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C591A30)
#define BLDOCGNPGBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C591AD0)
#define BLDOCGNPGBB_IMBNGHDBDLJ_OFFSET UNITYSDK_OFFSET(0x1C591B00)

inline static constexpr unsigned int BLDOCGNPGBB_TypeDefinitionIndex = 37432;

	class BLDOCGNPGBB
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig* a2, ::PBGNKMMDBGD* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + BLDOCGNPGBB_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::BLDOCGNPGBB* BPLPBPMEODA(::System::Int32 a1, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig* a2, ::PBGNKMMDBGD* a3, ::System::Int32 a4)
		{
			return ((::BLDOCGNPGBB*(*)(::System::Int32, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + BLDOCGNPGBB_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>* IMBNGHDBDLJ()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDOCGNPGBB_IMBNGHDBDLJ_OFFSET))(this);
		}

	};
