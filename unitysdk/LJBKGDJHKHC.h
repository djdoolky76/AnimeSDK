#pragma once
#include "unitysdk/unitysdk.h"
class NOCPNPNNLOM;
namespace RPG::GameCore { class TaskContext; }

#define LJBKGDJHKHC_CTOR_OFFSET UNITYSDK_OFFSET(0xB6E0CC0)
#define LJBKGDJHKHC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6E0CF0)

inline static constexpr unsigned int LJBKGDJHKHC_TypeDefinitionIndex = 53338;

	class LJBKGDJHKHC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NOCPNPNNLOM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NOCPNPNNLOM*))((::PBYTE)hIl2Cpp + LJBKGDJHKHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBKGDJHKHC_ONTASKBEGIN_OFFSET))(this);
		}

	};
