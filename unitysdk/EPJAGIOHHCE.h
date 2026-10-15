#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;
class LMJPODEEGKK;

#define EPJAGIOHHCE_CNLPCHMMGGG_OFFSET UNITYSDK_OFFSET(0x155D5730)
#define EPJAGIOHHCE_CTOR_OFFSET UNITYSDK_OFFSET(0x155D54B0)
#define EPJAGIOHHCE_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x155D5810)
#define EPJAGIOHHCE_PHNPOOHFDKN_OFFSET UNITYSDK_OFFSET(0x155D5770)
#define EPJAGIOHHCE_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x155D57B0)
#define EPJAGIOHHCE_PKAIBJMBLDL_OFFSET UNITYSDK_OFFSET(0x155D5560)

inline static constexpr unsigned int EPJAGIOHHCE_TypeDefinitionIndex = 77610;

	class EPJAGIOHHCE : public ::System::Object
	{
	public:
		::Il2CppArray<::KAKADGHNMFK*>* DEJFOMGAFOI; // 0x10
		::LMJPODEEGKK* FKINCGODJEP; // 0x18
		::System::Int32 BHINLBDHKNE; // 0x20
		::RPG::GameCore::ChimeraDuelTeamType AHJJPBGGOMK; // 0x24
		::System::Void _ctor(::LMJPODEEGKK* a1, ::RPG::GameCore::ChimeraDuelTeamType a2)
		{
			return ((::System::Void(*)(::PVOID, ::LMJPODEEGKK*, ::RPG::GameCore::ChimeraDuelTeamType))((::PBYTE)hIl2Cpp + EPJAGIOHHCE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void PKAIBJMBLDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJAGIOHHCE_PKAIBJMBLDL_OFFSET))(this);
		}

		::System::Int32 CNLPCHMMGGG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJAGIOHHCE_CNLPCHMMGGG_OFFSET))(this);
		}

		::Il2CppArray<::KAKADGHNMFK*>* PHNPOOHFDKN()
		{
			return ((::Il2CppArray<::KAKADGHNMFK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJAGIOHHCE_PHNPOOHFDKN_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJAGIOHHCE_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPJAGIOHHCE_HADOHLNHHGB_OFFSET))(this);
		}

	};
