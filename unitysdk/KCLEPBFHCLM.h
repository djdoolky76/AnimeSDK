#pragma once
#include "unitysdk/unitysdk.h"
class HAPMNFHILIK;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }

#define KCLEPBFHCLM_CTOR_OFFSET UNITYSDK_OFFSET(0xBBC7C30)
#define KCLEPBFHCLM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBC7C60)
#define KCLEPBFHCLM__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xBBC7E40)
#define KCLEPBFHCLM__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0xBBC7E50)

inline static constexpr unsigned int KCLEPBFHCLM_TypeDefinitionIndex = 53935;

	class KCLEPBFHCLM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HAPMNFHILIK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HAPMNFHILIK*))((::PBYTE)hIl2Cpp + KCLEPBFHCLM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLEPBFHCLM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLEPBFHCLM__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + KCLEPBFHCLM__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
		}

	};
