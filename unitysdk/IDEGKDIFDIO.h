#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitDrinkMakerCheersShowMainPage; }
namespace System { class Object; }

#define IDEGKDIFDIO_CTOR_OFFSET UNITYSDK_OFFSET(0x16E2E140)
#define IDEGKDIFDIO_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0x16E2E450)
#define IDEGKDIFDIO__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x16E2E2D0)
#define IDEGKDIFDIO__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x16E2E390)

inline static constexpr unsigned int IDEGKDIFDIO_TypeDefinitionIndex = 60158;

	class IDEGKDIFDIO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitDrinkMakerCheersShowMainPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitDrinkMakerCheersShowMainPage*))((::PBYTE)hIl2Cpp + IDEGKDIFDIO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEGKDIFDIO__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEGKDIFDIO__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void ILEMLGEGLCC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDEGKDIFDIO_ILEMLGEGLCC_OFFSET))(this, a1);
		}

	};
