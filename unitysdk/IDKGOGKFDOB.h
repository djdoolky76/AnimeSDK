#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ChenLingBattle { class Soldier; }
namespace RPG::Client::ChenLingBattle { class SoldierPropertyChangeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IDKGOGKFDOB_CTOR_OFFSET UNITYSDK_OFFSET(0x15ED9880)

inline static constexpr unsigned int IDKGOGKFDOB_TypeDefinitionIndex = 76384;

	class IDKGOGKFDOB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingBattle::SoldierPropertyChangeData*>* NJLINBKDBGI; // 0x10
		::RPG::Client::ChenLingBattle::Soldier* APDOFPIONOB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDKGOGKFDOB_CTOR_OFFSET))(this);
		}

	};
