#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtTargetMapBelongGrid; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DHKGDGCKDPK_CTOR_OFFSET UNITYSDK_OFFSET(0xEBDCF40)
#define DHKGDGCKDPK_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xEBDCF60)

inline static constexpr unsigned int DHKGDGCKDPK_TypeDefinitionIndex = 53807;

	class DHKGDGCKDPK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::RtTargetMapBelongGrid* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtTargetMapBelongGrid*))((::PBYTE)hIl2Cpp + DHKGDGCKDPK_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + DHKGDGCKDPK_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
