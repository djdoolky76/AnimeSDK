#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JOGBIBJLPJB.h"
class GNHANKEMGLG;
class LAJCPEFEOPN;
class PEELDCHBLJK;
namespace RPG::GameCore { class LevelPedestrianV2SpawnGroupInfo; }

#define GNHANKEMGLG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15B08AC0)
#define GNHANKEMGLG_CTOR_OFFSET UNITYSDK_OFFSET(0x15B08E00)
#define GNHANKEMGLG_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x15B08C70)
#define GNHANKEMGLG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B08CD0)
#define GNHANKEMGLG_GET_INFO_OFFSET UNITYSDK_OFFSET(0x15B08DE0)
#define GNHANKEMGLG_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15B08DC0)
#define GNHANKEMGLG_JLKGHDHOCLE_OFFSET UNITYSDK_OFFSET(0x15B08D30)
#define GNHANKEMGLG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15B08C10)
#define GNHANKEMGLG_SET_INFO_OFFSET UNITYSDK_OFFSET(0x15B08DF0)
#define GNHANKEMGLG_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15B08DD0)

inline static constexpr unsigned int GNHANKEMGLG_TypeDefinitionIndex = 69335;

	class GNHANKEMGLG : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo* _Info_k__BackingField; // 0x10
		::PEELDCHBLJK* _Instance_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHANKEMGLG_CTOR_OFFSET))(this);
		}

		static ::GNHANKEMGLG* BPLPBPMEODA(::PEELDCHBLJK* a1, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo* a2)
		{
			return ((::GNHANKEMGLG*(*)(::PEELDCHBLJK*, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo*))((::PBYTE)hIl2Cpp + GNHANKEMGLG_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void KPJGDHLENIP(::PEELDCHBLJK* a1, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PEELDCHBLJK*, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo*))((::PBYTE)hIl2Cpp + GNHANKEMGLG_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNHANKEMGLG_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHANKEMGLG_DISPOSE_OFFSET))(this);
		}

		::LAJCPEFEOPN* JLKGHDHOCLE(::JOGBIBJLPJB a1, ::RPG::Client::EPedestrianV2MotionState a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::LAJCPEFEOPN*(*)(::PVOID, ::JOGBIBJLPJB, ::RPG::Client::EPedestrianV2MotionState, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GNHANKEMGLG_JLKGHDHOCLE_OFFSET))(this, a1, a2, a3, a4);
		}

		::PEELDCHBLJK* get_Instance()
		{
			return ((::PEELDCHBLJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHANKEMGLG_GET_INSTANCE_OFFSET))(this);
		}

		::System::Void set_Instance(::PEELDCHBLJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEELDCHBLJK*))((::PBYTE)hIl2Cpp + GNHANKEMGLG_SET_INSTANCE_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo* get_Info()
		{
			return ((::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNHANKEMGLG_GET_INFO_OFFSET))(this);
		}

		::System::Void set_Info(::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo*))((::PBYTE)hIl2Cpp + GNHANKEMGLG_SET_INFO_OFFSET))(this, a1);
		}

	};
