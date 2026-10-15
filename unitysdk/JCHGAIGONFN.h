#pragma once
#include "unitysdk/unitysdk.h"
class EGLGEOOKCNM;
namespace RPG::GameCore { class TaskContext; }

#define JCHGAIGONFN_CTOR_OFFSET UNITYSDK_OFFSET(0x16584CC0)
#define JCHGAIGONFN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16584CF0)

inline static constexpr unsigned int JCHGAIGONFN_TypeDefinitionIndex = 52667;

	class JCHGAIGONFN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EGLGEOOKCNM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EGLGEOOKCNM*))((::PBYTE)hIl2Cpp + JCHGAIGONFN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCHGAIGONFN_EVALUATE_OFFSET))(this);
		}

	};
