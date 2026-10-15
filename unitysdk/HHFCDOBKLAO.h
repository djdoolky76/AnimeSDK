#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CompleteMove; }
namespace RPG::GameCore { class TaskContext; }

#define HHFCDOBKLAO_CTOR_OFFSET UNITYSDK_OFFSET(0x15CBD990)
#define HHFCDOBKLAO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CBD9C0)

inline static constexpr unsigned int HHFCDOBKLAO_TypeDefinitionIndex = 54972;

	class HHFCDOBKLAO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CompleteMove* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CompleteMove*))((::PBYTE)hIl2Cpp + HHFCDOBKLAO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHFCDOBKLAO_ONTASKBEGIN_OFFSET))(this);
		}

	};
