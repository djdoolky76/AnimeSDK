#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvIsometricSetZoomState; }
namespace RPG::GameCore { class TaskContext; }

#define OKJHNNLKFFD_CTOR_OFFSET UNITYSDK_OFFSET(0xC7D53E0)
#define OKJHNNLKFFD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC7D5410)

inline static constexpr unsigned int OKJHNNLKFFD_TypeDefinitionIndex = 53495;

	class OKJHNNLKFFD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvIsometricSetZoomState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvIsometricSetZoomState*))((::PBYTE)hIl2Cpp + OKJHNNLKFFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKJHNNLKFFD_ONTASKBEGIN_OFFSET))(this);
		}

	};
