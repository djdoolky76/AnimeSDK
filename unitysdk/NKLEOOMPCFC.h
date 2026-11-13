#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NKLEOOMPCFC_CHAKABNICEL_OFFSET UNITYSDK_OFFSET(0x1A7B8770)
#define NKLEOOMPCFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7B8830)

inline static constexpr unsigned int NKLEOOMPCFC_TypeDefinitionIndex = 80271;

	class NKLEOOMPCFC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLEOOMPCFC_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* CHAKABNICEL(::HAJDFCHFBGN* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID, ::HAJDFCHFBGN*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + NKLEOOMPCFC_CHAKABNICEL_OFFSET))(this, a1, a2);
		}

	};
