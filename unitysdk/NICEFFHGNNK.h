#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AdvPropSteer; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }

#define NICEFFHGNNK_BJLJAHMLKIO_OFFSET UNITYSDK_OFFSET(0xBBD8710)
#define NICEFFHGNNK_CTOR_OFFSET UNITYSDK_OFFSET(0xBBD80D0)
#define NICEFFHGNNK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBD80E0)
#define NICEFFHGNNK_EMOELIFPFCC_OFFSET UNITYSDK_OFFSET(0xBBD8760)
#define NICEFFHGNNK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBD8120)
#define NICEFFHGNNK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBBD86C0)
#define NICEFFHGNNK_TICK_OFFSET UNITYSDK_OFFSET(0xBBD8660)

inline static constexpr unsigned int NICEFFHGNNK_TypeDefinitionIndex = 52475;

	class NICEFFHGNNK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PropComponent* IKHBMOJMEEM; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::AdvPropSteer* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPropSteer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPropSteer*))((::PBYTE)hIl2Cpp + NICEFFHGNNK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICEFFHGNNK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICEFFHGNNK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NICEFFHGNNK_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICEFFHGNNK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void BJLJAHMLKIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICEFFHGNNK_BJLJAHMLKIO_OFFSET))(this);
		}

		::System::Void EMOELIFPFCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICEFFHGNNK_EMOELIFPFCC_OFFSET))(this);
		}

	};
