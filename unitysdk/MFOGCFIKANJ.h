#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitDrinkMakerCheersInitFinish; }
namespace System { class Object; }

#define MFOGCFIKANJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB910630)
#define MFOGCFIKANJ_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0xB910C20)
#define MFOGCFIKANJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9109E0)
#define MFOGCFIKANJ__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB9107C0)
#define MFOGCFIKANJ__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB9108D0)

inline static constexpr unsigned int MFOGCFIKANJ_TypeDefinitionIndex = 58885;

	class MFOGCFIKANJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitDrinkMakerCheersInitFinish* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitDrinkMakerCheersInitFinish*))((::PBYTE)hIl2Cpp + MFOGCFIKANJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFOGCFIKANJ__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFOGCFIKANJ__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFOGCFIKANJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void ILEMLGEGLCC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFOGCFIKANJ_ILEMLGEGLCC_OFFSET))(this, a1);
		}

	};
