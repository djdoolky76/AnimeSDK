#pragma once
#include "unitysdk/unitysdk.h"
class FNGKGCPAIOK;
namespace RPG::GameCore { class TaskContext; }

#define BIIAJHHNAFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBE3E1E0)
#define BIIAJHHNAFJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE3E210)

inline static constexpr unsigned int BIIAJHHNAFJ_TypeDefinitionIndex = 53625;

	class BIIAJHHNAFJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FNGKGCPAIOK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FNGKGCPAIOK*))((::PBYTE)hIl2Cpp + BIIAJHHNAFJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIIAJHHNAFJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
