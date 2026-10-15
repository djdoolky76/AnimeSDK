#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECIIEBFKNMJ;
class HAJDFCHFBGN;
class IACBBGPHHJM;
class KAKADGHNMFK;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelRandomEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FFLGMOLOGLL_CHAKABNICEL_OFFSET UNITYSDK_OFFSET(0x15739CC0)
#define FFLGMOLOGLL_CTOR_OFFSET UNITYSDK_OFFSET(0x15739F10)
#define FFLGMOLOGLL_FEOIFJONLCH_OFFSET UNITYSDK_OFFSET(0x15739D80)
#define FFLGMOLOGLL_OAGDIHGBBOI_OFFSET UNITYSDK_OFFSET(0x15739C60)

inline static constexpr unsigned int FFLGMOLOGLL_TypeDefinitionIndex = 77535;

	class FFLGMOLOGLL : public ::System::Object
	{
	public:
		::IACBBGPHHJM* IHJEMJOGEHG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLGMOLOGLL_CTOR_OFFSET))(this);
		}

		::System::Void OAGDIHGBBOI(::ECIIEBFKNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + FFLGMOLOGLL_OAGDIHGBBOI_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* CHAKABNICEL(::HAJDFCHFBGN* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID, ::HAJDFCHFBGN*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + FFLGMOLOGLL_CHAKABNICEL_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::KAKADGHNMFK*>* FEOIFJONLCH(::HAJDFCHFBGN* a1, ::RPG::GameCore::ChimeraDuelRandomEntitiesSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::List_1<::KAKADGHNMFK*>*(*)(::PVOID, ::HAJDFCHFBGN*, ::RPG::GameCore::ChimeraDuelRandomEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + FFLGMOLOGLL_FEOIFJONLCH_OFFSET))(this, a1, a2);
		}

	};
