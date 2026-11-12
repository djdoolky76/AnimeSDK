#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class LittleGameLevelVariable; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FONMDGEEEGO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DC35650)
#define FONMDGEEEGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC358B0)
#define FONMDGEEEGO_DCADIANHPFD_OFFSET UNITYSDK_OFFSET(0x1DC35810)
#define FONMDGEEEGO_EKFIEAALOFF_OFFSET UNITYSDK_OFFSET(0x1DC35790)
#define FONMDGEEEGO_JLPMLLCBPIB_OFFSET UNITYSDK_OFFSET(0x1DC356C0)
#define FONMDGEEEGO_KFAJPMAOBOO_OFFSET UNITYSDK_OFFSET(0x1DC357D0)
#define FONMDGEEEGO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1DC35740)
#define FONMDGEEEGO_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x1DC35890)

inline static constexpr unsigned int FONMDGEEEGO_TypeDefinitionIndex = 43039;

	class FONMDGEEEGO : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::System::Action*>* PENAEDMJLPO; // 0x10
		::RPG::GameCore::LittleGameLevelVariable* IGHAHBNLIJA; // 0x18
		::System::Action_1<::System::String*>* LJBPMCGDANF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FONMDGEEEGO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FONMDGEEEGO_CLEAR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint JLPMLLCBPIB()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + FONMDGEEEGO_JLPMLLCBPIB_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::LittleGameLevelVariable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVariable*))((::PBYTE)hIl2Cpp + FONMDGEEEGO_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void EKFIEAALOFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FONMDGEEEGO_EKFIEAALOFF_OFFSET))(this);
		}

		::System::Void KFAJPMAOBOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FONMDGEEEGO_KFAJPMAOBOO_OFFSET))(this);
		}

		::System::Void DCADIANHPFD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FONMDGEEEGO_DCADIANHPFD_OFFSET))(this, a1);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FONMDGEEEGO_MLMGEFIOION_OFFSET))(this);
		}

	};
