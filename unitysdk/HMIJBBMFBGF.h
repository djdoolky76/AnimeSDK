#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOGNBKGNPFD;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HMIJBBMFBGF_CTOR_OFFSET UNITYSDK_OFFSET(0x16D20AE0)
#define HMIJBBMFBGF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16D203F0)

inline static constexpr unsigned int HMIJBBMFBGF_TypeDefinitionIndex = 79668;

	class HMIJBBMFBGF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMIJBBMFBGF_CTOR_OFFSET))(this);
		}

		::System::Void Execute(::IOGNBKGNPFD* a1, ::System::Collections::Generic::List_1<::Entitas::IEntity*>* a2, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IOGNBKGNPFD*, ::System::Collections::Generic::List_1<::Entitas::IEntity*>*, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig*))((::PBYTE)hIl2Cpp + HMIJBBMFBGF_EXECUTE_OFFSET))(this, a1, a2, a3);
		}

	};
