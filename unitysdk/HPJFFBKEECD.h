#pragma once
#include "unitysdk/unitysdk.h"
class IMNNDJAAKBC;
namespace RPG::GameCore { class TaskContext; }

#define HPJFFBKEECD_CTOR_OFFSET UNITYSDK_OFFSET(0x16D720C0)
#define HPJFFBKEECD_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16D720F0)

inline static constexpr unsigned int HPJFFBKEECD_TypeDefinitionIndex = 55840;

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
