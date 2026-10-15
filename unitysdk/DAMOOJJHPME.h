#pragma once
#include "unitysdk/unitysdk.h"
class NGFHCJIAOLH;
class NOLPNHJGAJG;
namespace RPG::GameCore { class TaskContext; }

#define DAMOOJJHPME_CTOR_OFFSET UNITYSDK_OFFSET(0xDFBBFF0)
#define DAMOOJJHPME_EVALUATE_OFFSET UNITYSDK_OFFSET(0xDFBC070)

inline static constexpr unsigned int DAMOOJJHPME_TypeDefinitionIndex = 52652;

	class DAMOOJJHPME
	{
	public:
		::NGFHCJIAOLH* NFJGMKPFPOC; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NOLPNHJGAJG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NOLPNHJGAJG*))((::PBYTE)hIl2Cpp + DAMOOJJHPME_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMOOJJHPME_EVALUATE_OFFSET))(this);
		}

	};
