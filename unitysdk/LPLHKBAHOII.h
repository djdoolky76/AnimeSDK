#pragma once
#include "unitysdk/unitysdk.h"
class LGDNHDLJBML;
namespace RPG::GameCore { class TaskContext; }

#define LPLHKBAHOII_CTOR_OFFSET UNITYSDK_OFFSET(0xC085390)
#define LPLHKBAHOII_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC0853C0)

inline static constexpr unsigned int LPLHKBAHOII_TypeDefinitionIndex = 53827;

	class LPLHKBAHOII
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LGDNHDLJBML* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LGDNHDLJBML*))((::PBYTE)hIl2Cpp + LPLHKBAHOII_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLHKBAHOII_ONTASKBEGIN_OFFSET))(this);
		}

	};
