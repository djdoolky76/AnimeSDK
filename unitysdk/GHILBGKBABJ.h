#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJNNEOKOCJD.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GHILBGKBABJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15A25460)
#define GHILBGKBABJ_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0x15A24D30)

inline static constexpr unsigned int GHILBGKBABJ_TypeDefinitionIndex = 77476;

	class GHILBGKBABJ : public ::FJNNEOKOCJD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHILBGKBABJ_CTOR_OFFSET))(this);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + GHILBGKBABJ_GICABFLDIPA_OFFSET))(this, a1, a2, a3);
		}

	};
