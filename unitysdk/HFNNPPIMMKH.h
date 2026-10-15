#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAJDFCHFBGN;
class IACBBGPHHJM;
class KAKADGHNMFK;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define HFNNPPIMMKH_CHAKABNICEL_OFFSET UNITYSDK_OFFSET(0x15C8C500)
#define HFNNPPIMMKH_CTOR_OFFSET UNITYSDK_OFFSET(0x15C8C5C0)

inline static constexpr unsigned int HFNNPPIMMKH_TypeDefinitionIndex = 77526;

	class HFNNPPIMMKH : public ::System::Object
	{
	public:
		::IACBBGPHHJM* IHJEMJOGEHG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFNNPPIMMKH_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* CHAKABNICEL(::HAJDFCHFBGN* a1, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID, ::HAJDFCHFBGN*, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + HFNNPPIMMKH_CHAKABNICEL_OFFSET))(this, a1, a2);
		}

	};
