#pragma once
#include "unitysdk/unitysdk.h"
class HGHNFLIFOGP;
namespace RPG::GameCore { class TaskContext; }

#define CKHEJEMDAEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1AD3D9F0)
#define CKHEJEMDAEC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AD3DA20)

inline static constexpr unsigned int CKHEJEMDAEC_TypeDefinitionIndex = 56571;

	class CKHEJEMDAEC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HGHNFLIFOGP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HGHNFLIFOGP*))((::PBYTE)hIl2Cpp + CKHEJEMDAEC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHEJEMDAEC_ONTASKBEGIN_OFFSET))(this);
		}

	};
