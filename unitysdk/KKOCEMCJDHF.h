#pragma once
#include "unitysdk/unitysdk.h"
class FACMNJFJEFP;
namespace RPG::GameCore { class TaskContext; }

#define KKOCEMCJDHF_CTOR_OFFSET UNITYSDK_OFFSET(0xB4D6480)
#define KKOCEMCJDHF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4D64B0)

inline static constexpr unsigned int KKOCEMCJDHF_TypeDefinitionIndex = 55130;

	class KKOCEMCJDHF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FACMNJFJEFP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FACMNJFJEFP*))((::PBYTE)hIl2Cpp + KKOCEMCJDHF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOCEMCJDHF_ONTASKBEGIN_OFFSET))(this);
		}

	};
