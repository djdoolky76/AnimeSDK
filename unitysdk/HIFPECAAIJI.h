#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ArrayPoolWrapper_1.h"
class HIOAMIPNLIN;
namespace RPG::GameCore { class SetModifierValue; }
namespace RPG::GameCore { class TaskContext; }

#define HIFPECAAIJI_COENBLJPHLM_OFFSET UNITYSDK_OFFSET(0x15CD82A0)
#define HIFPECAAIJI_CTOR_OFFSET UNITYSDK_OFFSET(0x15CD7EC0)
#define HIFPECAAIJI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CD7EF0)

inline static constexpr unsigned int HIFPECAAIJI_TypeDefinitionIndex = 55538;

	class HIFPECAAIJI
	{
	public:
		::RPG::GameCore::ArrayPoolWrapper_1<::HIOAMIPNLIN*> HEJKAKEJCMP; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetModifierValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetModifierValue*))((::PBYTE)hIl2Cpp + HIFPECAAIJI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFPECAAIJI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void COENBLJPHLM(::Il2CppArray<::HIOAMIPNLIN*>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::HIOAMIPNLIN*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HIFPECAAIJI_COENBLJPHLM_OFFSET))(this, a1, a2, a3);
		}

	};
