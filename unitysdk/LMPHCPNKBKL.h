#pragma once
#include "unitysdk/unitysdk.h"
class LAIOFACKOGL;
namespace RPG::GameCore { class TaskContext; }

#define LMPHCPNKBKL_CTOR_OFFSET UNITYSDK_OFFSET(0xB7D3640)
#define LMPHCPNKBKL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7D3670)

inline static constexpr unsigned int LMPHCPNKBKL_TypeDefinitionIndex = 55035;

	class LMPHCPNKBKL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LAIOFACKOGL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LAIOFACKOGL*))((::PBYTE)hIl2Cpp + LMPHCPNKBKL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMPHCPNKBKL_ONTASKBEGIN_OFFSET))(this);
		}

	};
