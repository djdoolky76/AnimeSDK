#pragma once
#include "unitysdk/unitysdk.h"
class BPBDNMKIIKO;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }

#define LDCJMCNKHFH_CTOR_OFFSET UNITYSDK_OFFSET(0xB616920)
#define LDCJMCNKHFH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB616950)
#define LDCJMCNKHFH__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xB616CB0)
#define LDCJMCNKHFH__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0xB616CC0)

inline static constexpr unsigned int LDCJMCNKHFH_TypeDefinitionIndex = 52792;

	class LDCJMCNKHFH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BPBDNMKIIKO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BPBDNMKIIKO*))((::PBYTE)hIl2Cpp + LDCJMCNKHFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCJMCNKHFH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCJMCNKHFH__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + LDCJMCNKHFH__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
		}

	};
