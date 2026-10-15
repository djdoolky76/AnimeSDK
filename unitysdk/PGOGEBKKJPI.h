#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOGNBKGNPFD;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PGOGEBKKJPI_ABHMCPCPPPP_OFFSET UNITYSDK_OFFSET(0xC223DB0)
#define PGOGEBKKJPI_CTOR_OFFSET UNITYSDK_OFFSET(0xC224290)

inline static constexpr unsigned int PGOGEBKKJPI_TypeDefinitionIndex = 77377;

	class PGOGEBKKJPI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGOGEBKKJPI_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* ABHMCPCPPPP(::IOGNBKGNPFD* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::IOGNBKGNPFD*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + PGOGEBKKJPI_ABHMCPCPPPP_OFFSET))(this, a1, a2);
		}

	};
