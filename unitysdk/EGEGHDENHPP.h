#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace RPG::GameCore { class ChimeraDuelGroupEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define EGEGHDENHPP_CHAKABNICEL_OFFSET UNITYSDK_OFFSET(0x13A67390)
#define EGEGHDENHPP_CTOR_OFFSET UNITYSDK_OFFSET(0x14506860)
#define EGEGHDENHPP_FEOIFJONLCH_OFFSET UNITYSDK_OFFSET(0x145067A0)

inline static constexpr unsigned int EGEGHDENHPP_TypeDefinitionIndex = 77505;

	class EGEGHDENHPP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEGHDENHPP_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* CHAKABNICEL(::HAJDFCHFBGN* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID, ::HAJDFCHFBGN*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + EGEGHDENHPP_CHAKABNICEL_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* FEOIFJONLCH(::HAJDFCHFBGN* a1, ::RPG::GameCore::ChimeraDuelGroupEntitiesSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID, ::HAJDFCHFBGN*, ::RPG::GameCore::ChimeraDuelGroupEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + EGEGHDENHPP_FEOIFJONLCH_OFFSET))(this, a1, a2);
		}

	};
