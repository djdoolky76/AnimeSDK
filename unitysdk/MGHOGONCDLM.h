#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/CrystalState.h"
#include "unitysdk/RPG/GCFreeClosure/ClosureEvent_3.h"
class HIOEAKHGILF;
namespace RPG { template <typename T> class PoolList_1; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MGHOGONCDLM_KOLDOPHICAF_OFFSET UNITYSDK_OFFSET(0x3C2FE10)
#define MGHOGONCDLM_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x3C2FE00)

inline static constexpr unsigned int MGHOGONCDLM_TypeDefinitionIndex = 43514;

	struct alignas(8) MGHOGONCDLM
	{
		::System::Boolean NOOJOFHAIAA; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::Client::LittleGame::FiveDim::CrystalState MEPFOEEGBEA; // 0x14
		::RPG::PoolList_1<::System::Int32>* NGMNLMKOIID; // 0x18
		::RPG::PoolList_1<::System::Int32>* CKBOEGJFOLL; // 0x20
		::System::Int32 AMDLCBJOEDG; // 0x28
		::System::Byte _padding1[0x4];
		::System::Action_2<::HIOEAKHGILF*, ::System::Boolean>* OIFAPNBDGLA; // 0x30
		::System::Single IGKIAABIANL; // 0x38
		::RPG::Client::LittleGame::FiveDim::CrystalState BCJIEOJAPLM; // 0x3C
		::System::Boolean MINGACDOIAO; // 0x40
		::System::Byte _padding2[0x7];
		::RPG::GCFreeClosure::ClosureEvent_3<::HIOEAKHGILF*, ::RPG::Client::LittleGame::FiveDim::CrystalState, ::System::Boolean> HGOJNFKDIMA; // 0x48
		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHOGONCDLM_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void KOLDOPHICAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHOGONCDLM_KOLDOPHICAF_OFFSET))(this);
		}

	};
