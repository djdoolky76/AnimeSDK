#pragma once
#include "unitysdk/unitysdk.h"
class BFBIICACCMB;
namespace RPG::GameCore { class TaskContext; }

#define MKGCMGKBAIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC250EC0)
#define MKGCMGKBAIJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC250EF0)
#define MKGCMGKBAIJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC250F30)

inline static constexpr unsigned int MKGCMGKBAIJ_TypeDefinitionIndex = 55062;

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
