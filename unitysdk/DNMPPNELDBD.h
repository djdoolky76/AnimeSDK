#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByTargetIsBetweenCameraAndAnother; }
namespace RPG::GameCore { class TaskContext; }

#define DNMPPNELDBD_CTOR_OFFSET UNITYSDK_OFFSET(0x11FDA910)
#define DNMPPNELDBD_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11FDA940)

inline static constexpr unsigned int DNMPPNELDBD_TypeDefinitionIndex = 54719;

	class DNMPPNELDBD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother*))((::PBYTE)hIl2Cpp + DNMPPNELDBD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMPPNELDBD_EVALUATE_OFFSET))(this);
		}

	};
