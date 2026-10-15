#pragma once
#include "unitysdk/unitysdk.h"
class ECLLAOAHBEB;
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceCatIdListSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define ECLLAOAHBEB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C5C8320)
#define ECLLAOAHBEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5CCC90)
#define ECLLAOAHBEB_IMBNGHDBDLJ_OFFSET UNITYSDK_OFFSET(0x1C5CCCC0)

inline static constexpr unsigned int ECLLAOAHBEB_TypeDefinitionIndex = 37422;

	class ECLLAOAHBEB
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::RPG::GameCore::CakeRaceCatIdListSelectorConfig* a2, ::PBGNKMMDBGD* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceCatIdListSelectorConfig*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + ECLLAOAHBEB_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::ECLLAOAHBEB* BPLPBPMEODA(::System::Int32 a1, ::RPG::GameCore::CakeRaceCatIdListSelectorConfig* a2, ::PBGNKMMDBGD* a3, ::System::Int32 a4)
		{
			return ((::ECLLAOAHBEB*(*)(::System::Int32, ::RPG::GameCore::CakeRaceCatIdListSelectorConfig*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + ECLLAOAHBEB_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>* IMBNGHDBDLJ()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::IFBFJDCECML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLLAOAHBEB_IMBNGHDBDLJ_OFFSET))(this);
		}

	};
