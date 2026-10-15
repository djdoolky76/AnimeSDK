#pragma once
#include "unitysdk/unitysdk.h"
class BCOAEFIKBAO;
namespace RPG::GameCore { class TaskContext; }

#define DGBEHGAKOBN_CTOR_OFFSET UNITYSDK_OFFSET(0xE842660)
#define DGBEHGAKOBN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE842690)

inline static constexpr unsigned int DGBEHGAKOBN_TypeDefinitionIndex = 55133;

	class DGBEHGAKOBN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BCOAEFIKBAO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BCOAEFIKBAO*))((::PBYTE)hIl2Cpp + DGBEHGAKOBN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGBEHGAKOBN_ONTASKBEGIN_OFFSET))(this);
		}

	};
