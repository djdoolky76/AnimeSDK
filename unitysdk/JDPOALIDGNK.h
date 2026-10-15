#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHMJNBPDMKL.h"
#include "unitysdk/RPG/GameCore/B51RacingTREventType.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JDPOALIDGNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB8FFA0)

inline static constexpr unsigned int JDPOALIDGNK_TypeDefinitionIndex = 42937;

	class JDPOALIDGNK : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* MGPBNDEHHGC; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingTREventType, ::System::Single>* KFOOIAGPLAK; // 0x18
		::System::Collections::Generic::List_1<::GHMJNBPDMKL>* PPJCFABBECH; // 0x20
		::System::Single KPKIIGNDMHN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDPOALIDGNK_CTOR_OFFSET))(this);
		}

	};
