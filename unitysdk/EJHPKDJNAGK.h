#pragma once
#include "unitysdk/unitysdk.h"
class DNMCNKCMJBD;
namespace RPG::GameCore { class TaskContext; }

#define EJHPKDJNAGK_CTOR_OFFSET UNITYSDK_OFFSET(0x19AAB750)
#define EJHPKDJNAGK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19AAB780)

inline static constexpr unsigned int EJHPKDJNAGK_TypeDefinitionIndex = 57611;

	class EJHPKDJNAGK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DNMCNKCMJBD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DNMCNKCMJBD*))((::PBYTE)hIl2Cpp + EJHPKDJNAGK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHPKDJNAGK_ONTASKBEGIN_OFFSET))(this);
		}

	};
