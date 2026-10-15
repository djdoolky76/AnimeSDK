#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"
class NCJILFFNINI;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EJMLINKKJJN_BJPFKNECHPL_OFFSET UNITYSDK_OFFSET(0x154E3500)
#define EJMLINKKJJN_CTOR_OFFSET UNITYSDK_OFFSET(0x154E33C0)
#define EJMLINKKJJN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154E3400)
#define EJMLINKKJJN_FHLALJENMHB_OFFSET UNITYSDK_OFFSET(0x154E3480)
#define EJMLINKKJJN_GET_CHUNKOWNER_OFFSET UNITYSDK_OFFSET(0x154E3690)
#define EJMLINKKJJN_GET_ISINCHUNK_OFFSET UNITYSDK_OFFSET(0x154E36D0)
#define EJMLINKKJJN_GET_TARGETTEAM_OFFSET UNITYSDK_OFFSET(0x154E36B0)
#define EJMLINKKJJN_HCBEKEAINKF_OFFSET UNITYSDK_OFFSET(0x154E3580)
#define EJMLINKKJJN_SET_CHUNKOWNER_OFFSET UNITYSDK_OFFSET(0x154E36A0)
#define EJMLINKKJJN_SET_ISINCHUNK_OFFSET UNITYSDK_OFFSET(0x154E36E0)
#define EJMLINKKJJN_SET_TARGETTEAM_OFFSET UNITYSDK_OFFSET(0x154E36C0)

inline static constexpr unsigned int EJMLINKKJJN_TypeDefinitionIndex = 57733;

	class EJMLINKKJJN : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _ChunkOwner_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* EHJIKIBJPCC; // 0x18
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
