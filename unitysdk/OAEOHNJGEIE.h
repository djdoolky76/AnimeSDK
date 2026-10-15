#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define OAEOHNJGEIE_CHAKABNICEL_OFFSET UNITYSDK_OFFSET(0xBD1E0F0)
#define OAEOHNJGEIE_CTOR_OFFSET UNITYSDK_OFFSET(0xBD1E1B0)

inline static constexpr unsigned int OAEOHNJGEIE_TypeDefinitionIndex = 77508;

	class OAEOHNJGEIE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAEOHNJGEIE_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* CHAKABNICEL(::HAJDFCHFBGN* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID, ::HAJDFCHFBGN*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + OAEOHNJGEIE_CHAKABNICEL_OFFSET))(this, a1, a2);
		}

	};
