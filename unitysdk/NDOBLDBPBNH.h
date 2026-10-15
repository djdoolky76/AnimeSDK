#pragma once
#include "unitysdk/unitysdk.h"
class JFMEJFEGBEC;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }

#define NDOBLDBPBNH_CTOR_OFFSET UNITYSDK_OFFSET(0xBB55B00)
#define NDOBLDBPBNH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB55B30)
#define NDOBLDBPBNH__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xBB55D10)
#define NDOBLDBPBNH__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0xBB55D20)

inline static constexpr unsigned int NDOBLDBPBNH_TypeDefinitionIndex = 52798;

	class NDOBLDBPBNH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JFMEJFEGBEC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JFMEJFEGBEC*))((::PBYTE)hIl2Cpp + NDOBLDBPBNH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOBLDBPBNH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDOBLDBPBNH__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + NDOBLDBPBNH__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
		}

	};
