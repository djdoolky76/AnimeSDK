#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamSelectorType.h"
#include "unitysdk/System/Object.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DKDOKGBEHBD_AOFLGJGKMAK_OFFSET UNITYSDK_OFFSET(0xF870BF0)
#define DKDOKGBEHBD_CHAKABNICEL_OFFSET UNITYSDK_OFFSET(0xF870B20)
#define DKDOKGBEHBD_CTOR_OFFSET UNITYSDK_OFFSET(0xF871210)

inline static constexpr unsigned int DKDOKGBEHBD_TypeDefinitionIndex = 77530;

	class DKDOKGBEHBD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKDOKGBEHBD_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* CHAKABNICEL(::HAJDFCHFBGN* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID, ::HAJDFCHFBGN*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + DKDOKGBEHBD_CHAKABNICEL_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::KAKADGHNMFK*>* AOFLGJGKMAK(::HAJDFCHFBGN* a1, ::RPG::GameCore::ChimeraDuelTeamSelectorType a2)
		{
			return ((::System::Collections::Generic::List_1<::KAKADGHNMFK*>*(*)(::PVOID, ::HAJDFCHFBGN*, ::RPG::GameCore::ChimeraDuelTeamSelectorType))((::PBYTE)hIl2Cpp + DKDOKGBEHBD_AOFLGJGKMAK_OFFSET))(this, a1, a2);
		}

	};
