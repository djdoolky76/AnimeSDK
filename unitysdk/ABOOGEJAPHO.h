#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABOOGEJAPHO;
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABOOGEJAPHO_CTOR_OFFSET UNITYSDK_OFFSET(0xB10EA40)
#define ABOOGEJAPHO_HEPPBBLLBPN_OFFSET UNITYSDK_OFFSET(0xB10E850)

inline static constexpr unsigned int ABOOGEJAPHO_TypeDefinitionIndex = 56292;

	class ABOOGEJAPHO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::BattleGridFightEquipData*>* FOCCIELEMOB; // 0x10
		::System::UInt32 AHGIENEMKFI; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x1C
		::System::UInt32 BIOAOEDDEFI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOOGEJAPHO_CTOR_OFFSET))(this);
		}

		::ABOOGEJAPHO* HEPPBBLLBPN()
		{
			return ((::ABOOGEJAPHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOOGEJAPHO_HEPPBBLLBPN_OFFSET))(this);
		}

	};
