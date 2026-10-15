#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetNPCPlatformMove; }
namespace RPG::GameCore { class TaskContext; }

#define EFJLGMFCJGI_CTOR_OFFSET UNITYSDK_OFFSET(0x13A516F0)
#define EFJLGMFCJGI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A51720)
#define EFJLGMFCJGI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A51770)

inline static constexpr unsigned int EFJLGMFCJGI_TypeDefinitionIndex = 58561;

	class EFJLGMFCJGI
	{
	public:
		::RPG::GameCore::SetNPCPlatformMove* EJJEEJENLDA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetNPCPlatformMove* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetNPCPlatformMove*))((::PBYTE)hIl2Cpp + EFJLGMFCJGI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJLGMFCJGI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJLGMFCJGI_ONTASKBEGIN_OFFSET))(this);
		}

	};
