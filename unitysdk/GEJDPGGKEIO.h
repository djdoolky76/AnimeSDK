#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BCLKDMAHONE;
class IOGNBKGNPFD;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class BaseLittleGameAbilityEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GEJDPGGKEIO_AACICDDNFHK_OFFSET UNITYSDK_OFFSET(0x159CF280)
#define GEJDPGGKEIO_CTOR_OFFSET UNITYSDK_OFFSET(0x159CF440)
#define GEJDPGGKEIO_EXECUTE_OFFSET UNITYSDK_OFFSET(0x159CEC50)

inline static constexpr unsigned int GEJDPGGKEIO_TypeDefinitionIndex = 77341;

	class GEJDPGGKEIO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJDPGGKEIO_CTOR_OFFSET))(this);
		}

		::System::Void Execute(::IOGNBKGNPFD* a1, ::System::Collections::Generic::List_1<::Entitas::IEntity*>* a2, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IOGNBKGNPFD*, ::System::Collections::Generic::List_1<::Entitas::IEntity*>*, ::RPG::GameCore::BaseLittleGameAbilityEffectConfig*))((::PBYTE)hIl2Cpp + GEJDPGGKEIO_EXECUTE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean AACICDDNFHK(::BCLKDMAHONE* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::BCLKDMAHONE*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GEJDPGGKEIO_AACICDDNFHK_OFFSET))(a1, a2);
		}

	};
