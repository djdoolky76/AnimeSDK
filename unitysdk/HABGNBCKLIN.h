#pragma once
#include "unitysdk/unitysdk.h"
class LDHPCFBEPGF;
namespace RPG::GameCore { class TaskContext; }

#define HABGNBCKLIN_CTOR_OFFSET UNITYSDK_OFFSET(0x17DD2120)
#define HABGNBCKLIN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17DD2150)

inline static constexpr unsigned int HABGNBCKLIN_TypeDefinitionIndex = 59757;

	class HABGNBCKLIN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LDHPCFBEPGF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LDHPCFBEPGF*))((::PBYTE)hIl2Cpp + HABGNBCKLIN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HABGNBCKLIN_ONTASKBEGIN_OFFSET))(this);
		}

	};
