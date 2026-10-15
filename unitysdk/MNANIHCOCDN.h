#pragma once
#include "unitysdk/unitysdk.h"
class IFBFJDCECML;
class MNANIHCOCDN;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceNearRowsSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MNANIHCOCDN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C7218C0)
#define MNANIHCOCDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C721960)
#define MNANIHCOCDN_IMBNGHDBDLJ_OFFSET UNITYSDK_OFFSET(0x1C721A10)

inline static constexpr unsigned int MNANIHCOCDN_TypeDefinitionIndex = 37434;

	class MNANIHCOCDN
	{
	public:
		::System::Collections::Generic::List_1<::IFBFJDCECML*>* BIOIJEPMLCG; // 0x28
		::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::CakeRaceNearRowsSelectorConfig* a2, ::PBGNKMMDBGD* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceNearRowsSelectorConfig*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + MNANIHCOCDN_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::MNANIHCOCDN* BPLPBPMEODA(::System::Int32 a1, ::RPG::GameCore::CakeRaceNearRowsSelectorConfig* a2, ::PBGNKMMDBGD* a3, ::System::Int32 a4)
		{
			return ((::MNANIHCOCDN*(*)(::System::Int32, ::RPG::GameCore::CakeRaceNearRowsSelectorConfig*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + MNANIHCOCDN_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>* IMBNGHDBDLJ()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNANIHCOCDN_IMBNGHDBDLJ_OFFSET))(this);
		}

	};
