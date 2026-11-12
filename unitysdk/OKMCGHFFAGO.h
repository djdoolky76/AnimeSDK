#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMMNJAMJJCN.h"
class KDPAILLJNKG;
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define OKMCGHFFAGO_AIJLDADIBNM_OFFSET UNITYSDK_OFFSET(0xC7E9150)
#define OKMCGHFFAGO_CTOR_OFFSET UNITYSDK_OFFSET(0xC7E8B90)
#define OKMCGHFFAGO_GHCKHALPLNN_OFFSET UNITYSDK_OFFSET(0xC7E8FF0)
#define OKMCGHFFAGO_IEOGLIENPMN_OFFSET UNITYSDK_OFFSET(0xC7E8F30)
#define OKMCGHFFAGO_IGOFBHFOJDJ_OFFSET UNITYSDK_OFFSET(0xC7E92F0)
#define OKMCGHFFAGO_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0xC7E9100)
#define OKMCGHFFAGO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC7E8C10)
#define OKMCGHFFAGO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC7E9210)
#define OKMCGHFFAGO___ONIDLELIVETEAMUPDATED_B__6_0_OFFSET UNITYSDK_OFFSET(0xC7E93C0)

inline static constexpr unsigned int OKMCGHFFAGO_TypeDefinitionIndex = 59428;

	class OKMCGHFFAGO : public ::CMMNJAMJJCN
	{
	public:
		::KDPAILLJNKG* IGHAHBNLIJA; // 0x28
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
		::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* GLCFFOIDEMA; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KDPAILLJNKG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KDPAILLJNKG*))((::PBYTE)hIl2Cpp + OKMCGHFFAGO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMCGHFFAGO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void KOHOGMCJHBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMCGHFFAGO_KOHOGMCJHBH_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMCGHFFAGO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void IEOGLIENPMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMCGHFFAGO_IEOGLIENPMN_OFFSET))(this);
		}

		::System::Void AIJLDADIBNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMCGHFFAGO_AIJLDADIBNM_OFFSET))(this);
		}

		::System::Void IGOFBHFOJDJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKMCGHFFAGO_IGOFBHFOJDJ_OFFSET))(this, a1);
		}

		::System::Boolean GHCKHALPLNN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMCGHFFAGO_GHCKHALPLNN_OFFSET))(this);
		}

		::System::Void __OnIdleLiveTeamUpdated_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKMCGHFFAGO___ONIDLELIVETEAMUPDATED_B__6_0_OFFSET))(this);
		}

	};
