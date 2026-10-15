#pragma once
#include "unitysdk/unitysdk.h"
class HFHGEOOKHEP;
namespace RPG::GameCore { class TaskContext; }

#define KHFFCACGCDH_CTOR_OFFSET UNITYSDK_OFFSET(0xB4069D0)
#define KHFFCACGCDH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB406A00)

inline static constexpr unsigned int KHFFCACGCDH_TypeDefinitionIndex = 58664;

	class KHFFCACGCDH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HFHGEOOKHEP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HFHGEOOKHEP*))((::PBYTE)hIl2Cpp + KHFFCACGCDH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFFCACGCDH_ONTASKBEGIN_OFFSET))(this);
		}

	};
