#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRogueTournExhibitionBoothUpdate; }
namespace System { class Object; }

#define MGLJFOEOOOE_CTOR_OFFSET UNITYSDK_OFFSET(0xB922090)
#define MGLJFOEOOOE_MDJJLFIDCCN_OFFSET UNITYSDK_OFFSET(0xB922340)
#define MGLJFOEOOOE__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB922200)
#define MGLJFOEOOOE__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xB9222A0)

inline static constexpr unsigned int MGLJFOEOOOE_TypeDefinitionIndex = 58924;

	class MGLJFOEOOOE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitRogueTournExhibitionBoothUpdate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRogueTournExhibitionBoothUpdate*))((::PBYTE)hIl2Cpp + MGLJFOEOOOE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGLJFOEOOOE__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGLJFOEOOOE__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void MDJJLFIDCCN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGLJFOEOOOE_MDJJLFIDCCN_OFFSET))(this, a1);
		}

	};
