#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
class EPDHJGBNCDD;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }

#define CCJHDEJGICF_CTOR_OFFSET UNITYSDK_OFFSET(0xC73C100)
#define CCJHDEJGICF_ELLFFIAGFEI_OFFSET UNITYSDK_OFFSET(0xC73C540)
#define CCJHDEJGICF_NJHFHECIGNL_OFFSET UNITYSDK_OFFSET(0xC73C480)
#define CCJHDEJGICF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC73C130)
#define CCJHDEJGICF__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xC73C590)
#define CCJHDEJGICF__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0xC73C5A0)

inline static constexpr unsigned int CCJHDEJGICF_TypeDefinitionIndex = 52796;

	class CCJHDEJGICF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EPDHJGBNCDD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EPDHJGBNCDD*))((::PBYTE)hIl2Cpp + CCJHDEJGICF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJHDEJGICF_ONTASKBEGIN_OFFSET))(this);
		}

		static ::System::Int32 NJHFHECIGNL(::Il2CppArray<::RPG::GameCore::FateRinCaseBoardTeamType>* a1)
		{
			return ((::System::Int32(*)(::Il2CppArray<::RPG::GameCore::FateRinCaseBoardTeamType>*))((::PBYTE)hIl2Cpp + CCJHDEJGICF_NJHFHECIGNL_OFFSET))(a1);
		}

		static ::System::Boolean ELLFFIAGFEI(::RPG::GameCore::FateRinCaseBoardTeamType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FateRinCaseBoardTeamType))((::PBYTE)hIl2Cpp + CCJHDEJGICF_ELLFFIAGFEI_OFFSET))(a1);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCJHDEJGICF__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CCJHDEJGICF__ONTASKBEGIN_B__1_1_OFFSET))(this, a1);
		}

	};
