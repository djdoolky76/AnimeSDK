#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKBKLEFNIOG;
class HGIPADIDNFL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HGIPADIDNFL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15C93C80)
#define HGIPADIDNFL_CTOR_OFFSET UNITYSDK_OFFSET(0x15C93D10)
#define HGIPADIDNFL_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x15C93D20)
#define HGIPADIDNFL_GET_BATTLEID_OFFSET UNITYSDK_OFFSET(0x15C93E10)
#define HGIPADIDNFL_GET_ENEMYINFO_OFFSET UNITYSDK_OFFSET(0x15C93E30)
#define HGIPADIDNFL_SET_BATTLEID_OFFSET UNITYSDK_OFFSET(0x15C93E20)
#define HGIPADIDNFL_SET_ENEMYINFO_OFFSET UNITYSDK_OFFSET(0x15C93E40)

inline static constexpr unsigned int HGIPADIDNFL_TypeDefinitionIndex = 79209;

	class HGIPADIDNFL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* PLDMJFJLABD; // 0x10
		::AKBKLEFNIOG* _EnemyInfo_k__BackingField; // 0x18
		::System::UInt32 _BattleID_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGIPADIDNFL_CTOR_OFFSET))(this);
		}

		static ::HGIPADIDNFL* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::HGIPADIDNFL*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HGIPADIDNFL_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGIPADIDNFL_DIOEAJEHHND_OFFSET))(this);
		}

		::System::UInt32 get_BattleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGIPADIDNFL_GET_BATTLEID_OFFSET))(this);
		}

		::System::Void set_BattleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HGIPADIDNFL_SET_BATTLEID_OFFSET))(this, a1);
		}

		::AKBKLEFNIOG* get_EnemyInfo()
		{
			return ((::AKBKLEFNIOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGIPADIDNFL_GET_ENEMYINFO_OFFSET))(this);
		}

		::System::Void set_EnemyInfo(::AKBKLEFNIOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKBKLEFNIOG*))((::PBYTE)hIl2Cpp + HGIPADIDNFL_SET_ENEMYINFO_OFFSET))(this, a1);
		}

	};
