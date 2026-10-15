#pragma once
#include "unitysdk/unitysdk.h"
class CMLPCCDBGKD;
namespace RPG::GameCore { class TaskContext; }

#define ECLFGGBNALK_CTOR_OFFSET UNITYSDK_OFFSET(0x12D12A50)
#define ECLFGGBNALK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12D12A80)
#define ECLFGGBNALK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12D12BF0)

inline static constexpr unsigned int ECLFGGBNALK_TypeDefinitionIndex = 53651;

	class ECLFGGBNALK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CMLPCCDBGKD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CMLPCCDBGKD*))((::PBYTE)hIl2Cpp + ECLFGGBNALK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLFGGBNALK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLFGGBNALK_ONTASKRESET_OFFSET))(this);
		}

	};
