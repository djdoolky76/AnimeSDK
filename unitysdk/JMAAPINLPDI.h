#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamSelectorType.h"
#include "unitysdk/System/Object.h"
class ECIIEBFKNMJ;
class HAJDFCHFBGN;
class IACBBGPHHJM;
class KAKADGHNMFK;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JMAAPINLPDI_AOFLGJGKMAK_OFFSET UNITYSDK_OFFSET(0xB2518D0)
#define JMAAPINLPDI_CHAKABNICEL_OFFSET UNITYSDK_OFFSET(0xB251800)
#define JMAAPINLPDI_CTOR_OFFSET UNITYSDK_OFFSET(0xB251EF0)
#define JMAAPINLPDI_OAGDIHGBBOI_OFFSET UNITYSDK_OFFSET(0xB2517A0)

inline static constexpr unsigned int JMAAPINLPDI_TypeDefinitionIndex = 77545;

	class JMAAPINLPDI : public ::System::Object
	{
	public:
		::IACBBGPHHJM* IHJEMJOGEHG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAAPINLPDI_CTOR_OFFSET))(this);
		}

		::System::Void OAGDIHGBBOI(::ECIIEBFKNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + JMAAPINLPDI_OAGDIHGBBOI_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* CHAKABNICEL(::HAJDFCHFBGN* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID, ::HAJDFCHFBGN*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + JMAAPINLPDI_CHAKABNICEL_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::KAKADGHNMFK*>* AOFLGJGKMAK(::HAJDFCHFBGN* a1, ::RPG::GameCore::ChimeraDuelTeamSelectorType a2)
		{
			return ((::System::Collections::Generic::List_1<::KAKADGHNMFK*>*(*)(::PVOID, ::HAJDFCHFBGN*, ::RPG::GameCore::ChimeraDuelTeamSelectorType))((::PBYTE)hIl2Cpp + JMAAPINLPDI_AOFLGJGKMAK_OFFSET))(this, a1, a2);
		}

	};
