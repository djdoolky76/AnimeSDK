#pragma once
#include "unitysdk/unitysdk.h"
class GHDLDNPEKNI;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }

#define IAMAPFJCPHG_CTOR_OFFSET UNITYSDK_OFFSET(0x15E0D880)
#define IAMAPFJCPHG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E0D8B0)
#define IAMAPFJCPHG__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x15E0DA90)
#define IAMAPFJCPHG__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0x15E0DAA0)

inline static constexpr unsigned int IAMAPFJCPHG_TypeDefinitionIndex = 52793;

	class IAMAPFJCPHG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GHDLDNPEKNI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GHDLDNPEKNI*))((::PBYTE)hIl2Cpp + IAMAPFJCPHG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMAPFJCPHG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMAPFJCPHG__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + IAMAPFJCPHG__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
		}

	};
