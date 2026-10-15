#pragma once
#include "unitysdk/unitysdk.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitGroupEvent; }
namespace System { class String; }

#define AMACBAPLFHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x155667D0)
#define AMACBAPLFHJ_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0x15566CE0)
#define AMACBAPLFHJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15566940)
#define AMACBAPLFHJ__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x155669A0)
#define AMACBAPLFHJ__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15566AE0)
#define AMACBAPLFHJ__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15566C10)

inline static constexpr unsigned int AMACBAPLFHJ_TypeDefinitionIndex = 52530;

	class AMACBAPLFHJ
	{
	public:
		::System::String* FGMKCOANOOK; // 0x68
		::RPG::GameCore::GameEntity* MOOADPLGAIH; // 0x70
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitGroupEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitGroupEvent*))((::PBYTE)hIl2Cpp + AMACBAPLFHJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMACBAPLFHJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Boolean _PrepareData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMACBAPLFHJ__PREPAREDATA_OFFSET))(this);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMACBAPLFHJ__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMACBAPLFHJ__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void ILEMLGEGLCC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + AMACBAPLFHJ_ILEMLGEGLCC_OFFSET))(this, a1);
		}

	};
