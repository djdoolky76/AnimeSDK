#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBEKHGCNJFD.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"
namespace RPG::Client { class SwordTrainingGameInstance; }
namespace System { class Object; }

#define OHEPDDMKCBH_ANPDFDKEHIB_OFFSET UNITYSDK_OFFSET(0x18E0CFE0)
#define OHEPDDMKCBH_BJLJAHMLKIO_OFFSET UNITYSDK_OFFSET(0x18E0D400)
#define OHEPDDMKCBH_CAJLLNIOJNA_OFFSET UNITYSDK_OFFSET(0x18E0C5B0)
#define OHEPDDMKCBH_CEPBDJMMFLC_OFFSET UNITYSDK_OFFSET(0x18E0D1B0)
#define OHEPDDMKCBH_CTOR_OFFSET UNITYSDK_OFFSET(0x18E0C250)
#define OHEPDDMKCBH_DOHDFNJKAKP_OFFSET UNITYSDK_OFFSET(0x18E0C960)
#define OHEPDDMKCBH_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x18E0C330)
#define OHEPDDMKCBH_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0x18E0C2E0)
#define OHEPDDMKCBH_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0x18E0D4A0)
#define OHEPDDMKCBH_LDIKDGHPCCL_OFFSET UNITYSDK_OFFSET(0x18E0D270)
#define OHEPDDMKCBH_MPHFKAOBHAL_OFFSET UNITYSDK_OFFSET(0x18E0CCF0)
#define OHEPDDMKCBH___ONBATTLEFINISHED_B__10_0_OFFSET UNITYSDK_OFFSET(0x18E0D6C0)
#define OHEPDDMKCBH___PLAYSIMPLIFIEDPERFORMANCE_B__7_0_OFFSET UNITYSDK_OFFSET(0x18E0D520)
#define OHEPDDMKCBH___STARTPREBATTLEPERFORMANCE_B__8_0_OFFSET UNITYSDK_OFFSET(0x18E0D6B0)

inline static constexpr unsigned int OHEPDDMKCBH_TypeDefinitionIndex = 77361;

	class OHEPDDMKCBH : public ::NBEKHGCNJFD
	{
	public:
		::System::Boolean DBPCILLOFDP; // 0x28
		::System::Boolean DNGLACKLGBL; // 0x29
		::System::Byte _padding0[0x2];
		::System::UInt32 EDAOBLALAEH; // 0x2C
		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + OHEPDDMKCBH_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::SwordTraining::SwordTrainingGameStateType JKOKFFCBJLJ()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEPDDMKCBH_JKOKFFCBJLJ_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::RPG::Client::SwordTrainingGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + OHEPDDMKCBH_FFKBFPKEPEN_OFFSET))(this, a1);
		}

		::System::Void CAJLLNIOJNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEPDDMKCBH_CAJLLNIOJNA_OFFSET))(this);
		}

		::System::Void DOHDFNJKAKP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OHEPDDMKCBH_DOHDFNJKAKP_OFFSET))(this, a1);
		}

		::System::Void ANPDFDKEHIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEPDDMKCBH_ANPDFDKEHIB_OFFSET))(this);
		}

		::System::Void MPHFKAOBHAL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OHEPDDMKCBH_MPHFKAOBHAL_OFFSET))(this, a1);
		}

		::System::Void CEPBDJMMFLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEPDDMKCBH_CEPBDJMMFLC_OFFSET))(this);
		}

		::System::Void LDIKDGHPCCL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OHEPDDMKCBH_LDIKDGHPCCL_OFFSET))(this, a1);
		}

		::System::Void BJLJAHMLKIO(::RPG::Client::SwordTrainingGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + OHEPDDMKCBH_BJLJAHMLKIO_OFFSET))(this, a1);
		}

		::System::Void KOHOGMCJHBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEPDDMKCBH_KOHOGMCJHBH_OFFSET))(this);
		}

		::System::Void __PlaySimplifiedPerformance_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEPDDMKCBH___PLAYSIMPLIFIEDPERFORMANCE_B__7_0_OFFSET))(this);
		}

		::System::Void __StartPreBattlePerformance_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEPDDMKCBH___STARTPREBATTLEPERFORMANCE_B__8_0_OFFSET))(this);
		}

		::System::Void __OnBattleFinished_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHEPDDMKCBH___ONBATTLEFINISHED_B__10_0_OFFSET))(this);
		}

	};
