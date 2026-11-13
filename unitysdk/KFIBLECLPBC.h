#pragma once
#include "unitysdk/unitysdk.h"
class IFBFJDCECML;
class KFIBLECLPBC;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceCoreRectTrapSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define KFIBLECLPBC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1ABF02B0)
#define KFIBLECLPBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1ABF0350)
#define KFIBLECLPBC_IMBNGHDBDLJ_OFFSET UNITYSDK_OFFSET(0x1ABF0380)

inline static constexpr unsigned int KFIBLECLPBC_TypeDefinitionIndex = 38355;

	class KFIBLECLPBC
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::CakeRaceCoreRectTrapSelectorConfig* a2, ::PBGNKMMDBGD* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceCoreRectTrapSelectorConfig*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + KFIBLECLPBC_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::KFIBLECLPBC* BPLPBPMEODA(::System::Int32 a1, ::RPG::GameCore::CakeRaceCoreRectTrapSelectorConfig* a2, ::PBGNKMMDBGD* a3, ::System::Int32 a4)
		{
			return ((::KFIBLECLPBC*(*)(::System::Int32, ::RPG::GameCore::CakeRaceCoreRectTrapSelectorConfig*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + KFIBLECLPBC_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>* IMBNGHDBDLJ()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIBLECLPBC_IMBNGHDBDLJ_OFFSET))(this);
		}

	};
