#pragma once
#include "unitysdk/unitysdk.h"
class IMNNDJAAKBC;
namespace RPG::GameCore { class TaskContext; }

#define HPJFFBKEECD_CTOR_OFFSET UNITYSDK_OFFSET(0x15DCE590)
#define HPJFFBKEECD_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15DCE5C0)

inline static constexpr unsigned int HPJFFBKEECD_TypeDefinitionIndex = 54674;

	class HPJFFBKEECD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IMNNDJAAKBC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IMNNDJAAKBC*))((::PBYTE)hIl2Cpp + HPJFFBKEECD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPJFFBKEECD_EVALUATE_OFFSET))(this);
		}

	};
