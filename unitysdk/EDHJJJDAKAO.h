#pragma once
#include "unitysdk/unitysdk.h"
class GDEDFJOIPFA;
namespace RPG::GameCore { class TaskContext; }

#define EDHJJJDAKAO_CTOR_OFFSET UNITYSDK_OFFSET(0x13315BC0)
#define EDHJJJDAKAO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13315BF0)

inline static constexpr unsigned int EDHJJJDAKAO_TypeDefinitionIndex = 52849;

	class EDHJJJDAKAO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GDEDFJOIPFA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GDEDFJOIPFA*))((::PBYTE)hIl2Cpp + EDHJJJDAKAO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHJJJDAKAO_ONTASKBEGIN_OFFSET))(this);
		}

	};
