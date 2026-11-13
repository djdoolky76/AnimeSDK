#pragma once
#include "unitysdk/unitysdk.h"
class LLCKDNMDJGG;
namespace RPG::GameCore { class TaskContext; }

#define FKICOJCDDFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1AAA5960)
#define FKICOJCDDFI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AAA5990)

inline static constexpr unsigned int FKICOJCDDFI_TypeDefinitionIndex = 53949;

	class FKICOJCDDFI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LLCKDNMDJGG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LLCKDNMDJGG*))((::PBYTE)hIl2Cpp + FKICOJCDDFI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKICOJCDDFI_ONTASKBEGIN_OFFSET))(this);
		}

	};
