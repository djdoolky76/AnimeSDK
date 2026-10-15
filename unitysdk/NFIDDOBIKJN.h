#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJNNEOKOCJD.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NFIDDOBIKJN_CTOR_OFFSET UNITYSDK_OFFSET(0xBB901B0)
#define NFIDDOBIKJN_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0xBB90020)

inline static constexpr unsigned int NFIDDOBIKJN_TypeDefinitionIndex = 77477;

	class NFIDDOBIKJN : public ::FJNNEOKOCJD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFIDDOBIKJN_CTOR_OFFSET))(this);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + NFIDDOBIKJN_GICABFLDIPA_OFFSET))(this, a1, a2, a3);
		}

	};
