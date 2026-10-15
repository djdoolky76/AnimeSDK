#pragma once
#include "unitysdk/unitysdk.h"
class MIBNEIMGOPK;
namespace RPG::GameCore { class TaskContext; }

#define GAIDKKLBICN_CTOR_OFFSET UNITYSDK_OFFSET(0x1593C2B0)
#define GAIDKKLBICN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1593C2E0)

inline static constexpr unsigned int GAIDKKLBICN_TypeDefinitionIndex = 53871;

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
