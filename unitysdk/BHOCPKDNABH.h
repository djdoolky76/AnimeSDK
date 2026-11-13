#pragma once
#include "unitysdk/unitysdk.h"
class DCABHAIHDJJ;
namespace RPG::GameCore { class TaskContext; }

#define BHOCPKDNABH_CTOR_OFFSET UNITYSDK_OFFSET(0x15200800)
#define BHOCPKDNABH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1BAA0A80)

inline static constexpr unsigned int BHOCPKDNABH_TypeDefinitionIndex = 53829;

	class BHOCPKDNABH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DCABHAIHDJJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DCABHAIHDJJ*))((::PBYTE)hIl2Cpp + BHOCPKDNABH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHOCPKDNABH_ONTASKBEGIN_OFFSET))(this);
		}

	};
