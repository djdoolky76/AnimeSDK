#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOGNBKGNPFD;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OLLLPNOEEEK_ABHMCPCPPPP_OFFSET UNITYSDK_OFFSET(0xBF0FF60)
#define OLLLPNOEEEK_CTOR_OFFSET UNITYSDK_OFFSET(0xBF10340)

inline static constexpr unsigned int OLLLPNOEEEK_TypeDefinitionIndex = 77375;

	class OLLLPNOEEEK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLLPNOEEEK_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* ABHMCPCPPPP(::IOGNBKGNPFD* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::IOGNBKGNPFD*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + OLLLPNOEEEK_ABHMCPCPPPP_OFFSET))(this, a1, a2);
		}

	};
