#pragma once
#include "unitysdk/unitysdk.h"
class MLNJPPDKHHK;
namespace RPG::GameCore { class TaskContext; }

#define HMNMDPMIOLN_CTOR_OFFSET UNITYSDK_OFFSET(0x16D28A70)
#define HMNMDPMIOLN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16D28AB0)
#define HMNMDPMIOLN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16D28AF0)

inline static constexpr unsigned int HMNMDPMIOLN_TypeDefinitionIndex = 55314;

	class HMNMDPMIOLN
	{
	public:
		::System::Int32 APNGJPMPMOB; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MLNJPPDKHHK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MLNJPPDKHHK*))((::PBYTE)hIl2Cpp + HMNMDPMIOLN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMNMDPMIOLN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMNMDPMIOLN_ONTASKBEGIN_OFFSET))(this);
		}

	};
