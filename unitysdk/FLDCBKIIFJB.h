#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TraceOrigamiByColony; }

#define FLDCBKIIFJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1582C3C0)
#define FLDCBKIIFJB_EGAJLEGOJPC_OFFSET UNITYSDK_OFFSET(0x1582CD40)
#define FLDCBKIIFJB_JDFGMNCMFLK_OFFSET UNITYSDK_OFFSET(0x1582CE20)
#define FLDCBKIIFJB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1582C3F0)

inline static constexpr unsigned int FLDCBKIIFJB_TypeDefinitionIndex = 53413;

	class FLDCBKIIFJB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TraceOrigamiByColony* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TraceOrigamiByColony*))((::PBYTE)hIl2Cpp + FLDCBKIIFJB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLDCBKIIFJB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void JDFGMNCMFLK(::RPG::Client::MapPropDef* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapPropDef*, ::System::UInt32))((::PBYTE)hIl2Cpp + FLDCBKIIFJB_JDFGMNCMFLK_OFFSET))(this, a1, a2);
		}

		::System::Void EGAJLEGOJPC(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FLDCBKIIFJB_EGAJLEGOJPC_OFFSET))(this, a1, a2, a3);
		}

	};
