#pragma once
#include "unitysdk/unitysdk.h"
class MIBNEIMGOPK;
namespace RPG::GameCore { class TaskContext; }

#define GAIDKKLBICN_CTOR_OFFSET UNITYSDK_OFFSET(0x1B86CCE0)
#define GAIDKKLBICN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1B86CD10)

inline static constexpr unsigned int GAIDKKLBICN_TypeDefinitionIndex = 55035;

	class GAIDKKLBICN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MIBNEIMGOPK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MIBNEIMGOPK*))((::PBYTE)hIl2Cpp + GAIDKKLBICN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIDKKLBICN_EVALUATE_OFFSET))(this);
		}

	};
