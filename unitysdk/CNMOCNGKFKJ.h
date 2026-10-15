#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvIsometricNotify; }
namespace RPG::GameCore { class TaskContext; }

#define CNMOCNGKFKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xDA52AB0)
#define CNMOCNGKFKJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDA52AE0)

inline static constexpr unsigned int CNMOCNGKFKJ_TypeDefinitionIndex = 52387;

	class CNMOCNGKFKJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvIsometricNotify* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvIsometricNotify*))((::PBYTE)hIl2Cpp + CNMOCNGKFKJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMOCNGKFKJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
