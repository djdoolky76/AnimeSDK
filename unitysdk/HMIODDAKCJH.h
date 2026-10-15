#pragma once
#include "unitysdk/unitysdk.h"
class IPKEDJJCLNO;
namespace RPG::GameCore { class TaskContext; }

#define HMIODDAKCJH_CTOR_OFFSET UNITYSDK_OFFSET(0x15D83410)
#define HMIODDAKCJH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D83440)

inline static constexpr unsigned int HMIODDAKCJH_TypeDefinitionIndex = 53353;

	class HMIODDAKCJH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IPKEDJJCLNO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IPKEDJJCLNO*))((::PBYTE)hIl2Cpp + HMIODDAKCJH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMIODDAKCJH_ONTASKBEGIN_OFFSET))(this);
		}

	};
