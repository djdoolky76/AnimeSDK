#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class FIMPMCCMPPE_OMOOBNKCADP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitUIAnim; }
namespace UnityEngine { class Transform; }

#define FIMPMCCMPPE_AMOAPEHHGKM_OFFSET UNITYSDK_OFFSET(0x1980B440)
#define FIMPMCCMPPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1980B070)
#define FIMPMCCMPPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1980B080)
#define FIMPMCCMPPE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1980B0C0)
#define FIMPMCCMPPE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1980B5E0)
#define FIMPMCCMPPE_TICK_OFFSET UNITYSDK_OFFSET(0x1980B630)

inline static constexpr unsigned int FIMPMCCMPPE_TypeDefinitionIndex = 60209;

	class FIMPMCCMPPE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::FIMPMCCMPPE_OMOOBNKCADP* FGGCJFFKCGM; // 0x20
		::RPG::GameCore::WaitUIAnim* OFKGLJOAMLD; // 0x28
		::System::Single MLENHINDJHH; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitUIAnim* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitUIAnim*))((::PBYTE)hIl2Cpp + FIMPMCCMPPE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMPMCCMPPE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMPMCCMPPE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMPMCCMPPE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FIMPMCCMPPE_TICK_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* AMOAPEHHGKM()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMPMCCMPPE_AMOAPEHHGKM_OFFSET))(this);
		}

	};
