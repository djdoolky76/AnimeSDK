#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCFAKEGJPKN;
class GGHEGHCAIEH;
class PJPPGJEDCOG;

#define FIEEBCKMKDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5533E0)
#define FIEEBCKMKDF_GET_ASSISTANTACTORCONFIG_OFFSET UNITYSDK_OFFSET(0x1C5533D0)
#define FIEEBCKMKDF_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C5533A0)
#define FIEEBCKMKDF_GET_EXAMINERACTORCONFIG_OFFSET UNITYSDK_OFFSET(0x1C5533C0)
#define FIEEBCKMKDF_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1C553390)
#define FIEEBCKMKDF_GET_REQUIREMENTCONFIG_OFFSET UNITYSDK_OFFSET(0x1C5533B0)

	class FIEEBCKMKDF : public ::System::Object
	{
	public:
		::GGHEGHCAIEH* _Config_k__BackingField; // 0x10
		::BCFAKEGJPKN* _ExaminerActorConfig_k__BackingField; // 0x18
		::PJPPGJEDCOG* _RequirementConfig_k__BackingField; // 0x20
		::BCFAKEGJPKN* _AssistantActorConfig_k__BackingField; // 0x28
		::System::UInt32 _Identifier_k__BackingField; // 0x30
		::System::Void _ctor(::System::UInt32 a1, ::GGHEGHCAIEH* a2, ::PJPPGJEDCOG* a3, ::BCFAKEGJPKN* a4, ::BCFAKEGJPKN* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::GGHEGHCAIEH*, ::PJPPGJEDCOG*, ::BCFAKEGJPKN*, ::BCFAKEGJPKN*))((::PBYTE)hIl2Cpp + FIEEBCKMKDF_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 get_Identifier()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIEEBCKMKDF_GET_IDENTIFIER_OFFSET))(this);
		}

		::GGHEGHCAIEH* get_Config()
		{
			return ((::GGHEGHCAIEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIEEBCKMKDF_GET_CONFIG_OFFSET))(this);
		}

		::PJPPGJEDCOG* get_RequirementConfig()
		{
			return ((::PJPPGJEDCOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIEEBCKMKDF_GET_REQUIREMENTCONFIG_OFFSET))(this);
		}

		::BCFAKEGJPKN* get_ExaminerActorConfig()
		{
			return ((::BCFAKEGJPKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIEEBCKMKDF_GET_EXAMINERACTORCONFIG_OFFSET))(this);
		}

		::BCFAKEGJPKN* get_AssistantActorConfig()
		{
			return ((::BCFAKEGJPKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIEEBCKMKDF_GET_ASSISTANTACTORCONFIG_OFFSET))(this);
		}

	};
