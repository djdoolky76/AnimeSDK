#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/System/Nullable_1.h"
namespace RPG::GameCore { class SetEnergyBarState; }
namespace RPG::GameCore { class TaskContext; }

#define CLDNEBABIDM_CTOR_OFFSET UNITYSDK_OFFSET(0xD7745A0)
#define CLDNEBABIDM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD7745B0)
#define CLDNEBABIDM_MDLNPMMHOJI_1_OFFSET UNITYSDK_OFFSET(0xD775070)
#define CLDNEBABIDM_MDLNPMMHOJI_OFFSET UNITYSDK_OFFSET(0xD7750D0)
#define CLDNEBABIDM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD7745F0)
#define CLDNEBABIDM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD775130)
#define CLDNEBABIDM_TICK_OFFSET UNITYSDK_OFFSET(0xD775180)

inline static constexpr unsigned int CLDNEBABIDM_TypeDefinitionIndex = 55498;

	class CLDNEBABIDM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetEnergyBarState* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEnergyBarState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEnergyBarState*))((::PBYTE)hIl2Cpp + CLDNEBABIDM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDNEBABIDM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDNEBABIDM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDNEBABIDM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLDNEBABIDM_TICK_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Int32> MDLNPMMHOJI(::System::Int32 a1)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLDNEBABIDM_MDLNPMMHOJI_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Boolean> MDLNPMMHOJI_1(::RPG::GameCore::BoolEx a1)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::RPG::GameCore::BoolEx))((::PBYTE)hIl2Cpp + CLDNEBABIDM_MDLNPMMHOJI_1_OFFSET))(this, a1);
		}

	};
