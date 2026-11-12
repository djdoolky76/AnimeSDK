#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOGNBKGNPFD;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PPNHKOAJLBI_ABHMCPCPPPP_OFFSET UNITYSDK_OFFSET(0xCCCB2A0)
#define PPNHKOAJLBI_CTOR_OFFSET UNITYSDK_OFFSET(0xCCCB4D0)

inline static constexpr unsigned int PPNHKOAJLBI_TypeDefinitionIndex = 79716;

	class PPNHKOAJLBI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNHKOAJLBI_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* ABHMCPCPPPP(::IOGNBKGNPFD* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::IOGNBKGNPFD*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + PPNHKOAJLBI_ABHMCPCPPPP_OFFSET))(this, a1, a2);
		}

	};
