#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class EJFAHBINDIN;
class JPEPPDMLPLG;
namespace RPG::GameCore { class AIStepperDecisionGroupConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define NKCOFACBOAI_CTOR_OFFSET UNITYSDK_OFFSET(0xBC2F840)
#define NKCOFACBOAI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC2FD90)
#define NKCOFACBOAI_EINLDHOIFOJ_OFFSET UNITYSDK_OFFSET(0xBC2FD30)
#define NKCOFACBOAI_FJGGJOMGJBF_OFFSET UNITYSDK_OFFSET(0xBC30670)
#define NKCOFACBOAI_GMNIKPOBEKO_OFFSET UNITYSDK_OFFSET(0xBC306D0)
#define NKCOFACBOAI_HHILMFCAJDA_OFFSET UNITYSDK_OFFSET(0xBC2FA50)
#define NKCOFACBOAI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBC30530)
#define NKCOFACBOAI_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xBC2FA00)
#define NKCOFACBOAI_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xBC30250)
#define NKCOFACBOAI_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0xBC301D0)
#define NKCOFACBOAI_OOKFNPPHHEK_OFFSET UNITYSDK_OFFSET(0xBC2FF50)
#define NKCOFACBOAI_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0xBC30400)

inline static constexpr unsigned int NKCOFACBOAI_TypeDefinitionIndex = 54387;

	class NKCOFACBOAI : public ::System::Object
	{
	public:
		::RPG::GameCore::AIStepperDecisionGroupConfig* OFKGLJOAMLD; // 0x10
		::Il2CppArray<::EJFAHBINDIN*>* CDGNAAEBFAO; // 0x18
		::JPEPPDMLPLG* DKJDBCFAHFI; // 0x20
		::EJFAHBINDIN* KODLMNMPGNN; // 0x28
		::System::Int32 FMPEIHPADPB; // 0x30
		::System::Int32 JPKEIFONDCP; // 0x34
		::System::Int32 FPNGBELCBDN; // 0x38
		::System::Void _ctor(::RPG::GameCore::AIStepperDecisionGroupConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AIStepperDecisionGroupConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + NKCOFACBOAI_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint HHILMFCAJDA()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + NKCOFACBOAI_HHILMFCAJDA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKCOFACBOAI_DISPOSE_OFFSET))(this);
		}

		::EJFAHBINDIN* OOKFNPPHHEK(::System::String* a1)
		{
			return ((::EJFAHBINDIN*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NKCOFACBOAI_OOKFNPPHHEK_OFFSET))(this, a1);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKCOFACBOAI_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void OPCKNBHNBOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKCOFACBOAI_OPCKNBHNBOA_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NKCOFACBOAI_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKCOFACBOAI_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void FJGGJOMGJBF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NKCOFACBOAI_FJGGJOMGJBF_OFFSET))(this, a1);
		}

		::System::Int32 EINLDHOIFOJ(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NKCOFACBOAI_EINLDHOIFOJ_OFFSET))(this, a1);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKCOFACBOAI_MLMGEFIOION_OFFSET))(this);
		}

		::RPG::GameCore::TaskState GMNIKPOBEKO()
		{
			return ((::RPG::GameCore::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + NKCOFACBOAI_GMNIKPOBEKO_OFFSET))(this);
		}

	};
