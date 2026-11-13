#pragma once
#include "unitysdk/unitysdk.h"
class GFEEGCPKEJB;
namespace RPG::GameCore { class TaskContext; }

#define CJDBDNFHCOP_CTOR_OFFSET UNITYSDK_OFFSET(0x177B9ED0)
#define CJDBDNFHCOP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x177B9F00)
#define CJDBDNFHCOP__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x177BA180)

inline static constexpr unsigned int CJDBDNFHCOP_TypeDefinitionIndex = 53953;

	class CJDBDNFHCOP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GFEEGCPKEJB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GFEEGCPKEJB*))((::PBYTE)hIl2Cpp + CJDBDNFHCOP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDBDNFHCOP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDBDNFHCOP__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

	};
