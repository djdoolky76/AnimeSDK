#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"
class NCJILFFNINI;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EJMLINKKJJN_BJPFKNECHPL_OFFSET UNITYSDK_OFFSET(0x19AC5F90)
#define EJMLINKKJJN_CTOR_OFFSET UNITYSDK_OFFSET(0x19AC5E50)
#define EJMLINKKJJN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19AC5E90)
#define EJMLINKKJJN_FHLALJENMHB_OFFSET UNITYSDK_OFFSET(0x19AC5F10)
#define EJMLINKKJJN_GET_CHUNKOWNER_OFFSET UNITYSDK_OFFSET(0x19AC6120)
#define EJMLINKKJJN_GET_ISINCHUNK_OFFSET UNITYSDK_OFFSET(0x19AC6160)
#define EJMLINKKJJN_GET_TARGETTEAM_OFFSET UNITYSDK_OFFSET(0x19AC6140)
#define EJMLINKKJJN_HCBEKEAINKF_OFFSET UNITYSDK_OFFSET(0x19AC6010)
#define EJMLINKKJJN_SET_CHUNKOWNER_OFFSET UNITYSDK_OFFSET(0x19AC6130)
#define EJMLINKKJJN_SET_ISINCHUNK_OFFSET UNITYSDK_OFFSET(0x19AC6170)
#define EJMLINKKJJN_SET_TARGETTEAM_OFFSET UNITYSDK_OFFSET(0x19AC6150)

inline static constexpr unsigned int EJMLINKKJJN_TypeDefinitionIndex = 58966;

	class EJMLINKKJJN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* EHJIKIBJPCC; // 0x10
		::RPG::GameCore::GameEntity* _ChunkOwner_k__BackingField; // 0x18
		::RPG::GameCore::TeamType _TargetTeam_k__BackingField; // 0x20
		::System::Boolean _IsInChunk_k__BackingField; // 0x24
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EJMLINKKJJN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMLINKKJJN_DISPOSE_OFFSET))(this);
		}

		::System::Void FHLALJENMHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMLINKKJJN_FHLALJENMHB_OFFSET))(this);
		}

		::System::Void BJPFKNECHPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMLINKKJJN_BJPFKNECHPL_OFFSET))(this);
		}

		::System::Void HCBEKEAINKF(::RPG::GameCore::GameEntity* a1, ::NCJILFFNINI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::NCJILFFNINI*))((::PBYTE)hIl2Cpp + EJMLINKKJJN_HCBEKEAINKF_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* get_ChunkOwner()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMLINKKJJN_GET_CHUNKOWNER_OFFSET))(this);
		}

		::System::Void set_ChunkOwner(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EJMLINKKJJN_SET_CHUNKOWNER_OFFSET))(this, a1);
		}

		::RPG::GameCore::TeamType get_TargetTeam()
		{
			return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMLINKKJJN_GET_TARGETTEAM_OFFSET))(this);
		}

		::System::Void set_TargetTeam(::RPG::GameCore::TeamType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + EJMLINKKJJN_SET_TARGETTEAM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInChunk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMLINKKJJN_GET_ISINCHUNK_OFFSET))(this);
		}

		::System::Void set_IsInChunk(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJMLINKKJJN_SET_ISINCHUNK_OFFSET))(this, a1);
		}

	};
