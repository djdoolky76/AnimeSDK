#pragma once
#include "unitysdk/unitysdk.h"
class CAJDCGPFPBA;
namespace RPG::GameCore { class TaskContext; }

#define EBCHHOPPODA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3B37F0)
#define EBCHHOPPODA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C3B3820)
#define EBCHHOPPODA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C3B3860)

inline static constexpr unsigned int EBCHHOPPODA_TypeDefinitionIndex = 56693;

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
