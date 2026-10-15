#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJNNEOKOCJD.h"
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LLFMNGLEFHL_CTOR_OFFSET UNITYSDK_OFFSET(0xB7637A0)
#define LLFMNGLEFHL_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0xB763370)

inline static constexpr unsigned int LLFMNGLEFHL_TypeDefinitionIndex = 77495;

	class LLFMNGLEFHL : public ::FJNNEOKOCJD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLFMNGLEFHL_CTOR_OFFSET))(this);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + LLFMNGLEFHL_GICABFLDIPA_OFFSET))(this, a1, a2, a3);
		}

	};
