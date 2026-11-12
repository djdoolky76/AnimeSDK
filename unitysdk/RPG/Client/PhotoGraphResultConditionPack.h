#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFovLevel.h"
#include "unitysdk/System/Object.h"
class PEMJDEKBMAD;
namespace RPG::Client { class PhotoGraphResultCondition; }
namespace RPG::GameCore { class PhotoGraphShotResultCondition; }
namespace RPG::GameCore { class TaskContext; }

#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITIONPACK_CHECKRESULT_OFFSET UNITYSDK_OFFSET(0xE557B10)
#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITIONPACK_CTOR_OFFSET UNITYSDK_OFFSET(0xE557850)
#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITIONPACK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE557BA0)
#define RPG_CLIENT_PHOTOGRAPHRESULTCONDITIONPACK_TICK_OFFSET UNITYSDK_OFFSET(0xE5579E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphResultConditionPack_TypeDefinitionIndex = 71410;

	class PhotoGraphResultConditionPack : public ::System::Object
	{
	public:
		::PEMJDEKBMAD* _ResultChange; // 0x10
		::Il2CppArray<::RPG::Client::PhotoGraphResultCondition*>* PhotoGraphResultSingleConditions; // 0x18
		::System::Boolean AutoSnapFovLevel; // 0x20
		::System::Boolean _LastResult; // 0x21
		::System::Byte _padding0[0x2];
		::RPG::GameCore::PhotoGraphFovLevel TargetFovLevel; // 0x24
		::RPG::Client::TextID ConditionName; // 0x28
		::System::Void _ctor(::RPG::GameCore::PhotoGraphShotResultCondition* a1, ::RPG::GameCore::TaskContext* a2, ::PEMJDEKBMAD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphShotResultCondition*, ::RPG::GameCore::TaskContext*, ::PEMJDEKBMAD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITIONPACK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITIONPACK_TICK_OFFSET))(this);
		}

		::System::Boolean CheckResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITIONPACK_CHECKRESULT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHRESULTCONDITIONPACK_DISPOSE_OFFSET))(this);
		}

	};
}
