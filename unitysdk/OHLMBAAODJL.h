#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOGNBKGNPFD;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OHLMBAAODJL_ABHMCPCPPPP_OFFSET UNITYSDK_OFFSET(0x18E1BE00)
#define OHLMBAAODJL_CTOR_OFFSET UNITYSDK_OFFSET(0x18E1C1E0)

inline static constexpr unsigned int OHLMBAAODJL_TypeDefinitionIndex = 79709;

	class OHLMBAAODJL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHLMBAAODJL_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* ABHMCPCPPPP(::IOGNBKGNPFD* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::IOGNBKGNPFD*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + OHLMBAAODJL_ABHMCPCPPPP_OFFSET))(this, a1, a2);
		}

	};
