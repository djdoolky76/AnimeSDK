#pragma once
#include "unitysdk/unitysdk.h"
class DMLHKAPNEPE;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }

#define PJABINIBAGM_CTOR_OFFSET UNITYSDK_OFFSET(0xC26FAB0)
#define PJABINIBAGM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC26FAE0)
#define PJABINIBAGM__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xC26FE40)
#define PJABINIBAGM__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0xC26FE50)

inline static constexpr unsigned int PJABINIBAGM_TypeDefinitionIndex = 52790;

	class PJABINIBAGM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DMLHKAPNEPE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DMLHKAPNEPE*))((::PBYTE)hIl2Cpp + PJABINIBAGM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJABINIBAGM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJABINIBAGM__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + PJABINIBAGM__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
		}

	};
