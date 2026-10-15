#pragma once
#include "unitysdk/unitysdk.h"
class EEJMIHDHHHB;
namespace RPG::GameCore { class TaskContext; }

#define NJCEJKBDDNF_CTOR_OFFSET UNITYSDK_OFFSET(0xBC03020)
#define NJCEJKBDDNF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC03050)

inline static constexpr unsigned int NJCEJKBDDNF_TypeDefinitionIndex = 55037;

	class NJCEJKBDDNF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EEJMIHDHHHB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EEJMIHDHHHB*))((::PBYTE)hIl2Cpp + NJCEJKBDDNF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCEJKBDDNF_ONTASKBEGIN_OFFSET))(this);
		}

	};
