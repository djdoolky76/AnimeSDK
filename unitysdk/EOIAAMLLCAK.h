#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define EOIAAMLLCAK_CHAKABNICEL_OFFSET UNITYSDK_OFFSET(0x155B6760)
#define EOIAAMLLCAK_CTOR_OFFSET UNITYSDK_OFFSET(0x155B6830)
#define EOIAAMLLCAK_JOMAMPAGIHM_OFFSET UNITYSDK_OFFSET(0x155B6720)

inline static constexpr unsigned int EOIAAMLLCAK_TypeDefinitionIndex = 77513;

	class EOIAAMLLCAK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOIAAMLLCAK_CTOR_OFFSET))(this);
		}

		static ::System::String* JOMAMPAGIHM()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + EOIAAMLLCAK_JOMAMPAGIHM_OFFSET))();
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* CHAKABNICEL(::HAJDFCHFBGN* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID, ::HAJDFCHFBGN*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + EOIAAMLLCAK_CHAKABNICEL_OFFSET))(this, a1, a2);
		}

	};
