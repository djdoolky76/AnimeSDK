#pragma once
#include "unitysdk/unitysdk.h"
class DKBHPNAJNPD;
namespace RPG::GameCore { class TaskContext; }

#define CMBEPNFAJBM_CTOR_OFFSET UNITYSDK_OFFSET(0xE363520)
#define CMBEPNFAJBM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE363550)

inline static constexpr unsigned int CMBEPNFAJBM_TypeDefinitionIndex = 53950;

	class CMBEPNFAJBM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DKBHPNAJNPD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DKBHPNAJNPD*))((::PBYTE)hIl2Cpp + CMBEPNFAJBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBEPNFAJBM_ONTASKBEGIN_OFFSET))(this);
		}

	};
