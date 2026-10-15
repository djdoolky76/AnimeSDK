#pragma once
#include "unitysdk/unitysdk.h"
class HFFMLLBLAMH;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }

#define AKGGHPADJKI_CTOR_OFFSET UNITYSDK_OFFSET(0x12CCEEC0)
#define AKGGHPADJKI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CCEEF0)
#define AKGGHPADJKI__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x12CCF090)
#define AKGGHPADJKI__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0x12CCF0A0)

inline static constexpr unsigned int AKGGHPADJKI_TypeDefinitionIndex = 52797;

	class AKGGHPADJKI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HFFMLLBLAMH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HFFMLLBLAMH*))((::PBYTE)hIl2Cpp + AKGGHPADJKI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGGHPADJKI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGGHPADJKI__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + AKGGHPADJKI__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
		}

	};
