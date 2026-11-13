#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class RoadRashGameModifier_PlayerUltimateQTE; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define OPCEEOEPBPP_CBLOPKOPFBP_OFFSET UNITYSDK_OFFSET(0x196C20F0)
#define OPCEEOEPBPP_CTOR_OFFSET UNITYSDK_OFFSET(0x196C1590)
#define OPCEEOEPBPP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x196C15B0)
#define OPCEEOEPBPP_FCDJKDHNEEH_OFFSET UNITYSDK_OFFSET(0x196C16F0)
#define OPCEEOEPBPP_GCIFFBOKJML_OFFSET UNITYSDK_OFFSET(0x196C21B0)
#define OPCEEOEPBPP_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x196C2170)
#define OPCEEOEPBPP_HEFNAOFELLG_OFFSET UNITYSDK_OFFSET(0x196C1F80)
#define OPCEEOEPBPP_NDNAIEKBOJM_OFFSET UNITYSDK_OFFSET(0x196C1E80)
#define OPCEEOEPBPP_ODEBPJPACKB_OFFSET UNITYSDK_OFFSET(0x196C1850)
#define OPCEEOEPBPP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x196C15F0)
#define OPCEEOEPBPP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x196C1C10)
#define OPCEEOEPBPP_TICK_OFFSET UNITYSDK_OFFSET(0x196C1C70)

inline static constexpr unsigned int OPCEEOEPBPP_TypeDefinitionIndex = 59685;

	class OPCEEOEPBPP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::Client::RoadRashGameModifier_PlayerUltimateQTE* OFKGLJOAMLD; // 0x20
		::System::Int32 BKPDHAJKFCE; // 0x28
		::System::Single EKINFIKNFOM; // 0x2C
		::System::Single EHNAKFFHPLA; // 0x30
		::System::Single DFLCFKMHNEP; // 0x34
		::System::Single CHOHLHGCKNF; // 0x38
		::System::Boolean KDADBKCLLMJ; // 0x3C
		::System::Boolean NHPMGCIEECA; // 0x3D
		::System::Boolean IGEEODNKPGD; // 0x3E
		::System::Byte _padding0[0x1];
		::System::Single BPAIDCADMDO; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_PlayerUltimateQTE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_PlayerUltimateQTE*))((::PBYTE)hIl2Cpp + OPCEEOEPBPP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCEEOEPBPP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCEEOEPBPP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCEEOEPBPP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OPCEEOEPBPP_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskConfig* GetConfig()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCEEOEPBPP_GETCONFIG_OFFSET))(this);
		}

		::System::Single FCDJKDHNEEH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCEEOEPBPP_FCDJKDHNEEH_OFFSET))(this);
		}

		::System::Void ODEBPJPACKB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OPCEEOEPBPP_ODEBPJPACKB_OFFSET))(this, a1);
		}

		::System::Void NDNAIEKBOJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCEEOEPBPP_NDNAIEKBOJM_OFFSET))(this);
		}

		::System::Void HEFNAOFELLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCEEOEPBPP_HEFNAOFELLG_OFFSET))(this);
		}

		::System::Void CBLOPKOPFBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCEEOEPBPP_CBLOPKOPFBP_OFFSET))(this);
		}

		::System::Void GCIFFBOKJML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCEEOEPBPP_GCIFFBOKJML_OFFSET))(this);
		}

	};
