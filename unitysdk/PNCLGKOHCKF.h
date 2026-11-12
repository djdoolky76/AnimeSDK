#pragma once
#include "unitysdk/unitysdk.h"
class JDOLDFECMPL;
namespace RPG::GameCore { class TaskContext; }

#define PNCLGKOHCKF_CTOR_OFFSET UNITYSDK_OFFSET(0xCC663D0)
#define PNCLGKOHCKF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC66400)
#define PNCLGKOHCKF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC66440)

inline static constexpr unsigned int PNCLGKOHCKF_TypeDefinitionIndex = 56377;

	class PNCLGKOHCKF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JDOLDFECMPL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JDOLDFECMPL*))((::PBYTE)hIl2Cpp + PNCLGKOHCKF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCLGKOHCKF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCLGKOHCKF_ONTASKBEGIN_OFFSET))(this);
		}

	};
