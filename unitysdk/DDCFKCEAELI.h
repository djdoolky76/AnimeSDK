#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelEntitiesIntersectionSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DDCFKCEAELI_CHAKABNICEL_OFFSET UNITYSDK_OFFSET(0xEE181A0)
#define DDCFKCEAELI_CTOR_OFFSET UNITYSDK_OFFSET(0xEE18B10)
#define DDCFKCEAELI_FEOIFJONLCH_OFFSET UNITYSDK_OFFSET(0xEE18260)

inline static constexpr unsigned int DDCFKCEAELI_TypeDefinitionIndex = 80260;

	class DDCFKCEAELI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDCFKCEAELI_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* CHAKABNICEL(::HAJDFCHFBGN* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID, ::HAJDFCHFBGN*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + DDCFKCEAELI_CHAKABNICEL_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::KAKADGHNMFK*>* FEOIFJONLCH(::HAJDFCHFBGN* a1, ::RPG::GameCore::ChimeraDuelEntitiesIntersectionSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::List_1<::KAKADGHNMFK*>*(*)(::PVOID, ::HAJDFCHFBGN*, ::RPG::GameCore::ChimeraDuelEntitiesIntersectionSelectorConfig*))((::PBYTE)hIl2Cpp + DDCFKCEAELI_FEOIFJONLCH_OFFSET))(this, a1, a2);
		}

	};
