#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelEntitiesFilterSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NCMJPMNKHGI_CHAKABNICEL_OFFSET UNITYSDK_OFFSET(0xBB10800)
#define NCMJPMNKHGI_CTOR_OFFSET UNITYSDK_OFFSET(0xBB10A30)
#define NCMJPMNKHGI_FEOIFJONLCH_OFFSET UNITYSDK_OFFSET(0xBB108C0)

inline static constexpr unsigned int NCMJPMNKHGI_TypeDefinitionIndex = 77522;

	class NCMJPMNKHGI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCMJPMNKHGI_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* CHAKABNICEL(::HAJDFCHFBGN* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID, ::HAJDFCHFBGN*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + NCMJPMNKHGI_CHAKABNICEL_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* FEOIFJONLCH(::HAJDFCHFBGN* a1, ::RPG::GameCore::ChimeraDuelEntitiesFilterSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID, ::HAJDFCHFBGN*, ::RPG::GameCore::ChimeraDuelEntitiesFilterSelectorConfig*))((::PBYTE)hIl2Cpp + NCMJPMNKHGI_FEOIFJONLCH_OFFSET))(this, a1, a2);
		}

	};
