#pragma once
#include "unitysdk/unitysdk.h"
class DFDELJOIGBJ;
namespace RPG::GameCore { class TaskContext; }

#define PBJOONOGJKC_CTOR_OFFSET UNITYSDK_OFFSET(0xBFEA550)
#define PBJOONOGJKC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFEA580)

inline static constexpr unsigned int PBJOONOGJKC_TypeDefinitionIndex = 54996;

	class PBJOONOGJKC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DFDELJOIGBJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DFDELJOIGBJ*))((::PBYTE)hIl2Cpp + PBJOONOGJKC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBJOONOGJKC_ONTASKBEGIN_OFFSET))(this);
		}

	};
