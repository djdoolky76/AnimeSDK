#pragma once
#include "unitysdk/unitysdk.h"
class KFNMAKPOCCJ;
namespace RPG::GameCore { class TaskContext; }

#define CJCPFMGAGHI_CTOR_OFFSET UNITYSDK_OFFSET(0xCF94180)
#define CJCPFMGAGHI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF941B0)

inline static constexpr unsigned int CJCPFMGAGHI_TypeDefinitionIndex = 55515;

	class CJCPFMGAGHI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KFNMAKPOCCJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KFNMAKPOCCJ*))((::PBYTE)hIl2Cpp + CJCPFMGAGHI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJCPFMGAGHI_ONTASKBEGIN_OFFSET))(this);
		}

	};
