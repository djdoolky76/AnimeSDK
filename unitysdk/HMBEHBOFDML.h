#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RequestGroupStateChange; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define HMBEHBOFDML_CTOR_OFFSET UNITYSDK_OFFSET(0x15D6C480)
#define HMBEHBOFDML_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D6C490)
#define HMBEHBOFDML_HMFOOIOLAHF_OFFSET UNITYSDK_OFFSET(0x15D6CC00)
#define HMBEHBOFDML_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D6C630)
#define HMBEHBOFDML_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15D6C540)
#define HMBEHBOFDML_TICK_OFFSET UNITYSDK_OFFSET(0x15D6C5D0)

inline static constexpr unsigned int HMBEHBOFDML_TypeDefinitionIndex = 53201;

	class HMBEHBOFDML : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RequestGroupStateChange* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::UInt32 AJJFAODDKFB; // 0x28
		::System::UInt32 DEMEIKDPBAL; // 0x2C
		::System::UInt32 ACHIDNBOBLA; // 0x30
		::System::UInt32 PEEFHNHDBMF; // 0x34
		::System::UInt64 FDIBNPCCJAE; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RequestGroupStateChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RequestGroupStateChange*))((::PBYTE)hIl2Cpp + HMBEHBOFDML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBEHBOFDML_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HMBEHBOFDML_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBEHBOFDML_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBEHBOFDML_ONTASKRESET_OFFSET))(this);
		}

		::System::Void HMFOOIOLAHF(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + HMBEHBOFDML_HMFOOIOLAHF_OFFSET))(this, a1, a2);
		}

	};
