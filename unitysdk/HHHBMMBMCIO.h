#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCLKDMAHONE;
class IOGNBKGNPFD;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HHHBMMBMCIO_AMIHBOCGJEC_OFFSET UNITYSDK_OFFSET(0x15CCD000)
#define HHHBMMBMCIO_CTOR_OFFSET UNITYSDK_OFFSET(0x15CCD630)
#define HHHBMMBMCIO_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15CCCA00)

inline static constexpr unsigned int HHHBMMBMCIO_TypeDefinitionIndex = 77339;

	class HHHBMMBMCIO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHHBMMBMCIO_CTOR_OFFSET))(this);
		}

		::System::Void Execute(::IOGNBKGNPFD* a1, ::System::Collections::Generic::List_1<::Entitas::IEntity*>* a2, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IOGNBKGNPFD*, ::System::Collections::Generic::List_1<::Entitas::IEntity*>*, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig*))((::PBYTE)hIl2Cpp + HHHBMMBMCIO_EXECUTE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AMIHBOCGJEC(::IOGNBKGNPFD* a1, ::BCLKDMAHONE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IOGNBKGNPFD*, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + HHHBMMBMCIO_AMIHBOCGJEC_OFFSET))(this, a1, a2);
		}

	};
