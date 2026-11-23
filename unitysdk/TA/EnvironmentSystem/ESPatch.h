#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace TA::EnvironmentSystem { class ESCustomData; }
namespace TA::EnvironmentSystem { class ESPhase; }

#define TA_ENVIRONMENTSYSTEM_ESPATCH_ADDTOESCUSTOMDATATYPECOUNTER_OFFSET UNITYSDK_OFFSET(0x289EDF0)
#define TA_ENVIRONMENTSYSTEM_ESPATCH_GET_ESPATCHCUSTOMDATATYPECOUNTER_OFFSET UNITYSDK_OFFSET(0x289FA60)
#define TA_ENVIRONMENTSYSTEM_ESPATCH_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x1E18F70)
#define TA_ENVIRONMENTSYSTEM_ESPATCH_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x289FAB0)
#define TA_ENVIRONMENTSYSTEM_ESPATCH_GET_RUNNINGCOUNT_OFFSET UNITYSDK_OFFSET(0x1831260)
#define TA_ENVIRONMENTSYSTEM_ESPATCH_INSERT_OFFSET UNITYSDK_OFFSET(0x289F080)
#define TA_ENVIRONMENTSYSTEM_ESPATCH_ISESPATCHESCUSTOMDATARUNNING_OFFSET UNITYSDK_OFFSET(0x289F240)
#define TA_ENVIRONMENTSYSTEM_ESPATCH_OVERRIDECURRENTCUSTOMDATAS_OFFSET UNITYSDK_OFFSET(0x289F3B0)
#define TA_ENVIRONMENTSYSTEM_ESPATCH_REMOVEESCUSTOMDATATYPECOUNTER_OFFSET UNITYSDK_OFFSET(0x289F5F0)
#define TA_ENVIRONMENTSYSTEM_ESPATCH_REMOVE_OFFSET UNITYSDK_OFFSET(0x289F810)
#define TA_ENVIRONMENTSYSTEM_ESPATCH_SET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x1E18F80)
#define TA_ENVIRONMENTSYSTEM_ESPATCH_SET_RUNNINGCOUNT_OFFSET UNITYSDK_OFFSET(0x1BCACB0)
#define TA_ENVIRONMENTSYSTEM_ESPATCH__CCTOR_OFFSET UNITYSDK_OFFSET(0x289F9D0)
#define TA_ENVIRONMENTSYSTEM_ESPATCH__CTOR_OFFSET UNITYSDK_OFFSET(0x289FA50)

namespace TA::EnvironmentSystem
{
	inline static constexpr unsigned int ESPatch_TypeDefinitionIndex = 16239;

	class ESPatch : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>** StaticGet__ESPatchCustomDataTypeCounter_k__BackingField()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ESPatch_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::TA::EnvironmentSystem::ESPhase* ESP; // 0x10
		::System::Single LerpDuration; // 0x18
		::System::Boolean _IsRunning_k__BackingField; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Int32 _RunningCount_k__BackingField; // 0x20

		::System::Void set_RunningCount(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESPATCH_SET_RUNNINGCOUNT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void RemoveESCustomDataTypeCounter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESPATCH_REMOVEESCUSTOMDATATYPECOUNTER_OFFSET))(this);
		}

		::System::Boolean get_IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESPATCH_GET_ISRUNNING_OFFSET))(this);
		}

		::System::Void OverrideCurrentCustomDatas(::System::Collections::Generic::Dictionary_2<::System::Type*, ::TA::EnvironmentSystem::ESCustomData*>* BF166ECACCA8F38B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::TA::EnvironmentSystem::ESCustomData*>*))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESPATCH_OVERRIDECURRENTCUSTOMDATAS_OFFSET))(this, BF166ECACCA8F38B);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESPATCH__CTOR_OFFSET))(this);
		}

		::System::Int32 get_RunningCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESPATCH_GET_RUNNINGCOUNT_OFFSET))(this);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>* get_ESPatchCustomDataTypeCounter()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Int32>*(*)())((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESPATCH_GET_ESPATCHCUSTOMDATATYPECOUNTER_OFFSET))();
		}

		::System::Void AddToESCustomDataTypeCounter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESPATCH_ADDTOESCUSTOMDATATYPECOUNTER_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESPATCH__CCTOR_OFFSET))();
		}

		::System::Void set_IsRunning(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESPATCH_SET_ISRUNNING_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void Insert()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESPATCH_INSERT_OFFSET))(this);
		}

		::System::Void Remove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESPATCH_REMOVE_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESPATCH_GET_ISVALID_OFFSET))(this);
		}

		static ::System::Boolean IsESPatchESCustomDataRunning(::System::Type* A288CB28FC2A6DA3)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + TA_ENVIRONMENTSYSTEM_ESPATCH_ISESPATCHESCUSTOMDATARUNNING_OFFSET))(A288CB28FC2A6DA3);
		}
	};
}
