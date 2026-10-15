#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelEntitiesExclusionSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CGFDLPLMLAL_CHAKABNICEL_OFFSET UNITYSDK_OFFSET(0xCC87FA0)
#define CGFDLPLMLAL_CTOR_OFFSET UNITYSDK_OFFSET(0xCC882F0)
#define CGFDLPLMLAL_FEOIFJONLCH_OFFSET UNITYSDK_OFFSET(0xCC88060)

	class CGFDLPLMLAL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGFDLPLMLAL_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* CHAKABNICEL(::HAJDFCHFBGN* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID, ::HAJDFCHFBGN*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + CGFDLPLMLAL_CHAKABNICEL_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* FEOIFJONLCH(::HAJDFCHFBGN* a1, ::RPG::GameCore::ChimeraDuelEntitiesExclusionSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID, ::HAJDFCHFBGN*, ::RPG::GameCore::ChimeraDuelEntitiesExclusionSelectorConfig*))((::PBYTE)hIl2Cpp + CGFDLPLMLAL_FEOIFJONLCH_OFFSET))(this, a1, a2);
		}

	};
