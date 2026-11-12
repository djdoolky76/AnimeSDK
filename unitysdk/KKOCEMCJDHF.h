#pragma once
#include "unitysdk/unitysdk.h"
class FACMNJFJEFP;
namespace RPG::GameCore { class TaskContext; }

#define KKOCEMCJDHF_CTOR_OFFSET UNITYSDK_OFFSET(0xBD1F870)
#define KKOCEMCJDHF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD1F8A0)

inline static constexpr unsigned int KKOCEMCJDHF_TypeDefinitionIndex = 56309;

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
