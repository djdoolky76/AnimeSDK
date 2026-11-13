#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ReinitProperty; }
namespace RPG::GameCore { class TaskContext; }

#define IFBCPGLJFPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC05090)
#define IFBCPGLJFPN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1BC050C0)

inline static constexpr unsigned int IFBCPGLJFPN_TypeDefinitionIndex = 56476;

	class IFBCPGLJFPN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReinitProperty* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReinitProperty*))((::PBYTE)hIl2Cpp + IFBCPGLJFPN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBCPGLJFPN_ONTASKBEGIN_OFFSET))(this);
		}

	};
