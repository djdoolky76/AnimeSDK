#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJHHFMBOCEN.h"
class CNKOHAHEJCD;
namespace System { class Action; }

#define CNKOHAHEJCD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xE5F0930)
#define CNKOHAHEJCD_CTOR_OFFSET UNITYSDK_OFFSET(0xE5F0AA0)
#define CNKOHAHEJCD_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xE5F0A30)
#define CNKOHAHEJCD_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xE5F09B0)

inline static constexpr unsigned int CNKOHAHEJCD_TypeDefinitionIndex = 80897;

	class CNKOHAHEJCD : public ::AJHHFMBOCEN
	{
	public:
		::System::Action* PEIHJAEIGHK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNKOHAHEJCD_CTOR_OFFSET))(this);
		}

		static ::CNKOHAHEJCD* BPLPBPMEODA(::System::Action* a1)
		{
			return ((::CNKOHAHEJCD*(*)(::System::Action*))((::PBYTE)hIl2Cpp + CNKOHAHEJCD_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNKOHAHEJCD_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNKOHAHEJCD_ONCLEAR_OFFSET))(this);
		}

	};
