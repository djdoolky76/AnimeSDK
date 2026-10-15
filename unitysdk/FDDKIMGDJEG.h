#pragma once
#include "unitysdk/unitysdk.h"
class FDDKIMGDJEG;
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceBaseTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FDDKIMGDJEG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C5F6530)
#define FDDKIMGDJEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C615660)
#define FDDKIMGDJEG_IMBNGHDBDLJ_OFFSET UNITYSDK_OFFSET(0x1C615690)

inline static constexpr unsigned int FDDKIMGDJEG_TypeDefinitionIndex = 37424;

	class FDDKIMGDJEG
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig* a2, ::PBGNKMMDBGD* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + FDDKIMGDJEG_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::FDDKIMGDJEG* BPLPBPMEODA(::System::Int32 a1, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig* a2, ::PBGNKMMDBGD* a3, ::System::Int32 a4)
		{
			return ((::FDDKIMGDJEG*(*)(::System::Int32, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + FDDKIMGDJEG_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>* IMBNGHDBDLJ()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDKIMGDJEG_IMBNGHDBDLJ_OFFSET))(this);
		}

	};
