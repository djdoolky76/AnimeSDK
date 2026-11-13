#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMMNJAMJJCN.h"
class KDPAILLJNKG;
namespace RPG::Client::ActivityIdleLive { class IdleLiveBaseTeamInfo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define OKMCGHFFAGO_AIJLDADIBNM_OFFSET UNITYSDK_OFFSET(0x1788CE60)
#define OKMCGHFFAGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1788C8A0)
#define OKMCGHFFAGO_GHCKHALPLNN_OFFSET UNITYSDK_OFFSET(0x1788CD00)
#define OKMCGHFFAGO_IEOGLIENPMN_OFFSET UNITYSDK_OFFSET(0x1788CC40)
#define OKMCGHFFAGO_IGOFBHFOJDJ_OFFSET UNITYSDK_OFFSET(0x1788D000)
#define OKMCGHFFAGO_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0x1788CE10)
#define OKMCGHFFAGO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1788C920)
#define OKMCGHFFAGO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1788CF20)
#define OKMCGHFFAGO___ONIDLELIVETEAMUPDATED_B__6_0_OFFSET UNITYSDK_OFFSET(0x1788D0D0)

inline static constexpr unsigned int OKMCGHFFAGO_TypeDefinitionIndex = 59428;

	class OKMCGHFFAGO : public ::CMMNJAMJJCN
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo* GLCFFOIDEMA; // 0x28
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
		::KDPAILLJNKG* IGHAHBNLIJA; // 0x38
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
