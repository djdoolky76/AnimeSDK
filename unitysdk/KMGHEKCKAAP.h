#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/ClosureEvent_2.h"
#include "unitysdk/System/Object.h"
class NDNNILEFPHG;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class LittleGameBaseEventAction; }
namespace System { class String; }

#define KMGHEKCKAAP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C908A10)
#define KMGHEKCKAAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C908A80)

inline static constexpr unsigned int KMGHEKCKAAP_TypeDefinitionIndex = 42015;

	class KMGHEKCKAAP : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::LittleGameBaseEventAction*>* GGHCKBHGHFC; // 0x10
		::NDNNILEFPHG* NNACKOBKFGE; // 0x18
		::System::String* OEPLADOIMOC; // 0x20
		::RPG::GCFreeClosure::ClosureEvent_2<::Entitas::IEntity*, ::NDNNILEFPHG*> ECIECIEAMOK; // 0x28
		::System::Byte _padding0[0x8];
		::System::Single PNJEGPAFNCI; // 0x38
		::System::Boolean KAGICIAJEEA; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGHEKCKAAP_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGHEKCKAAP_CLEAR_OFFSET))(this);
		}

	};
