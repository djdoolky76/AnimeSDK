#pragma once
#include "unitysdk/unitysdk.h"
class LDLJIEJGJOC;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }

#define DBPENCPAFEG_CTOR_OFFSET UNITYSDK_OFFSET(0xE22D990)
#define DBPENCPAFEG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE22D9C0)
#define DBPENCPAFEG__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xE22DB60)
#define DBPENCPAFEG__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0xE22DB70)

inline static constexpr unsigned int DBPENCPAFEG_TypeDefinitionIndex = 52794;

	class DBPENCPAFEG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LDLJIEJGJOC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LDLJIEJGJOC*))((::PBYTE)hIl2Cpp + DBPENCPAFEG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPENCPAFEG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPENCPAFEG__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + DBPENCPAFEG__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
		}

	};
