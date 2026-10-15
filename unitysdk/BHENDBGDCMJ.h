#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelEventTargetsSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define BHENDBGDCMJ_CHAKABNICEL_OFFSET UNITYSDK_OFFSET(0xB474CF0)
#define BHENDBGDCMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB475230)
#define BHENDBGDCMJ_FEOIFJONLCH_OFFSET UNITYSDK_OFFSET(0xB474DB0)

inline static constexpr unsigned int BHENDBGDCMJ_TypeDefinitionIndex = 77528;

	class BHENDBGDCMJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHENDBGDCMJ_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* CHAKABNICEL(::HAJDFCHFBGN* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID, ::HAJDFCHFBGN*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + BHENDBGDCMJ_CHAKABNICEL_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* FEOIFJONLCH(::HAJDFCHFBGN* a1, ::RPG::GameCore::ChimeraDuelEventTargetsSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID, ::HAJDFCHFBGN*, ::RPG::GameCore::ChimeraDuelEventTargetsSelectorConfig*))((::PBYTE)hIl2Cpp + BHENDBGDCMJ_FEOIFJONLCH_OFFSET))(this, a1, a2);
		}

	};
