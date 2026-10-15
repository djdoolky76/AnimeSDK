#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAnchor; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DNLPNMBOBMI_CTOR_OFFSET UNITYSDK_OFFSET(0x11FD82B0)
#define DNLPNMBOBMI_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11FD8320)

	class DNLPNMBOBMI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAnchor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAnchor*))((::PBYTE)hIl2Cpp + DNLPNMBOBMI_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + DNLPNMBOBMI_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
