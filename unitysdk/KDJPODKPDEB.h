#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define KDJPODKPDEB_CHAKABNICEL_OFFSET UNITYSDK_OFFSET(0xBBEF8F0)
#define KDJPODKPDEB_CTOR_OFFSET UNITYSDK_OFFSET(0xBBEF9B0)

inline static constexpr unsigned int KDJPODKPDEB_TypeDefinitionIndex = 80275;

	class KDJPODKPDEB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJPODKPDEB_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* CHAKABNICEL(::HAJDFCHFBGN* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID, ::HAJDFCHFBGN*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + KDJPODKPDEB_CHAKABNICEL_OFFSET))(this, a1, a2);
		}

	};
