#pragma once
#include "unitysdk/unitysdk.h"
class BFBIICACCMB;
namespace RPG::GameCore { class TaskContext; }

#define MKGCMGKBAIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB990CF0)
#define MKGCMGKBAIJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB990D20)
#define MKGCMGKBAIJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB990D60)

inline static constexpr unsigned int MKGCMGKBAIJ_TypeDefinitionIndex = 53898;

	class MKGCMGKBAIJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BFBIICACCMB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BFBIICACCMB*))((::PBYTE)hIl2Cpp + MKGCMGKBAIJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGCMGKBAIJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKGCMGKBAIJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
