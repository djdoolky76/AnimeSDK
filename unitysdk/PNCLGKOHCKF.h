#pragma once
#include "unitysdk/unitysdk.h"
class JDOLDFECMPL;
namespace RPG::GameCore { class TaskContext; }

#define PNCLGKOHCKF_CTOR_OFFSET UNITYSDK_OFFSET(0xC333910)
#define PNCLGKOHCKF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC333940)
#define PNCLGKOHCKF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC333980)

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
