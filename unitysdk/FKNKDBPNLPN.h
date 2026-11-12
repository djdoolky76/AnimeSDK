#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ResetCharLightFromEntityDir; }
namespace RPG::GameCore { class TaskContext; }

#define FKNKDBPNLPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1677ECB0)
#define FKNKDBPNLPN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1677ECE0)
#define FKNKDBPNLPN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1677ED20)

inline static constexpr unsigned int FKNKDBPNLPN_TypeDefinitionIndex = 54367;

	class FKNKDBPNLPN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetCharLightFromEntityDir* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetCharLightFromEntityDir*))((::PBYTE)hIl2Cpp + FKNKDBPNLPN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNKDBPNLPN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKNKDBPNLPN_ONTASKBEGIN_OFFSET))(this);
		}

	};
