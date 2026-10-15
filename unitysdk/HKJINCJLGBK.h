#pragma once
#include "unitysdk/unitysdk.h"
class MBPOHBNACLH;
namespace RPG::GameCore { class TaskContext; }

#define HKJINCJLGBK_CTOR_OFFSET UNITYSDK_OFFSET(0x15D49C90)
#define HKJINCJLGBK_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15D49CC0)

	class HKJINCJLGBK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MBPOHBNACLH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MBPOHBNACLH*))((::PBYTE)hIl2Cpp + HKJINCJLGBK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJINCJLGBK_EVALUATE_OFFSET))(this);
		}

	};
