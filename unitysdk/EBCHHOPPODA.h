#pragma once
#include "unitysdk/unitysdk.h"
class CAJDCGPFPBA;
namespace RPG::GameCore { class TaskContext; }

#define EBCHHOPPODA_CTOR_OFFSET UNITYSDK_OFFSET(0x12CE5E70)
#define EBCHHOPPODA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CE5EA0)
#define EBCHHOPPODA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CE5EE0)

inline static constexpr unsigned int EBCHHOPPODA_TypeDefinitionIndex = 55505;

	class EBCHHOPPODA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CAJDCGPFPBA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CAJDCGPFPBA*))((::PBYTE)hIl2Cpp + EBCHHOPPODA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCHHOPPODA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCHHOPPODA_ONTASKBEGIN_OFFSET))(this);
		}

	};
