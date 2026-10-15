#pragma once
#include "unitysdk/unitysdk.h"
class MLOGMOLADMP;
namespace RPG::GameCore { class TaskContext; }

#define GGOHGKBIOPO_CTOR_OFFSET UNITYSDK_OFFSET(0x15A115B0)
#define GGOHGKBIOPO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A115E0)

inline static constexpr unsigned int GGOHGKBIOPO_TypeDefinitionIndex = 54942;

	class GGOHGKBIOPO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MLOGMOLADMP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MLOGMOLADMP*))((::PBYTE)hIl2Cpp + GGOHGKBIOPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGOHGKBIOPO_ONTASKBEGIN_OFFSET))(this);
		}

	};
